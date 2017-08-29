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
  class AWS_EC2_API ReservedInstancesModificationResponse
  {
  public:
    ReservedInstancesModificationResponse();
    ReservedInstancesModificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservedInstancesModificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_reservedInstancesIdHasBeenSet;

    ReservedInstancesConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
