/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDDIRECTORY_API BatchAttachTypedLink
  {
  public:
    BatchAttachTypedLink();
    BatchAttachTypedLink(Aws::Utils::Json::JsonView jsonValue);
    BatchAttachTypedLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the source object that the typed link will attach to.</p>
     */
    inline const ObjectReference& GetSourceObjectReference() const{ return m_sourceObjectReference; }

    /**
     * <p>Identifies the source object that the typed link will attach to.</p>
     */
    inline bool SourceObjectReferenceHasBeenSet() const { return m_sourceObjectReferenceHasBeenSet; }

    /**
     * <p>Identifies the source object that the typed link will attach to.</p>
     */
    inline void SetSourceObjectReference(const ObjectReference& value) { m_sourceObjectReferenceHasBeenSet = true; m_sourceObjectReference = value; }

    /**
     * <p>Identifies the source object that the typed link will attach to.</p>
     */
    inline void SetSourceObjectReference(ObjectReference&& value) { m_sourceObjectReferenceHasBeenSet = true; m_sourceObjectReference = std::move(value); }

    /**
     * <p>Identifies the source object that the typed link will attach to.</p>
     */
    inline BatchAttachTypedLink& WithSourceObjectReference(const ObjectReference& value) { SetSourceObjectReference(value); return *this;}

    /**
     * <p>Identifies the source object that the typed link will attach to.</p>
     */
    inline BatchAttachTypedLink& WithSourceObjectReference(ObjectReference&& value) { SetSourceObjectReference(std::move(value)); return *this;}


    /**
     * <p>Identifies the target object that the typed link will attach to.</p>
     */
    inline const ObjectReference& GetTargetObjectReference() const{ return m_targetObjectReference; }

    /**
     * <p>Identifies the target object that the typed link will attach to.</p>
     */
    inline bool TargetObjectReferenceHasBeenSet() const { return m_targetObjectReferenceHasBeenSet; }

    /**
     * <p>Identifies the target object that the typed link will attach to.</p>
     */
    inline void SetTargetObjectReference(const ObjectReference& value) { m_targetObjectReferenceHasBeenSet = true; m_targetObjectReference = value; }

    /**
     * <p>Identifies the target object that the typed link will attach to.</p>
     */
    inline void SetTargetObjectReference(ObjectReference&& value) { m_targetObjectReferenceHasBeenSet = true; m_targetObjectReference = std::move(value); }

    /**
     * <p>Identifies the target object that the typed link will attach to.</p>
     */
    inline BatchAttachTypedLink& WithTargetObjectReference(const ObjectReference& value) { SetTargetObjectReference(value); return *this;}

    /**
     * <p>Identifies the target object that the typed link will attach to.</p>
     */
    inline BatchAttachTypedLink& WithTargetObjectReference(ObjectReference&& value) { SetTargetObjectReference(std::move(value)); return *this;}


    /**
     * <p>Identifies the typed link facet that is associated with the typed link.</p>
     */
    inline const TypedLinkSchemaAndFacetName& GetTypedLinkFacet() const{ return m_typedLinkFacet; }

    /**
     * <p>Identifies the typed link facet that is associated with the typed link.</p>
     */
    inline bool TypedLinkFacetHasBeenSet() const { return m_typedLinkFacetHasBeenSet; }

    /**
     * <p>Identifies the typed link facet that is associated with the typed link.</p>
     */
    inline void SetTypedLinkFacet(const TypedLinkSchemaAndFacetName& value) { m_typedLinkFacetHasBeenSet = true; m_typedLinkFacet = value; }

    /**
     * <p>Identifies the typed link facet that is associated with the typed link.</p>
     */
    inline void SetTypedLinkFacet(TypedLinkSchemaAndFacetName&& value) { m_typedLinkFacetHasBeenSet = true; m_typedLinkFacet = std::move(value); }

    /**
     * <p>Identifies the typed link facet that is associated with the typed link.</p>
     */
    inline BatchAttachTypedLink& WithTypedLinkFacet(const TypedLinkSchemaAndFacetName& value) { SetTypedLinkFacet(value); return *this;}

    /**
     * <p>Identifies the typed link facet that is associated with the typed link.</p>
     */
    inline BatchAttachTypedLink& WithTypedLinkFacet(TypedLinkSchemaAndFacetName&& value) { SetTypedLinkFacet(std::move(value)); return *this;}


    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline const Aws::Vector<AttributeNameAndValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline void SetAttributes(const Aws::Vector<AttributeNameAndValue>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline void SetAttributes(Aws::Vector<AttributeNameAndValue>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline BatchAttachTypedLink& WithAttributes(const Aws::Vector<AttributeNameAndValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline BatchAttachTypedLink& WithAttributes(Aws::Vector<AttributeNameAndValue>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline BatchAttachTypedLink& AddAttributes(const AttributeNameAndValue& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline BatchAttachTypedLink& AddAttributes(AttributeNameAndValue&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    ObjectReference m_sourceObjectReference;
    bool m_sourceObjectReferenceHasBeenSet;

    ObjectReference m_targetObjectReference;
    bool m_targetObjectReferenceHasBeenSet;

    TypedLinkSchemaAndFacetName m_typedLinkFacet;
    bool m_typedLinkFacetHasBeenSet;

    Aws::Vector<AttributeNameAndValue> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
