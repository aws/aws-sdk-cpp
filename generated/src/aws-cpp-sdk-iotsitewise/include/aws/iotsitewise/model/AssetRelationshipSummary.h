/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetHierarchyInfo.h>
#include <aws/iotsitewise/model/AssetRelationshipType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains information about assets that are related to one
   * another.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetRelationshipSummary">AWS
   * API Reference</a></p>
   */
  class AssetRelationshipSummary
  {
  public:
    AWS_IOTSITEWISE_API AssetRelationshipSummary() = default;
    AWS_IOTSITEWISE_API AssetRelationshipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetRelationshipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The assets that are related through an asset hierarchy.</p> <p>This object is
     * present if the <code>relationshipType</code> is <code>HIERARCHY</code>.</p>
     */
    inline const AssetHierarchyInfo& GetHierarchyInfo() const { return m_hierarchyInfo; }
    inline bool HierarchyInfoHasBeenSet() const { return m_hierarchyInfoHasBeenSet; }
    template<typename HierarchyInfoT = AssetHierarchyInfo>
    void SetHierarchyInfo(HierarchyInfoT&& value) { m_hierarchyInfoHasBeenSet = true; m_hierarchyInfo = std::forward<HierarchyInfoT>(value); }
    template<typename HierarchyInfoT = AssetHierarchyInfo>
    AssetRelationshipSummary& WithHierarchyInfo(HierarchyInfoT&& value) { SetHierarchyInfo(std::forward<HierarchyInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relationship type of the assets in this relationship. This value is one
     * of the following:</p> <ul> <li> <p> <code>HIERARCHY</code> – The assets are
     * related through an asset hierarchy. If you specify this relationship type, this
     * asset relationship includes the <code>hierarchyInfo</code> object.</p> </li>
     * </ul>
     */
    inline AssetRelationshipType GetRelationshipType() const { return m_relationshipType; }
    inline bool RelationshipTypeHasBeenSet() const { return m_relationshipTypeHasBeenSet; }
    inline void SetRelationshipType(AssetRelationshipType value) { m_relationshipTypeHasBeenSet = true; m_relationshipType = value; }
    inline AssetRelationshipSummary& WithRelationshipType(AssetRelationshipType value) { SetRelationshipType(value); return *this;}
    ///@}
  private:

    AssetHierarchyInfo m_hierarchyInfo;
    bool m_hierarchyInfoHasBeenSet = false;

    AssetRelationshipType m_relationshipType{AssetRelationshipType::NOT_SET};
    bool m_relationshipTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
