/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/TypedLinkSchemaAndFacetName.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/AttributeNameAndValue.h>
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
   * <p>Contains all the information that is used to uniquely identify a typed link.
   * The parameters discussed in this topic are used to uniquely specify the typed
   * link being operated on. The <a>AttachTypedLink</a> API returns a typed link
   * specifier while the <a>DetachTypedLink</a> API accepts one as input. Similarly,
   * the <a>ListIncomingTypedLinks</a> and <a>ListOutgoingTypedLinks</a> API
   * operations provide typed link specifiers as output. You can also construct a
   * typed link specifier from scratch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TypedLinkSpecifier">AWS
   * API Reference</a></p>
   */
  class TypedLinkSpecifier
  {
  public:
    AWS_CLOUDDIRECTORY_API TypedLinkSpecifier() = default;
    AWS_CLOUDDIRECTORY_API TypedLinkSpecifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedLinkSpecifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the typed link facet that is associated with the typed link.</p>
     */
    inline const TypedLinkSchemaAndFacetName& GetTypedLinkFacet() const { return m_typedLinkFacet; }
    inline bool TypedLinkFacetHasBeenSet() const { return m_typedLinkFacetHasBeenSet; }
    template<typename TypedLinkFacetT = TypedLinkSchemaAndFacetName>
    void SetTypedLinkFacet(TypedLinkFacetT&& value) { m_typedLinkFacetHasBeenSet = true; m_typedLinkFacet = std::forward<TypedLinkFacetT>(value); }
    template<typename TypedLinkFacetT = TypedLinkSchemaAndFacetName>
    TypedLinkSpecifier& WithTypedLinkFacet(TypedLinkFacetT&& value) { SetTypedLinkFacet(std::forward<TypedLinkFacetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the source object that the typed link will attach to.</p>
     */
    inline const ObjectReference& GetSourceObjectReference() const { return m_sourceObjectReference; }
    inline bool SourceObjectReferenceHasBeenSet() const { return m_sourceObjectReferenceHasBeenSet; }
    template<typename SourceObjectReferenceT = ObjectReference>
    void SetSourceObjectReference(SourceObjectReferenceT&& value) { m_sourceObjectReferenceHasBeenSet = true; m_sourceObjectReference = std::forward<SourceObjectReferenceT>(value); }
    template<typename SourceObjectReferenceT = ObjectReference>
    TypedLinkSpecifier& WithSourceObjectReference(SourceObjectReferenceT&& value) { SetSourceObjectReference(std::forward<SourceObjectReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the target object that the typed link will attach to.</p>
     */
    inline const ObjectReference& GetTargetObjectReference() const { return m_targetObjectReference; }
    inline bool TargetObjectReferenceHasBeenSet() const { return m_targetObjectReferenceHasBeenSet; }
    template<typename TargetObjectReferenceT = ObjectReference>
    void SetTargetObjectReference(TargetObjectReferenceT&& value) { m_targetObjectReferenceHasBeenSet = true; m_targetObjectReference = std::forward<TargetObjectReferenceT>(value); }
    template<typename TargetObjectReferenceT = ObjectReference>
    TypedLinkSpecifier& WithTargetObjectReference(TargetObjectReferenceT&& value) { SetTargetObjectReference(std::forward<TargetObjectReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the attribute value to update.</p>
     */
    inline const Aws::Vector<AttributeNameAndValue>& GetIdentityAttributeValues() const { return m_identityAttributeValues; }
    inline bool IdentityAttributeValuesHasBeenSet() const { return m_identityAttributeValuesHasBeenSet; }
    template<typename IdentityAttributeValuesT = Aws::Vector<AttributeNameAndValue>>
    void SetIdentityAttributeValues(IdentityAttributeValuesT&& value) { m_identityAttributeValuesHasBeenSet = true; m_identityAttributeValues = std::forward<IdentityAttributeValuesT>(value); }
    template<typename IdentityAttributeValuesT = Aws::Vector<AttributeNameAndValue>>
    TypedLinkSpecifier& WithIdentityAttributeValues(IdentityAttributeValuesT&& value) { SetIdentityAttributeValues(std::forward<IdentityAttributeValuesT>(value)); return *this;}
    template<typename IdentityAttributeValuesT = AttributeNameAndValue>
    TypedLinkSpecifier& AddIdentityAttributeValues(IdentityAttributeValuesT&& value) { m_identityAttributeValuesHasBeenSet = true; m_identityAttributeValues.emplace_back(std::forward<IdentityAttributeValuesT>(value)); return *this; }
    ///@}
  private:

    TypedLinkSchemaAndFacetName m_typedLinkFacet;
    bool m_typedLinkFacetHasBeenSet = false;

    ObjectReference m_sourceObjectReference;
    bool m_sourceObjectReferenceHasBeenSet = false;

    ObjectReference m_targetObjectReference;
    bool m_targetObjectReferenceHasBeenSet = false;

    Aws::Vector<AttributeNameAndValue> m_identityAttributeValues;
    bool m_identityAttributeValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
