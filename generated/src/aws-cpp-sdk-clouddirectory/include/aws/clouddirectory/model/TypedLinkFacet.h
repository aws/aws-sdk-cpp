/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/TypedLinkAttributeDefinition.h>
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
   * <p>Defines the typed links structure and its attributes. To create a typed link
   * facet, use the <a>CreateTypedLinkFacet</a> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TypedLinkFacet">AWS
   * API Reference</a></p>
   */
  class TypedLinkFacet
  {
  public:
    AWS_CLOUDDIRECTORY_API TypedLinkFacet() = default;
    AWS_CLOUDDIRECTORY_API TypedLinkFacet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedLinkFacet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TypedLinkFacet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key-value pairs associated with the typed link. Typed link
     * attributes are used when you have data values that are related to the link
     * itself, and not to one of the two objects being linked. Identity attributes also
     * serve to distinguish the link from others of the same type between the same
     * objects.</p>
     */
    inline const Aws::Vector<TypedLinkAttributeDefinition>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<TypedLinkAttributeDefinition>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<TypedLinkAttributeDefinition>>
    TypedLinkFacet& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = TypedLinkAttributeDefinition>
    TypedLinkFacet& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of attributes that distinguish links made from this facet from each
     * other, in the order of significance. Listing typed links can filter on the
     * values of these attributes. See <a>ListOutgoingTypedLinks</a> and
     * <a>ListIncomingTypedLinks</a> for details.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentityAttributeOrder() const { return m_identityAttributeOrder; }
    inline bool IdentityAttributeOrderHasBeenSet() const { return m_identityAttributeOrderHasBeenSet; }
    template<typename IdentityAttributeOrderT = Aws::Vector<Aws::String>>
    void SetIdentityAttributeOrder(IdentityAttributeOrderT&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder = std::forward<IdentityAttributeOrderT>(value); }
    template<typename IdentityAttributeOrderT = Aws::Vector<Aws::String>>
    TypedLinkFacet& WithIdentityAttributeOrder(IdentityAttributeOrderT&& value) { SetIdentityAttributeOrder(std::forward<IdentityAttributeOrderT>(value)); return *this;}
    template<typename IdentityAttributeOrderT = Aws::String>
    TypedLinkFacet& AddIdentityAttributeOrder(IdentityAttributeOrderT&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.emplace_back(std::forward<IdentityAttributeOrderT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<TypedLinkAttributeDefinition> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<Aws::String> m_identityAttributeOrder;
    bool m_identityAttributeOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
