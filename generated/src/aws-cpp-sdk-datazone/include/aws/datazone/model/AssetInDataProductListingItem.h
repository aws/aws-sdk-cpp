/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The listing of the asset in a data product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetInDataProductListingItem">AWS
   * API Reference</a></p>
   */
  class AssetInDataProductListingItem
  {
  public:
    AWS_DATAZONE_API AssetInDataProductListingItem() = default;
    AWS_DATAZONE_API AssetInDataProductListingItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetInDataProductListingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity ID of the listing of the asset in a data product.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    AssetInDataProductListingItem& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity revision of the listing of the asset in a data product.</p>
     */
    inline const Aws::String& GetEntityRevision() const { return m_entityRevision; }
    inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }
    template<typename EntityRevisionT = Aws::String>
    void SetEntityRevision(EntityRevisionT&& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = std::forward<EntityRevisionT>(value); }
    template<typename EntityRevisionT = Aws::String>
    AssetInDataProductListingItem& WithEntityRevision(EntityRevisionT&& value) { SetEntityRevision(std::forward<EntityRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type of the listing of the asset in a data product.</p>
     */
    inline const Aws::String& GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    template<typename EntityTypeT = Aws::String>
    void SetEntityType(EntityTypeT&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::forward<EntityTypeT>(value); }
    template<typename EntityTypeT = Aws::String>
    AssetInDataProductListingItem& WithEntityType(EntityTypeT&& value) { SetEntityType(std::forward<EntityTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityRevision;
    bool m_entityRevisionHasBeenSet = false;

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
