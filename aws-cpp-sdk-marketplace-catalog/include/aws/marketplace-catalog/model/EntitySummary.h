/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>This object is a container for common summary information about the entity.
   * The summary doesn't contain the whole entity structure, but it does contain
   * information common across all entities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/EntitySummary">AWS
   * API Reference</a></p>
   */
  class EntitySummary
  {
  public:
    AWS_MARKETPLACECATALOG_API EntitySummary();
    AWS_MARKETPLACECATALOG_API EntitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API EntitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for the entity. This value is not unique. It is defined by the
     * seller.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the entity. This value is not unique. It is defined by the
     * seller.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the entity. This value is not unique. It is defined by the
     * seller.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the entity. This value is not unique. It is defined by the
     * seller.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the entity. This value is not unique. It is defined by the
     * seller.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the entity. This value is not unique. It is defined by the
     * seller.</p>
     */
    inline EntitySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the entity. This value is not unique. It is defined by the
     * seller.</p>
     */
    inline EntitySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the entity. This value is not unique. It is defined by the
     * seller.</p>
     */
    inline EntitySummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the entity.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The type of the entity.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The type of the entity.</p>
     */
    inline void SetEntityType(const Aws::String& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The type of the entity.</p>
     */
    inline void SetEntityType(Aws::String&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The type of the entity.</p>
     */
    inline void SetEntityType(const char* value) { m_entityTypeHasBeenSet = true; m_entityType.assign(value); }

    /**
     * <p>The type of the entity.</p>
     */
    inline EntitySummary& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}

    /**
     * <p>The type of the entity.</p>
     */
    inline EntitySummary& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}

    /**
     * <p>The type of the entity.</p>
     */
    inline EntitySummary& WithEntityType(const char* value) { SetEntityType(value); return *this;}


    /**
     * <p>The unique identifier for the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The unique identifier for the entity.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The unique identifier for the entity.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The unique identifier for the entity.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The unique identifier for the entity.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The unique identifier for the entity.</p>
     */
    inline EntitySummary& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The unique identifier for the entity.</p>
     */
    inline EntitySummary& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the entity.</p>
     */
    inline EntitySummary& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The ARN associated with the unique identifier for the entity.</p>
     */
    inline const Aws::String& GetEntityArn() const{ return m_entityArn; }

    /**
     * <p>The ARN associated with the unique identifier for the entity.</p>
     */
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }

    /**
     * <p>The ARN associated with the unique identifier for the entity.</p>
     */
    inline void SetEntityArn(const Aws::String& value) { m_entityArnHasBeenSet = true; m_entityArn = value; }

    /**
     * <p>The ARN associated with the unique identifier for the entity.</p>
     */
    inline void SetEntityArn(Aws::String&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::move(value); }

    /**
     * <p>The ARN associated with the unique identifier for the entity.</p>
     */
    inline void SetEntityArn(const char* value) { m_entityArnHasBeenSet = true; m_entityArn.assign(value); }

    /**
     * <p>The ARN associated with the unique identifier for the entity.</p>
     */
    inline EntitySummary& WithEntityArn(const Aws::String& value) { SetEntityArn(value); return *this;}

    /**
     * <p>The ARN associated with the unique identifier for the entity.</p>
     */
    inline EntitySummary& WithEntityArn(Aws::String&& value) { SetEntityArn(std::move(value)); return *this;}

    /**
     * <p>The ARN associated with the unique identifier for the entity.</p>
     */
    inline EntitySummary& WithEntityArn(const char* value) { SetEntityArn(value); return *this;}


    /**
     * <p>The last time the entity was published, using ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last time the entity was published, using ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The last time the entity was published, using ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last time the entity was published, using ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last time the entity was published, using ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The last time the entity was published, using ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline EntitySummary& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last time the entity was published, using ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline EntitySummary& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The last time the entity was published, using ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline EntitySummary& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The visibility status of the entity to buyers. This value can be
     * <code>Public</code> (everyone can view the entity), <code>Limited</code> (the
     * entity is visible to limited accounts only), or <code>Restricted</code> (the
     * entity was published and then unpublished and only existing buyers can view it).
     * </p>
     */
    inline const Aws::String& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility status of the entity to buyers. This value can be
     * <code>Public</code> (everyone can view the entity), <code>Limited</code> (the
     * entity is visible to limited accounts only), or <code>Restricted</code> (the
     * entity was published and then unpublished and only existing buyers can view it).
     * </p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility status of the entity to buyers. This value can be
     * <code>Public</code> (everyone can view the entity), <code>Limited</code> (the
     * entity is visible to limited accounts only), or <code>Restricted</code> (the
     * entity was published and then unpublished and only existing buyers can view it).
     * </p>
     */
    inline void SetVisibility(const Aws::String& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility status of the entity to buyers. This value can be
     * <code>Public</code> (everyone can view the entity), <code>Limited</code> (the
     * entity is visible to limited accounts only), or <code>Restricted</code> (the
     * entity was published and then unpublished and only existing buyers can view it).
     * </p>
     */
    inline void SetVisibility(Aws::String&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility status of the entity to buyers. This value can be
     * <code>Public</code> (everyone can view the entity), <code>Limited</code> (the
     * entity is visible to limited accounts only), or <code>Restricted</code> (the
     * entity was published and then unpublished and only existing buyers can view it).
     * </p>
     */
    inline void SetVisibility(const char* value) { m_visibilityHasBeenSet = true; m_visibility.assign(value); }

    /**
     * <p>The visibility status of the entity to buyers. This value can be
     * <code>Public</code> (everyone can view the entity), <code>Limited</code> (the
     * entity is visible to limited accounts only), or <code>Restricted</code> (the
     * entity was published and then unpublished and only existing buyers can view it).
     * </p>
     */
    inline EntitySummary& WithVisibility(const Aws::String& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility status of the entity to buyers. This value can be
     * <code>Public</code> (everyone can view the entity), <code>Limited</code> (the
     * entity is visible to limited accounts only), or <code>Restricted</code> (the
     * entity was published and then unpublished and only existing buyers can view it).
     * </p>
     */
    inline EntitySummary& WithVisibility(Aws::String&& value) { SetVisibility(std::move(value)); return *this;}

    /**
     * <p>The visibility status of the entity to buyers. This value can be
     * <code>Public</code> (everyone can view the entity), <code>Limited</code> (the
     * entity is visible to limited accounts only), or <code>Restricted</code> (the
     * entity was published and then unpublished and only existing buyers can view it).
     * </p>
     */
    inline EntitySummary& WithVisibility(const char* value) { SetVisibility(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
