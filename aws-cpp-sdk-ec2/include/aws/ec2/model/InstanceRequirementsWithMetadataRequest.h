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
    AWS_EC2_API InstanceRequirementsWithMetadataRequest();
    AWS_EC2_API InstanceRequirementsWithMetadataRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceRequirementsWithMetadataRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The architecture type.</p>
     */
    inline const Aws::Vector<ArchitectureType>& GetArchitectureTypes() const{ return m_architectureTypes; }

    /**
     * <p>The architecture type.</p>
     */
    inline bool ArchitectureTypesHasBeenSet() const { return m_architectureTypesHasBeenSet; }

    /**
     * <p>The architecture type.</p>
     */
    inline void SetArchitectureTypes(const Aws::Vector<ArchitectureType>& value) { m_architectureTypesHasBeenSet = true; m_architectureTypes = value; }

    /**
     * <p>The architecture type.</p>
     */
    inline void SetArchitectureTypes(Aws::Vector<ArchitectureType>&& value) { m_architectureTypesHasBeenSet = true; m_architectureTypes = std::move(value); }

    /**
     * <p>The architecture type.</p>
     */
    inline InstanceRequirementsWithMetadataRequest& WithArchitectureTypes(const Aws::Vector<ArchitectureType>& value) { SetArchitectureTypes(value); return *this;}

    /**
     * <p>The architecture type.</p>
     */
    inline InstanceRequirementsWithMetadataRequest& WithArchitectureTypes(Aws::Vector<ArchitectureType>&& value) { SetArchitectureTypes(std::move(value)); return *this;}

    /**
     * <p>The architecture type.</p>
     */
    inline InstanceRequirementsWithMetadataRequest& AddArchitectureTypes(const ArchitectureType& value) { m_architectureTypesHasBeenSet = true; m_architectureTypes.push_back(value); return *this; }

    /**
     * <p>The architecture type.</p>
     */
    inline InstanceRequirementsWithMetadataRequest& AddArchitectureTypes(ArchitectureType&& value) { m_architectureTypesHasBeenSet = true; m_architectureTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The virtualization type.</p>
     */
    inline const Aws::Vector<VirtualizationType>& GetVirtualizationTypes() const{ return m_virtualizationTypes; }

    /**
     * <p>The virtualization type.</p>
     */
    inline bool VirtualizationTypesHasBeenSet() const { return m_virtualizationTypesHasBeenSet; }

    /**
     * <p>The virtualization type.</p>
     */
    inline void SetVirtualizationTypes(const Aws::Vector<VirtualizationType>& value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes = value; }

    /**
     * <p>The virtualization type.</p>
     */
    inline void SetVirtualizationTypes(Aws::Vector<VirtualizationType>&& value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes = std::move(value); }

    /**
     * <p>The virtualization type.</p>
     */
    inline InstanceRequirementsWithMetadataRequest& WithVirtualizationTypes(const Aws::Vector<VirtualizationType>& value) { SetVirtualizationTypes(value); return *this;}

    /**
     * <p>The virtualization type.</p>
     */
    inline InstanceRequirementsWithMetadataRequest& WithVirtualizationTypes(Aws::Vector<VirtualizationType>&& value) { SetVirtualizationTypes(std::move(value)); return *this;}

    /**
     * <p>The virtualization type.</p>
     */
    inline InstanceRequirementsWithMetadataRequest& AddVirtualizationTypes(const VirtualizationType& value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes.push_back(value); return *this; }

    /**
     * <p>The virtualization type.</p>
     */
    inline InstanceRequirementsWithMetadataRequest& AddVirtualizationTypes(VirtualizationType&& value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p>
     */
    inline const InstanceRequirementsRequest& GetInstanceRequirements() const{ return m_instanceRequirements; }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p>
     */
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p>
     */
    inline void SetInstanceRequirements(const InstanceRequirementsRequest& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = value; }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p>
     */
    inline void SetInstanceRequirements(InstanceRequirementsRequest&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::move(value); }

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p>
     */
    inline InstanceRequirementsWithMetadataRequest& WithInstanceRequirements(const InstanceRequirementsRequest& value) { SetInstanceRequirements(value); return *this;}

    /**
     * <p>The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with those attributes.</p>
     */
    inline InstanceRequirementsWithMetadataRequest& WithInstanceRequirements(InstanceRequirementsRequest&& value) { SetInstanceRequirements(std::move(value)); return *this;}

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
