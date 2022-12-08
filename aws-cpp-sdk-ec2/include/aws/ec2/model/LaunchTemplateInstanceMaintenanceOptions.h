/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/LaunchTemplateAutoRecoveryState.h>
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
   * <p>The maintenance options of your instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateInstanceMaintenanceOptions">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateInstanceMaintenanceOptions
  {
  public:
    AWS_EC2_API LaunchTemplateInstanceMaintenanceOptions();
    AWS_EC2_API LaunchTemplateInstanceMaintenanceOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateInstanceMaintenanceOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline const LaunchTemplateAutoRecoveryState& GetAutoRecovery() const{ return m_autoRecovery; }

    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline bool AutoRecoveryHasBeenSet() const { return m_autoRecoveryHasBeenSet; }

    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline void SetAutoRecovery(const LaunchTemplateAutoRecoveryState& value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = value; }

    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline void SetAutoRecovery(LaunchTemplateAutoRecoveryState&& value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = std::move(value); }

    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline LaunchTemplateInstanceMaintenanceOptions& WithAutoRecovery(const LaunchTemplateAutoRecoveryState& value) { SetAutoRecovery(value); return *this;}

    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline LaunchTemplateInstanceMaintenanceOptions& WithAutoRecovery(LaunchTemplateAutoRecoveryState&& value) { SetAutoRecovery(std::move(value)); return *this;}

  private:

    LaunchTemplateAutoRecoveryState m_autoRecovery;
    bool m_autoRecoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
