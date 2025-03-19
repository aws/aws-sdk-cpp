/**
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
    AWS_CLOUDDIRECTORY_API AttachTypedLinkRequest() = default;

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
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    AttachTypedLinkRequest& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
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
    AttachTypedLinkRequest& WithSourceObjectReference(SourceObjectReferenceT&& value) { SetSourceObjectReference(std::forward<SourceObjectReferenceT>(value)); return *this;}
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
    AttachTypedLinkRequest& WithTargetObjectReference(TargetObjectReferenceT&& value) { SetTargetObjectReference(std::forward<TargetObjectReferenceT>(value)); return *this;}
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
    AttachTypedLinkRequest& WithTypedLinkFacet(TypedLinkFacetT&& value) { SetTypedLinkFacet(std::forward<TypedLinkFacetT>(value)); return *this;}
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
    AttachTypedLinkRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = AttributeNameAndValue>
    AttachTypedLinkRequest& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
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
