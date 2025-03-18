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
   * associated with the user, the group, or a unique attribute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/AlternateIdentifier">AWS
   * API Reference</a></p>
   */
  class AlternateIdentifier
  {
  public:
    AWS_IDENTITYSTORE_API AlternateIdentifier() = default;
    AWS_IDENTITYSTORE_API AlternateIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API AlternateIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier issued to this resource by an external identity provider.</p>
     */
    inline const ExternalId& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = ExternalId>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = ExternalId>
    AlternateIdentifier& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An entity attribute that's unique to a specific entity.</p>
     */
    inline const UniqueAttribute& GetUniqueAttribute() const { return m_uniqueAttribute; }
    inline bool UniqueAttributeHasBeenSet() const { return m_uniqueAttributeHasBeenSet; }
    template<typename UniqueAttributeT = UniqueAttribute>
    void SetUniqueAttribute(UniqueAttributeT&& value) { m_uniqueAttributeHasBeenSet = true; m_uniqueAttribute = std::forward<UniqueAttributeT>(value); }
    template<typename UniqueAttributeT = UniqueAttribute>
    AlternateIdentifier& WithUniqueAttribute(UniqueAttributeT&& value) { SetUniqueAttribute(std::forward<UniqueAttributeT>(value)); return *this;}
    ///@}
  private:

    ExternalId m_externalId;
    bool m_externalIdHasBeenSet = false;

    UniqueAttribute m_uniqueAttribute;
    bool m_uniqueAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
