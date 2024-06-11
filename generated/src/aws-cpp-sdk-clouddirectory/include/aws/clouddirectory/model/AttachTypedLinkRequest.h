﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AttachTypedLinkRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API AttachTypedLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachTypedLink"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to attach the
     * typed link.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }
    inline AttachTypedLinkRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline AttachTypedLinkRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline AttachTypedLinkRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the source object that the typed link will attach to.</p>
     */
    inline const ObjectReference& GetSourceObjectReference() const{ return m_sourceObjectReference; }
    inline bool SourceObjectReferenceHasBeenSet() const { return m_sourceObjectReferenceHasBeenSet; }
    inline void SetSourceObjectReference(const ObjectReference& value) { m_sourceObjectReferenceHasBeenSet = true; m_sourceObjectReference = value; }
    inline void SetSourceObjectReference(ObjectReference&& value) { m_sourceObjectReferenceHasBeenSet = true; m_sourceObjectReference = std::move(value); }
    inline AttachTypedLinkRequest& WithSourceObjectReference(const ObjectReference& value) { SetSourceObjectReference(value); return *this;}
    inline AttachTypedLinkRequest& WithSourceObjectReference(ObjectReference&& value) { SetSourceObjectReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the target object that the typed link will attach to.</p>
     */
    inline const ObjectReference& GetTargetObjectReference() const{ return m_targetObjectReference; }
    inline bool TargetObjectReferenceHasBeenSet() const { return m_targetObjectReferenceHasBeenSet; }
    inline void SetTargetObjectReference(const ObjectReference& value) { m_targetObjectReferenceHasBeenSet = true; m_targetObjectReference = value; }
    inline void SetTargetObjectReference(ObjectReference&& value) { m_targetObjectReferenceHasBeenSet = true; m_targetObjectReference = std::move(value); }
    inline AttachTypedLinkRequest& WithTargetObjectReference(const ObjectReference& value) { SetTargetObjectReference(value); return *this;}
    inline AttachTypedLinkRequest& WithTargetObjectReference(ObjectReference&& value) { SetTargetObjectReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the typed link facet that is associated with the typed link.</p>
     */
    inline const TypedLinkSchemaAndFacetName& GetTypedLinkFacet() const{ return m_typedLinkFacet; }
    inline bool TypedLinkFacetHasBeenSet() const { return m_typedLinkFacetHasBeenSet; }
    inline void SetTypedLinkFacet(const TypedLinkSchemaAndFacetName& value) { m_typedLinkFacetHasBeenSet = true; m_typedLinkFacet = value; }
    inline void SetTypedLinkFacet(TypedLinkSchemaAndFacetName&& value) { m_typedLinkFacetHasBeenSet = true; m_typedLinkFacet = std::move(value); }
    inline AttachTypedLinkRequest& WithTypedLinkFacet(const TypedLinkSchemaAndFacetName& value) { SetTypedLinkFacet(value); return *this;}
    inline AttachTypedLinkRequest& WithTypedLinkFacet(TypedLinkSchemaAndFacetName&& value) { SetTypedLinkFacet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of attributes that are associated with the typed link.</p>
     */
    inline const Aws::Vector<AttributeNameAndValue>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<AttributeNameAndValue>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<AttributeNameAndValue>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline AttachTypedLinkRequest& WithAttributes(const Aws::Vector<AttributeNameAndValue>& value) { SetAttributes(value); return *this;}
    inline AttachTypedLinkRequest& WithAttributes(Aws::Vector<AttributeNameAndValue>&& value) { SetAttributes(std::move(value)); return *this;}
    inline AttachTypedLinkRequest& AddAttributes(const AttributeNameAndValue& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline AttachTypedLinkRequest& AddAttributes(AttributeNameAndValue&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

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
