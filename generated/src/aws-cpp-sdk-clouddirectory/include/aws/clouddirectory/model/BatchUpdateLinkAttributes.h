/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/TypedLinkSpecifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/LinkAttributeUpdate.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Updates a given typed link’s attributes inside a <a>BatchRead</a> operation.
   * Attributes to be updated must not contribute to the typed link’s identity, as
   * defined by its <code>IdentityAttributeOrder</code>. For more information, see
   * <a>UpdateLinkAttributes</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchUpdateLinkAttributes">AWS
   * API Reference</a></p>
   */
  class BatchUpdateLinkAttributes
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchUpdateLinkAttributes() = default;
    AWS_CLOUDDIRECTORY_API BatchUpdateLinkAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchUpdateLinkAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows a typed link specifier to be accepted as input.</p>
     */
    inline const TypedLinkSpecifier& GetTypedLinkSpecifier() const { return m_typedLinkSpecifier; }
    inline bool TypedLinkSpecifierHasBeenSet() const { return m_typedLinkSpecifierHasBeenSet; }
    template<typename TypedLinkSpecifierT = TypedLinkSpecifier>
    void SetTypedLinkSpecifier(TypedLinkSpecifierT&& value) { m_typedLinkSpecifierHasBeenSet = true; m_typedLinkSpecifier = std::forward<TypedLinkSpecifierT>(value); }
    template<typename TypedLinkSpecifierT = TypedLinkSpecifier>
    BatchUpdateLinkAttributes& WithTypedLinkSpecifier(TypedLinkSpecifierT&& value) { SetTypedLinkSpecifier(std::forward<TypedLinkSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes update structure.</p>
     */
    inline const Aws::Vector<LinkAttributeUpdate>& GetAttributeUpdates() const { return m_attributeUpdates; }
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }
    template<typename AttributeUpdatesT = Aws::Vector<LinkAttributeUpdate>>
    void SetAttributeUpdates(AttributeUpdatesT&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::forward<AttributeUpdatesT>(value); }
    template<typename AttributeUpdatesT = Aws::Vector<LinkAttributeUpdate>>
    BatchUpdateLinkAttributes& WithAttributeUpdates(AttributeUpdatesT&& value) { SetAttributeUpdates(std::forward<AttributeUpdatesT>(value)); return *this;}
    template<typename AttributeUpdatesT = LinkAttributeUpdate>
    BatchUpdateLinkAttributes& AddAttributeUpdates(AttributeUpdatesT&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace_back(std::forward<AttributeUpdatesT>(value)); return *this; }
    ///@}
  private:

    TypedLinkSpecifier m_typedLinkSpecifier;
    bool m_typedLinkSpecifierHasBeenSet = false;

    Aws::Vector<LinkAttributeUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
