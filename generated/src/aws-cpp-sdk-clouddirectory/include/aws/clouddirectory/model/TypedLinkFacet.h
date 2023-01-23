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
    AWS_CLOUDDIRECTORY_API TypedLinkFacet();
    AWS_CLOUDDIRECTORY_API TypedLinkFacet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedLinkFacet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline TypedLinkFacet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline TypedLinkFacet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the typed link facet.</p>
     */
    inline TypedLinkFacet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A set of key-value pairs associated with the typed link. Typed link
     * attributes are used when you have data values that are related to the link
     * itself, and not to one of the two objects being linked. Identity attributes also
     * serve to distinguish the link from others of the same type between the same
     * objects.</p>
     */
    inline const Aws::Vector<TypedLinkAttributeDefinition>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A set of key-value pairs associated with the typed link. Typed link
     * attributes are used when you have data values that are related to the link
     * itself, and not to one of the two objects being linked. Identity attributes also
     * serve to distinguish the link from others of the same type between the same
     * objects.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A set of key-value pairs associated with the typed link. Typed link
     * attributes are used when you have data values that are related to the link
     * itself, and not to one of the two objects being linked. Identity attributes also
     * serve to distinguish the link from others of the same type between the same
     * objects.</p>
     */
    inline void SetAttributes(const Aws::Vector<TypedLinkAttributeDefinition>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A set of key-value pairs associated with the typed link. Typed link
     * attributes are used when you have data values that are related to the link
     * itself, and not to one of the two objects being linked. Identity attributes also
     * serve to distinguish the link from others of the same type between the same
     * objects.</p>
     */
    inline void SetAttributes(Aws::Vector<TypedLinkAttributeDefinition>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A set of key-value pairs associated with the typed link. Typed link
     * attributes are used when you have data values that are related to the link
     * itself, and not to one of the two objects being linked. Identity attributes also
     * serve to distinguish the link from others of the same type between the same
     * objects.</p>
     */
    inline TypedLinkFacet& WithAttributes(const Aws::Vector<TypedLinkAttributeDefinition>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A set of key-value pairs associated with the typed link. Typed link
     * attributes are used when you have data values that are related to the link
     * itself, and not to one of the two objects being linked. Identity attributes also
     * serve to distinguish the link from others of the same type between the same
     * objects.</p>
     */
    inline TypedLinkFacet& WithAttributes(Aws::Vector<TypedLinkAttributeDefinition>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A set of key-value pairs associated with the typed link. Typed link
     * attributes are used when you have data values that are related to the link
     * itself, and not to one of the two objects being linked. Identity attributes also
     * serve to distinguish the link from others of the same type between the same
     * objects.</p>
     */
    inline TypedLinkFacet& AddAttributes(const TypedLinkAttributeDefinition& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>A set of key-value pairs associated with the typed link. Typed link
     * attributes are used when you have data values that are related to the link
     * itself, and not to one of the two objects being linked. Identity attributes also
     * serve to distinguish the link from others of the same type between the same
     * objects.</p>
     */
    inline TypedLinkFacet& AddAttributes(TypedLinkAttributeDefinition&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The set of attributes that distinguish links made from this facet from each
     * other, in the order of significance. Listing typed links can filter on the
     * values of these attributes. See <a>ListOutgoingTypedLinks</a> and
     * <a>ListIncomingTypedLinks</a> for details.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentityAttributeOrder() const{ return m_identityAttributeOrder; }

    /**
     * <p>The set of attributes that distinguish links made from this facet from each
     * other, in the order of significance. Listing typed links can filter on the
     * values of these attributes. See <a>ListOutgoingTypedLinks</a> and
     * <a>ListIncomingTypedLinks</a> for details.</p>
     */
    inline bool IdentityAttributeOrderHasBeenSet() const { return m_identityAttributeOrderHasBeenSet; }

    /**
     * <p>The set of attributes that distinguish links made from this facet from each
     * other, in the order of significance. Listing typed links can filter on the
     * values of these attributes. See <a>ListOutgoingTypedLinks</a> and
     * <a>ListIncomingTypedLinks</a> for details.</p>
     */
    inline void SetIdentityAttributeOrder(const Aws::Vector<Aws::String>& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder = value; }

    /**
     * <p>The set of attributes that distinguish links made from this facet from each
     * other, in the order of significance. Listing typed links can filter on the
     * values of these attributes. See <a>ListOutgoingTypedLinks</a> and
     * <a>ListIncomingTypedLinks</a> for details.</p>
     */
    inline void SetIdentityAttributeOrder(Aws::Vector<Aws::String>&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder = std::move(value); }

    /**
     * <p>The set of attributes that distinguish links made from this facet from each
     * other, in the order of significance. Listing typed links can filter on the
     * values of these attributes. See <a>ListOutgoingTypedLinks</a> and
     * <a>ListIncomingTypedLinks</a> for details.</p>
     */
    inline TypedLinkFacet& WithIdentityAttributeOrder(const Aws::Vector<Aws::String>& value) { SetIdentityAttributeOrder(value); return *this;}

    /**
     * <p>The set of attributes that distinguish links made from this facet from each
     * other, in the order of significance. Listing typed links can filter on the
     * values of these attributes. See <a>ListOutgoingTypedLinks</a> and
     * <a>ListIncomingTypedLinks</a> for details.</p>
     */
    inline TypedLinkFacet& WithIdentityAttributeOrder(Aws::Vector<Aws::String>&& value) { SetIdentityAttributeOrder(std::move(value)); return *this;}

    /**
     * <p>The set of attributes that distinguish links made from this facet from each
     * other, in the order of significance. Listing typed links can filter on the
     * values of these attributes. See <a>ListOutgoingTypedLinks</a> and
     * <a>ListIncomingTypedLinks</a> for details.</p>
     */
    inline TypedLinkFacet& AddIdentityAttributeOrder(const Aws::String& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.push_back(value); return *this; }

    /**
     * <p>The set of attributes that distinguish links made from this facet from each
     * other, in the order of significance. Listing typed links can filter on the
     * values of these attributes. See <a>ListOutgoingTypedLinks</a> and
     * <a>ListIncomingTypedLinks</a> for details.</p>
     */
    inline TypedLinkFacet& AddIdentityAttributeOrder(Aws::String&& value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.push_back(std::move(value)); return *this; }

    /**
     * <p>The set of attributes that distinguish links made from this facet from each
     * other, in the order of significance. Listing typed links can filter on the
     * values of these attributes. See <a>ListOutgoingTypedLinks</a> and
     * <a>ListIncomingTypedLinks</a> for details.</p>
     */
    inline TypedLinkFacet& AddIdentityAttributeOrder(const char* value) { m_identityAttributeOrderHasBeenSet = true; m_identityAttributeOrder.push_back(value); return *this; }

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
