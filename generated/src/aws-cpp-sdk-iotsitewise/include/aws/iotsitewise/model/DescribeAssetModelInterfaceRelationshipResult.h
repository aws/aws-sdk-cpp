/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/PropertyMapping.h>
#include <aws/iotsitewise/model/HierarchyMapping.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribeAssetModelInterfaceRelationshipResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeAssetModelInterfaceRelationshipResult() = default;
    AWS_IOTSITEWISE_API DescribeAssetModelInterfaceRelationshipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetModelInterfaceRelationshipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset model.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    DescribeAssetModelInterfaceRelationshipResult& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the interface asset model.</p>
     */
    inline const Aws::String& GetInterfaceAssetModelId() const { return m_interfaceAssetModelId; }
    template<typename InterfaceAssetModelIdT = Aws::String>
    void SetInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { m_interfaceAssetModelIdHasBeenSet = true; m_interfaceAssetModelId = std::forward<InterfaceAssetModelIdT>(value); }
    template<typename InterfaceAssetModelIdT = Aws::String>
    DescribeAssetModelInterfaceRelationshipResult& WithInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { SetInterfaceAssetModelId(std::forward<InterfaceAssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of property mappings between the interface asset model and the asset
     * model where the interface is applied.</p>
     */
    inline const Aws::Vector<PropertyMapping>& GetPropertyMappings() const { return m_propertyMappings; }
    template<typename PropertyMappingsT = Aws::Vector<PropertyMapping>>
    void SetPropertyMappings(PropertyMappingsT&& value) { m_propertyMappingsHasBeenSet = true; m_propertyMappings = std::forward<PropertyMappingsT>(value); }
    template<typename PropertyMappingsT = Aws::Vector<PropertyMapping>>
    DescribeAssetModelInterfaceRelationshipResult& WithPropertyMappings(PropertyMappingsT&& value) { SetPropertyMappings(std::forward<PropertyMappingsT>(value)); return *this;}
    template<typename PropertyMappingsT = PropertyMapping>
    DescribeAssetModelInterfaceRelationshipResult& AddPropertyMappings(PropertyMappingsT&& value) { m_propertyMappingsHasBeenSet = true; m_propertyMappings.emplace_back(std::forward<PropertyMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of hierarchy mappings between the interface asset model and the asset
     * model where the interface is applied.</p>
     */
    inline const Aws::Vector<HierarchyMapping>& GetHierarchyMappings() const { return m_hierarchyMappings; }
    template<typename HierarchyMappingsT = Aws::Vector<HierarchyMapping>>
    void SetHierarchyMappings(HierarchyMappingsT&& value) { m_hierarchyMappingsHasBeenSet = true; m_hierarchyMappings = std::forward<HierarchyMappingsT>(value); }
    template<typename HierarchyMappingsT = Aws::Vector<HierarchyMapping>>
    DescribeAssetModelInterfaceRelationshipResult& WithHierarchyMappings(HierarchyMappingsT&& value) { SetHierarchyMappings(std::forward<HierarchyMappingsT>(value)); return *this;}
    template<typename HierarchyMappingsT = HierarchyMapping>
    DescribeAssetModelInterfaceRelationshipResult& AddHierarchyMappings(HierarchyMappingsT&& value) { m_hierarchyMappingsHasBeenSet = true; m_hierarchyMappings.emplace_back(std::forward<HierarchyMappingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssetModelInterfaceRelationshipResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_interfaceAssetModelId;
    bool m_interfaceAssetModelIdHasBeenSet = false;

    Aws::Vector<PropertyMapping> m_propertyMappings;
    bool m_propertyMappingsHasBeenSet = false;

    Aws::Vector<HierarchyMapping> m_hierarchyMappings;
    bool m_hierarchyMappingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
