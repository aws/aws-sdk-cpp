/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceAutoRecoveryState.h>
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
   * <p>The maintenance options for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceMaintenanceOptions">AWS
   * API Reference</a></p>
   */
  class InstanceMaintenanceOptions
  {
  public:
    AWS_EC2_API InstanceMaintenanceOptions();
    AWS_EC2_API InstanceMaintenanceOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceMaintenanceOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline const InstanceAutoRecoveryState& GetAutoRecovery() const{ return m_autoRecovery; }

    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline bool AutoRecoveryHasBeenSet() const { return m_autoRecoveryHasBeenSet; }

    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline void SetAutoRecovery(const InstanceAutoRecoveryState& value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = value; }

    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline void SetAutoRecovery(InstanceAutoRecoveryState&& value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = std::move(value); }

    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline InstanceMaintenanceOptions& WithAutoRecovery(const InstanceAutoRecoveryState& value) { SetAutoRecovery(value); return *this;}

    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline InstanceMaintenanceOptions& WithAutoRecovery(InstanceAutoRecoveryState&& value) { SetAutoRecovery(std::move(value)); return *this;}

  private:

    InstanceAutoRecoveryState m_autoRecovery;
    bool m_autoRecoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
