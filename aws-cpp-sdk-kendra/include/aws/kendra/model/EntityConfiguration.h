/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/EntityType.h>
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
   * <p>Provides the configuration information for users or groups in your IAM
   * Identity Center identity source to grant access your Amazon Kendra
   * experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/EntityConfiguration">AWS
   * API Reference</a></p>
   */
  class EntityConfiguration
  {
  public:
    AWS_KENDRA_API EntityConfiguration();
    AWS_KENDRA_API EntityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API EntityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline EntityConfiguration& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline EntityConfiguration& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline EntityConfiguration& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>Specifies whether you are configuring a <code>User</code> or a
     * <code>Group</code>.</p>
     */
    inline const EntityType& GetEntityType() const{ return m_entityType; }

    /**
     * <p>Specifies whether you are configuring a <code>User</code> or a
     * <code>Group</code>.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>Specifies whether you are configuring a <code>User</code> or a
     * <code>Group</code>.</p>
     */
    inline void SetEntityType(const EntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>Specifies whether you are configuring a <code>User</code> or a
     * <code>Group</code>.</p>
     */
    inline void SetEntityType(EntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>Specifies whether you are configuring a <code>User</code> or a
     * <code>Group</code>.</p>
     */
    inline EntityConfiguration& WithEntityType(const EntityType& value) { SetEntityType(value); return *this;}

    /**
     * <p>Specifies whether you are configuring a <code>User</code> or a
     * <code>Group</code>.</p>
     */
    inline EntityConfiguration& WithEntityType(EntityType&& value) { SetEntityType(std::move(value)); return *this;}

  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    EntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
