/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes the status of an Elastic Graphics accelerator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticGpuHealth">AWS
   * API Reference</a></p>
   */
  class ElasticGpuHealth
  {
  public:
    AWS_EC2_API ElasticGpuHealth();
    AWS_EC2_API ElasticGpuHealth(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ElasticGpuHealth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The health status.</p>
     */
    inline const ElasticGpuStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The health status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
