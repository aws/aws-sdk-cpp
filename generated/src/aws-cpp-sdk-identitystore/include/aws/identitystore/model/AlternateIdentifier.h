/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/model/ExternalId.h>
#include <aws/identitystore/model/UniqueAttribute.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>A unique identifier for a user or group that is not the primary identifier.
   * This value can be an identifier from an external identity provider (IdP) that is
   * associated with the user, the group, or a unique attribute. For example, a
   * unique <code>GroupDisplayName</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/AlternateIdentifier">AWS
   * API Reference</a></p>
   */
  class AlternateIdentifier
  {
  public:
    AWS_IDENTITYSTORE_API AlternateIdentifier();
    AWS_IDENTITYSTORE_API AlternateIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API AlternateIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline const ExternalId& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline void SetExternalId(const ExternalId& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline void SetExternalId(ExternalId&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline AlternateIdentifier& WithExternalId(const ExternalId& value) { SetExternalId(value); return *this;}

    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline AlternateIdentifier& WithExternalId(ExternalId&& value) { SetExternalId(std::move(value)); return *this;}


    /**
     * <p>An entity attribute that's unique to a specific entity.</p>
     */
    inline const UniqueAttribute& GetUniqueAttribute() const{ return m_uniqueAttribute; }

    /**
     * <p>An entity attribute that's unique to a specific entity.</p>
     */
    inline bool UniqueAttributeHasBeenSet() const { return m_uniqueAttributeHasBeenSet; }

    /**
     * <p>An entity attribute that's unique to a specific entity.</p>
     */
    inline void SetUniqueAttribute(const UniqueAttribute& value) { m_uniqueAttributeHasBeenSet = true; m_uniqueAttribute = value; }

    /**
     * <p>An entity attribute that's unique to a specific entity.</p>
     */
    inline void SetUniqueAttribute(UniqueAttribute&& value) { m_uniqueAttributeHasBeenSet = true; m_uniqueAttribute = std::move(value); }

    /**
     * <p>An entity attribute that's unique to a specific entity.</p>
     */
    inline AlternateIdentifier& WithUniqueAttribute(const UniqueAttribute& value) { SetUniqueAttribute(value); return *this;}

    /**
     * <p>An entity attribute that's unique to a specific entity.</p>
     */
    inline AlternateIdentifier& WithUniqueAttribute(UniqueAttribute&& value) { SetUniqueAttribute(std::move(value)); return *this;}

  private:

    ExternalId m_externalId;
    bool m_externalIdHasBeenSet = false;

    UniqueAttribute m_uniqueAttribute;
    bool m_uniqueAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
