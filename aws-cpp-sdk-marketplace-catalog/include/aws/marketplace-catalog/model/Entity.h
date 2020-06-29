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
   * <p>A product entity contains data that describes your product, its supported
   * features, and how it can be used or launched by your customer. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/Entity">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACECATALOG_API Entity
  {
  public:
    Entity();
    Entity(Aws::Utils::Json::JsonView jsonValue);
    Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of entity.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of entity.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of entity.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of entity.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of entity.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of entity.</p>
     */
    inline Entity& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of entity.</p>
     */
    inline Entity& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of entity.</p>
     */
    inline Entity& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The identifier for the entity.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier for the entity.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier for the entity.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier for the entity.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier for the entity.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier for the entity.</p>
     */
    inline Entity& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier for the entity.</p>
     */
    inline Entity& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the entity.</p>
     */
    inline Entity& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
