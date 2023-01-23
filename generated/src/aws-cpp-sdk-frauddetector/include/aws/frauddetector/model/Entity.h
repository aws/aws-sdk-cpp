/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The entity details. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/Entity">AWS
   * API Reference</a></p>
   */
  class Entity
  {
  public:
    AWS_FRAUDDETECTOR_API Entity();
    AWS_FRAUDDETECTOR_API Entity(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The entity type.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The entity type.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The entity type.</p>
     */
    inline void SetEntityType(const Aws::String& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The entity type.</p>
     */
    inline void SetEntityType(Aws::String&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The entity type.</p>
     */
    inline void SetEntityType(const char* value) { m_entityTypeHasBeenSet = true; m_entityType.assign(value); }

    /**
     * <p>The entity type.</p>
     */
    inline Entity& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}

    /**
     * <p>The entity type.</p>
     */
    inline Entity& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}

    /**
     * <p>The entity type.</p>
     */
    inline Entity& WithEntityType(const char* value) { SetEntityType(value); return *this;}


    /**
     * <p>The entity ID. If you do not know the <code>entityId</code>, you can pass
     * <code>unknown</code>, which is areserved string literal.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The entity ID. If you do not know the <code>entityId</code>, you can pass
     * <code>unknown</code>, which is areserved string literal.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The entity ID. If you do not know the <code>entityId</code>, you can pass
     * <code>unknown</code>, which is areserved string literal.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The entity ID. If you do not know the <code>entityId</code>, you can pass
     * <code>unknown</code>, which is areserved string literal.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The entity ID. If you do not know the <code>entityId</code>, you can pass
     * <code>unknown</code>, which is areserved string literal.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The entity ID. If you do not know the <code>entityId</code>, you can pass
     * <code>unknown</code>, which is areserved string literal.</p>
     */
    inline Entity& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The entity ID. If you do not know the <code>entityId</code>, you can pass
     * <code>unknown</code>, which is areserved string literal.</p>
     */
    inline Entity& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The entity ID. If you do not know the <code>entityId</code>, you can pass
     * <code>unknown</code>, which is areserved string literal.</p>
     */
    inline Entity& WithEntityId(const char* value) { SetEntityId(value); return *this;}

  private:

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
