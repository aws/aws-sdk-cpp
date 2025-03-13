/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/TypedLinkSchemaAndFacetName.h>
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
   * <p>Attaches a typed link to a specified source and target object inside a
   * <a>BatchRead</a> operation. For more information, see <a>AttachTypedLink</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchAttachTypedLink">AWS
   * API Reference</a></p>
   */
  class BatchAttachTypedLink
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchAttachTypedLink() = default;
    AWS_CLOUDDIRECTORY_API BatchAttachTypedLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchAttachTypedLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the source object that the typed link will attach to.</p>
     */
    inline const ObjectReference& GetSourceObjectReference() const { return m_sourceObjectReference; }
    inline bool SourceObjectReferenceHasBeenSet() const { return m_sourceObjectReferenceHasBeenSet; }
    template<typename SourceObjectReferenceT = ObjectReference>
    void SetSourceObjectReference(SourceObjectReferenceT&& value) { m_sourceObjectReferenceHasBeenSet = true; m_sourceObjectReference = std::forward<SourceObjectReferenceT>(value); }
    template<typename SourceObjectReferenceT = ObjectReference>
    BatchAttachTypedLink& WithSourceObjectReference(SourceObjectReferenceT&& value) { SetSourceObjectReference(std::forward<SourceObjectReferenceT>(value)); return *this;}
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
    BatchAttachTypedLink& WithTargetObjectReference(TargetObjectReferenceT&& value) { SetTargetObjectReference(std::forward<TargetObjectReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the typed link facet that is associated with the typed link.</p>
     */
    inline const TypedLinkSchemaAndFacetName& GetTypedLinkFacet() const { return m_typedLinkFacet; }
    inline bool TypedLinkFacetHasBeenSet() const { return m_typedLinkFacetHasBeenSet; }
    template<typename TypedLinkFacetT = TypedLinkSchemaAndFacetName>
    void SetTypedLinkFacet(TypedLinkFacetT&& value) { m_typedLinkFacetHasBeenSet = true; m_typedLinkFacet = std::forward<TypedLinkFacetT>(value); }
    template<typename TypedLinkFacetT = TypedLinkSchemaAndFacetName>
    BatchAttachTypedLink& WithTypedLinkFacet(TypedLinkFacetT&& value) { SetTypedLinkFacet(std::forward<TypedLinkFacetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline const Aws::Vector<AttributeNameAndValue>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<AttributeNameAndValue>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<AttributeNameAndValue>>
    BatchAttachTypedLink& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = AttributeNameAndValue>
    BatchAttachTypedLink& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}
  private:

    ObjectReference m_sourceObjectReference;
    bool m_sourceObjectReferenceHasBeenSet = false;

    ObjectReference m_targetObjectReference;
    bool m_targetObjectReferenceHasBeenSet = false;

    TypedLinkSchemaAndFacetName m_typedLinkFacet;
    bool m_typedLinkFacetHasBeenSet = false;

    Aws::Vector<AttributeNameAndValue> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
