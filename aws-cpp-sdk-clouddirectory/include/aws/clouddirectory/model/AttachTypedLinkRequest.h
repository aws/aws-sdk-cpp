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
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/TypedLinkSchemaAndFacetName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/AttributeNameAndValue.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API AttachTypedLinkRequest : public CloudDirectoryRequest
  {
  public:
    AttachTypedLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachTypedLink"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to attach the
     * typed link.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to attach the
     * typed link.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to attach the
     * typed link.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to attach the
     * typed link.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to attach the
     * typed link.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to attach the
     * typed link.</p>
     */
    inline AttachTypedLinkRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to attach the
     * typed link.</p>
     */
    inline AttachTypedLinkRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to attach the
     * typed link.</p>
     */
    inline AttachTypedLinkRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


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
    inline AttachTypedLinkRequest& WithSourceObjectReference(const ObjectReference& value) { SetSourceObjectReference(value); return *this;}

    /**
     * <p>Identifies the source object that the typed link will attach to.</p>
     */
    inline AttachTypedLinkRequest& WithSourceObjectReference(ObjectReference&& value) { SetSourceObjectReference(std::move(value)); return *this;}


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
    inline AttachTypedLinkRequest& WithTargetObjectReference(const ObjectReference& value) { SetTargetObjectReference(value); return *this;}

    /**
     * <p>Identifies the target object that the typed link will attach to.</p>
     */
    inline AttachTypedLinkRequest& WithTargetObjectReference(ObjectReference&& value) { SetTargetObjectReference(std::move(value)); return *this;}


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
    inline AttachTypedLinkRequest& WithTypedLinkFacet(const TypedLinkSchemaAndFacetName& value) { SetTypedLinkFacet(value); return *this;}

    /**
     * <p>Identifies the typed link facet that is associated with the typed link.</p>
     */
    inline AttachTypedLinkRequest& WithTypedLinkFacet(TypedLinkSchemaAndFacetName&& value) { SetTypedLinkFacet(std::move(value)); return *this;}


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
    inline AttachTypedLinkRequest& WithAttributes(const Aws::Vector<AttributeNameAndValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline AttachTypedLinkRequest& WithAttributes(Aws::Vector<AttributeNameAndValue>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline AttachTypedLinkRequest& AddAttributes(const AttributeNameAndValue& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline AttachTypedLinkRequest& AddAttributes(AttributeNameAndValue&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;

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
