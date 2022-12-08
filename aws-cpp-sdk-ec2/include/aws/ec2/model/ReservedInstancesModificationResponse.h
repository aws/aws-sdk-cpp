/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ReservedInstancesConfiguration.h>
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
   * <p>Describes the modification request/s.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedInstancesModificationResult">AWS
   * API Reference</a></p>
   */
  class ReservedInstancesModificationResponse
  {
  public:
    AWS_EC2_API ReservedInstancesModificationResponse();
    AWS_EC2_API ReservedInstancesModificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReservedInstancesModificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID for the Reserved Instances that were created as part of the
     * modification request. This field is only available when the modification is
     * fulfilled.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const{ return m_reservedInstancesId; }

    /**
     * <p>The ID for the Reserved Instances that were created as part of the
     * modification request. This field is only available when the modification is
     * fulfilled.</p>
     */
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }

    /**
     * <p>The ID for the Reserved Instances that were created as part of the
     * modification request. This field is only available when the modification is
     * fulfilled.</p>
     */
    inline void SetReservedInstancesId(const Aws::String& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = value; }

    /**
     * <p>The ID for the Reserved Instances that were created as part of the
     * modification request. This field is only available when the modification is
     * fulfilled.</p>
     */
    inline void SetReservedInstancesId(Aws::String&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::move(value); }

    /**
     * <p>The ID for the Reserved Instances that were created as part of the
     * modification request. This field is only available when the modification is
     * fulfilled.</p>
     */
    inline void SetReservedInstancesId(const char* value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId.assign(value); }

    /**
     * <p>The ID for the Reserved Instances that were created as part of the
     * modification request. This field is only available when the modification is
     * fulfilled.</p>
     */
    inline ReservedInstancesModificationResponse& WithReservedInstancesId(const Aws::String& value) { SetReservedInstancesId(value); return *this;}

    /**
     * <p>The ID for the Reserved Instances that were created as part of the
     * modification request. This field is only available when the modification is
     * fulfilled.</p>
     */
    inline ReservedInstancesModificationResponse& WithReservedInstancesId(Aws::String&& value) { SetReservedInstancesId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Reserved Instances that were created as part of the
     * modification request. This field is only available when the modification is
     * fulfilled.</p>
     */
    inline ReservedInstancesModificationResponse& WithReservedInstancesId(const char* value) { SetReservedInstancesId(value); return *this;}


    /**
     * <p>The target Reserved Instances configurations supplied as part of the
     * modification request.</p>
     */
    inline const ReservedInstancesConfiguration& GetTargetConfiguration() const{ return m_targetConfiguration; }

    /**
     * <p>The target Reserved Instances configurations supplied as part of the
     * modification request.</p>
     */
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }

    /**
     * <p>The target Reserved Instances configurations supplied as part of the
     * modification request.</p>
     */
    inline void SetTargetConfiguration(const ReservedInstancesConfiguration& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = value; }

    /**
     * <p>The target Reserved Instances configurations supplied as part of the
     * modification request.</p>
     */
    inline void SetTargetConfiguration(ReservedInstancesConfiguration&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::move(value); }

    /**
     * <p>The target Reserved Instances configurations supplied as part of the
     * modification request.</p>
     */
    inline ReservedInstancesModificationResponse& WithTargetConfiguration(const ReservedInstancesConfiguration& value) { SetTargetConfiguration(value); return *this;}

    /**
     * <p>The target Reserved Instances configurations supplied as part of the
     * modification request.</p>
     */
    inline ReservedInstancesModificationResponse& WithTargetConfiguration(ReservedInstancesConfiguration&& value) { SetTargetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet = false;

    ReservedInstancesConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
