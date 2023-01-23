/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/EntityType.h>
#include <aws/kendra/model/EntityDisplayData.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Summary information for users or groups in your IAM Identity Center identity
   * source with granted access to your Amazon Kendra experience. You can create an
   * Amazon Kendra experience such as a search application. For more information on
   * creating a search application experience, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
   * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ExperienceEntitiesSummary">AWS
   * API Reference</a></p>
   */
  class ExperienceEntitiesSummary
  {
  public:
    AWS_KENDRA_API ExperienceEntitiesSummary();
    AWS_KENDRA_API ExperienceEntitiesSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ExperienceEntitiesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline ExperienceEntitiesSummary& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline ExperienceEntitiesSummary& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline ExperienceEntitiesSummary& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>Shows the type as <code>User</code> or <code>Group</code>.</p>
     */
    inline const EntityType& GetEntityType() const{ return m_entityType; }

    /**
     * <p>Shows the type as <code>User</code> or <code>Group</code>.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>Shows the type as <code>User</code> or <code>Group</code>.</p>
     */
    inline void SetEntityType(const EntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>Shows the type as <code>User</code> or <code>Group</code>.</p>
     */
    inline void SetEntityType(EntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>Shows the type as <code>User</code> or <code>Group</code>.</p>
     */
    inline ExperienceEntitiesSummary& WithEntityType(const EntityType& value) { SetEntityType(value); return *this;}

    /**
     * <p>Shows the type as <code>User</code> or <code>Group</code>.</p>
     */
    inline ExperienceEntitiesSummary& WithEntityType(EntityType&& value) { SetEntityType(std::move(value)); return *this;}


    /**
     * <p>Information about the user entity.</p>
     */
    inline const EntityDisplayData& GetDisplayData() const{ return m_displayData; }

    /**
     * <p>Information about the user entity.</p>
     */
    inline bool DisplayDataHasBeenSet() const { return m_displayDataHasBeenSet; }

    /**
     * <p>Information about the user entity.</p>
     */
    inline void SetDisplayData(const EntityDisplayData& value) { m_displayDataHasBeenSet = true; m_displayData = value; }

    /**
     * <p>Information about the user entity.</p>
     */
    inline void SetDisplayData(EntityDisplayData&& value) { m_displayDataHasBeenSet = true; m_displayData = std::move(value); }

    /**
     * <p>Information about the user entity.</p>
     */
    inline ExperienceEntitiesSummary& WithDisplayData(const EntityDisplayData& value) { SetDisplayData(value); return *this;}

    /**
     * <p>Information about the user entity.</p>
     */
    inline ExperienceEntitiesSummary& WithDisplayData(EntityDisplayData&& value) { SetDisplayData(std::move(value)); return *this;}

  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    EntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;

    EntityDisplayData m_displayData;
    bool m_displayDataHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
