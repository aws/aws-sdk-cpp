/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/Entity.h>
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
   * <p>An object that contains the <code>ChangeType</code>, <code>Details</code>,
   * and <code>Entity</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/Change">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACECATALOG_API Change
  {
  public:
    Change();
    Change(Aws::Utils::Json::JsonView jsonValue);
    Change& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Change types are single string values that describe your intention for the
     * change. Each change type is unique for each <code>EntityType</code> provided in
     * the change's scope.</p>
     */
    inline const Aws::String& GetChangeType() const{ return m_changeType; }

    /**
     * <p>Change types are single string values that describe your intention for the
     * change. Each change type is unique for each <code>EntityType</code> provided in
     * the change's scope.</p>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>Change types are single string values that describe your intention for the
     * change. Each change type is unique for each <code>EntityType</code> provided in
     * the change's scope.</p>
     */
    inline void SetChangeType(const Aws::String& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>Change types are single string values that describe your intention for the
     * change. Each change type is unique for each <code>EntityType</code> provided in
     * the change's scope.</p>
     */
    inline void SetChangeType(Aws::String&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>Change types are single string values that describe your intention for the
     * change. Each change type is unique for each <code>EntityType</code> provided in
     * the change's scope.</p>
     */
    inline void SetChangeType(const char* value) { m_changeTypeHasBeenSet = true; m_changeType.assign(value); }

    /**
     * <p>Change types are single string values that describe your intention for the
     * change. Each change type is unique for each <code>EntityType</code> provided in
     * the change's scope.</p>
     */
    inline Change& WithChangeType(const Aws::String& value) { SetChangeType(value); return *this;}

    /**
     * <p>Change types are single string values that describe your intention for the
     * change. Each change type is unique for each <code>EntityType</code> provided in
     * the change's scope.</p>
     */
    inline Change& WithChangeType(Aws::String&& value) { SetChangeType(std::move(value)); return *this;}

    /**
     * <p>Change types are single string values that describe your intention for the
     * change. Each change type is unique for each <code>EntityType</code> provided in
     * the change's scope.</p>
     */
    inline Change& WithChangeType(const char* value) { SetChangeType(value); return *this;}


    /**
     * <p>The entity to be changed.</p>
     */
    inline const Entity& GetEntity() const{ return m_entity; }

    /**
     * <p>The entity to be changed.</p>
     */
    inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }

    /**
     * <p>The entity to be changed.</p>
     */
    inline void SetEntity(const Entity& value) { m_entityHasBeenSet = true; m_entity = value; }

    /**
     * <p>The entity to be changed.</p>
     */
    inline void SetEntity(Entity&& value) { m_entityHasBeenSet = true; m_entity = std::move(value); }

    /**
     * <p>The entity to be changed.</p>
     */
    inline Change& WithEntity(const Entity& value) { SetEntity(value); return *this;}

    /**
     * <p>The entity to be changed.</p>
     */
    inline Change& WithEntity(Entity&& value) { SetEntity(std::move(value)); return *this;}


    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline Change& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline Change& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>This object contains details specific to the change type of the requested
     * change.</p>
     */
    inline Change& WithDetails(const char* value) { SetDetails(value); return *this;}

  private:

    Aws::String m_changeType;
    bool m_changeTypeHasBeenSet;

    Entity m_entity;
    bool m_entityHasBeenSet;

    Aws::String m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
