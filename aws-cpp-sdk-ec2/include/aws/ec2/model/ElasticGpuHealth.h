/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ElasticGpuStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the status of an Elastic GPU.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticGpuHealth">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ElasticGpuHealth
  {
  public:
    ElasticGpuHealth();
    ElasticGpuHealth(const Aws::Utils::Xml::XmlNode& xmlNode);
    ElasticGpuHealth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The health status.</p>
     */
    inline const ElasticGpuStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The health status.</p>
     */
    inline void SetStatus(const ElasticGpuStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The health status.</p>
     */
    inline void SetStatus(ElasticGpuStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The health status.</p>
     */
    inline ElasticGpuHealth& WithStatus(const ElasticGpuStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The health status.</p>
     */
    inline ElasticGpuHealth& WithStatus(ElasticGpuStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ElasticGpuStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
