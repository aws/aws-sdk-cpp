/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceRequirementsRequest.h>
#include <aws/ec2/model/ArchitectureType.h>
#include <aws/ec2/model/VirtualizationType.h>
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
   * <p>The architecture type, virtualization type, and other attributes for the
   * instance types. When you specify instance attributes, Amazon EC2 will identify
   * instance types with those attributes.</p> <p>If you specify
   * <code>InstanceRequirementsWithMetadataRequest</code>, you can't specify
   * <code>InstanceTypes</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceRequirementsWithMetadataRequest">AWS
   * API Reference</a></p>
   */
  class InstanceRequirementsWithMetadataRequest
  {
  public:
    AWS_EC2_API InstanceRequirementsWithMetadataRequest() = default;
    AWS_EC2_API InstanceRequirementsWithMetadataRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceRequirementsWithMetadataRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The architecture type.</p>
     */
    inline const Aws::Vector<ArchitectureType>& GetArchitectureTypes() const { return m_architectureTypes; }
    inline bool ArchitectureTypesHasBeenSet() const { return m_architectureTypesHasBeenSet; }
    template<typename ArchitectureTypesT = Aws::Vector<ArchitectureType>>
    void SetArchitectureTypes(ArchitectureTypesT&& value) { m_architectureTypesHasBeenSet = true; m_architectureTypes = std::forward<ArchitectureTypesT>(value); }
    template<typename ArchitectureTypesT = Aws::Vector<ArchitectureType>>
    InstanceRequirementsWithMetadataRequest& WithArchitectureTypes(ArchitectureTypesT&& value) { SetArchitectureTypes(std::forward<ArchitectureTypesT>(value)); return *this;}
    inline InstanceRequirementsWithMetadataRequest& AddArchitectureTypes(ArchitectureType value) { m_architectureTypesHasBeenSet = true; m_architectureTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The virtualization type.</p>
     */
    inline const Aws::Vector<VirtualizationType>& GetVirtualizationTypes() const { return m_virtualizationTypes; }
    inline bool VirtualizationTypesHasBeenSet() const { return m_virtualizationTypesHasBeenSet; }
    template<typename VirtualizationTypesT = Aws::Vector<VirtualizationType>>
    void SetVirtualizationTypes(VirtualizationTypesT&& value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes = std::forward<VirtualizationTypesT>(value); }
    template<typename VirtualizationTypesT = Aws::Vector<VirtualizationType>>
    InstanceRequirementsWithMetadataRequest& WithVirtualizationTypes(VirtualizationTypesT&& value) { SetVirtualizationTypes(std::forward<VirtualizationTypesT>(value)); return *this;}
    inline InstanceRequirementsWithMetadataRequest& AddVirtualizationTypes(VirtualizationType value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p>
     */
    inline const InstanceRequirementsRequest& GetInstanceRequirements() const { return m_instanceRequirements; }
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
    template<typename InstanceRequirementsT = InstanceRequirementsRequest>
    void SetInstanceRequirements(InstanceRequirementsT&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::forward<InstanceRequirementsT>(value); }
    template<typename InstanceRequirementsT = InstanceRequirementsRequest>
    InstanceRequirementsWithMetadataRequest& WithInstanceRequirements(InstanceRequirementsT&& value) { SetInstanceRequirements(std::forward<InstanceRequirementsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ArchitectureType> m_architectureTypes;
    bool m_architectureTypesHasBeenSet = false;

    Aws::Vector<VirtualizationType> m_virtualizationTypes;
    bool m_virtualizationTypesHasBeenSet = false;

    InstanceRequirementsRequest m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
