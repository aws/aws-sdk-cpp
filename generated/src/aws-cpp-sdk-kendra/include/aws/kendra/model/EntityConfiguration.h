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
    AWS_KENDRA_API EntityConfiguration() = default;
    AWS_KENDRA_API EntityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API EntityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    EntityConfiguration& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you are configuring a <code>User</code> or a
     * <code>Group</code>.</p>
     */
    inline EntityType GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(EntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline EntityConfiguration& WithEntityType(EntityType value) { SetEntityType(value); return *this;}
    ///@}
  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    EntityType m_entityType{EntityType::NOT_SET};
    bool m_entityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
