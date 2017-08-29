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
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/StatusName.h>
#include <aws/ec2/model/StatusType.h>
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
   * <p>Describes the instance status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceStatusDetails">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceStatusDetails
  {
  public:
    InstanceStatusDetails();
    InstanceStatusDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceStatusDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The time when a status check failed. For an instance that was launched and
     * impaired, this is the time when the instance was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetImpairedSince() const{ return m_impairedSince; }

    /**
     * <p>The time when a status check failed. For an instance that was launched and
     * impaired, this is the time when the instance was launched.</p>
     */
    inline void SetImpairedSince(const Aws::Utils::DateTime& value) { m_impairedSinceHasBeenSet = true; m_impairedSince = value; }

    /**
     * <p>The time when a status check failed. For an instance that was launched and
     * impaired, this is the time when the instance was launched.</p>
     */
    inline void SetImpairedSince(Aws::Utils::DateTime&& value) { m_impairedSinceHasBeenSet = true; m_impairedSince = std::move(value); }

    /**
     * <p>The time when a status check failed. For an instance that was launched and
     * impaired, this is the time when the instance was launched.</p>
     */
    inline InstanceStatusDetails& WithImpairedSince(const Aws::Utils::DateTime& value) { SetImpairedSince(value); return *this;}

    /**
     * <p>The time when a status check failed. For an instance that was launched and
     * impaired, this is the time when the instance was launched.</p>
     */
    inline InstanceStatusDetails& WithImpairedSince(Aws::Utils::DateTime&& value) { SetImpairedSince(std::move(value)); return *this;}


    /**
     * <p>The type of instance status.</p>
     */
    inline const StatusName& GetName() const{ return m_name; }

    /**
     * <p>The type of instance status.</p>
     */
    inline void SetName(const StatusName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The type of instance status.</p>
     */
    inline void SetName(StatusName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The type of instance status.</p>
     */
    inline InstanceStatusDetails& WithName(const StatusName& value) { SetName(value); return *this;}

    /**
     * <p>The type of instance status.</p>
     */
    inline InstanceStatusDetails& WithName(StatusName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The status.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline InstanceStatusDetails& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline InstanceStatusDetails& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_impairedSince;
    bool m_impairedSinceHasBeenSet;

    StatusName m_name;
    bool m_nameHasBeenSet;

    StatusType m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
