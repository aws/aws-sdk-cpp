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
    AWS_DATAZONE_API AssetInDataProductListingItem();
    AWS_DATAZONE_API AssetInDataProductListingItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetInDataProductListingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity ID of the listing of the asset in a data product.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline AssetInDataProductListingItem& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline AssetInDataProductListingItem& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline AssetInDataProductListingItem& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity revision of the listing of the asset in a data product.</p>
     */
    inline const Aws::String& GetEntityRevision() const{ return m_entityRevision; }
    inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }
    inline void SetEntityRevision(const Aws::String& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = value; }
    inline void SetEntityRevision(Aws::String&& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = std::move(value); }
    inline void SetEntityRevision(const char* value) { m_entityRevisionHasBeenSet = true; m_entityRevision.assign(value); }
    inline AssetInDataProductListingItem& WithEntityRevision(const Aws::String& value) { SetEntityRevision(value); return *this;}
    inline AssetInDataProductListingItem& WithEntityRevision(Aws::String&& value) { SetEntityRevision(std::move(value)); return *this;}
    inline AssetInDataProductListingItem& WithEntityRevision(const char* value) { SetEntityRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type of the listing of the asset in a data product.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(const Aws::String& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline void SetEntityType(Aws::String&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }
    inline void SetEntityType(const char* value) { m_entityTypeHasBeenSet = true; m_entityType.assign(value); }
    inline AssetInDataProductListingItem& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}
    inline AssetInDataProductListingItem& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}
    inline AssetInDataProductListingItem& WithEntityType(const char* value) { SetEntityType(value); return *this;}
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
