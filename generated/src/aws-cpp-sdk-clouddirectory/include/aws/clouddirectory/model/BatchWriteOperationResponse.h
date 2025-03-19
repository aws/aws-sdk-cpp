/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/BatchCreateObjectResponse.h>
#include <aws/clouddirectory/model/BatchAttachObjectResponse.h>
#include <aws/clouddirectory/model/BatchDetachObjectResponse.h>
#include <aws/clouddirectory/model/BatchUpdateObjectAttributesResponse.h>
#include <aws/clouddirectory/model/BatchDeleteObjectResponse.h>
#include <aws/clouddirectory/model/BatchAddFacetToObjectResponse.h>
#include <aws/clouddirectory/model/BatchRemoveFacetFromObjectResponse.h>
#include <aws/clouddirectory/model/BatchAttachPolicyResponse.h>
#include <aws/clouddirectory/model/BatchDetachPolicyResponse.h>
#include <aws/clouddirectory/model/BatchCreateIndexResponse.h>
#include <aws/clouddirectory/model/BatchAttachToIndexResponse.h>
#include <aws/clouddirectory/model/BatchDetachFromIndexResponse.h>
#include <aws/clouddirectory/model/BatchAttachTypedLinkResponse.h>
#include <aws/clouddirectory/model/BatchDetachTypedLinkResponse.h>
#include <aws/clouddirectory/model/BatchUpdateLinkAttributesResponse.h>
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
   * <p>Represents the output of a <code>BatchWrite</code> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchWriteOperationResponse">AWS
   * API Reference</a></p>
   */
  class BatchWriteOperationResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchWriteOperationResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchWriteOperationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchWriteOperationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline const BatchCreateObjectResponse& GetCreateObject() const { return m_createObject; }
    inline bool CreateObjectHasBeenSet() const { return m_createObjectHasBeenSet; }
    template<typename CreateObjectT = BatchCreateObjectResponse>
    void SetCreateObject(CreateObjectT&& value) { m_createObjectHasBeenSet = true; m_createObject = std::forward<CreateObjectT>(value); }
    template<typename CreateObjectT = BatchCreateObjectResponse>
    BatchWriteOperationResponse& WithCreateObject(CreateObjectT&& value) { SetCreateObject(std::forward<CreateObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline const BatchAttachObjectResponse& GetAttachObject() const { return m_attachObject; }
    inline bool AttachObjectHasBeenSet() const { return m_attachObjectHasBeenSet; }
    template<typename AttachObjectT = BatchAttachObjectResponse>
    void SetAttachObject(AttachObjectT&& value) { m_attachObjectHasBeenSet = true; m_attachObject = std::forward<AttachObjectT>(value); }
    template<typename AttachObjectT = BatchAttachObjectResponse>
    BatchWriteOperationResponse& WithAttachObject(AttachObjectT&& value) { SetAttachObject(std::forward<AttachObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline const BatchDetachObjectResponse& GetDetachObject() const { return m_detachObject; }
    inline bool DetachObjectHasBeenSet() const { return m_detachObjectHasBeenSet; }
    template<typename DetachObjectT = BatchDetachObjectResponse>
    void SetDetachObject(DetachObjectT&& value) { m_detachObjectHasBeenSet = true; m_detachObject = std::forward<DetachObjectT>(value); }
    template<typename DetachObjectT = BatchDetachObjectResponse>
    BatchWriteOperationResponse& WithDetachObject(DetachObjectT&& value) { SetDetachObject(std::forward<DetachObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline const BatchUpdateObjectAttributesResponse& GetUpdateObjectAttributes() const { return m_updateObjectAttributes; }
    inline bool UpdateObjectAttributesHasBeenSet() const { return m_updateObjectAttributesHasBeenSet; }
    template<typename UpdateObjectAttributesT = BatchUpdateObjectAttributesResponse>
    void SetUpdateObjectAttributes(UpdateObjectAttributesT&& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = std::forward<UpdateObjectAttributesT>(value); }
    template<typename UpdateObjectAttributesT = BatchUpdateObjectAttributesResponse>
    BatchWriteOperationResponse& WithUpdateObjectAttributes(UpdateObjectAttributesT&& value) { SetUpdateObjectAttributes(std::forward<UpdateObjectAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline const BatchDeleteObjectResponse& GetDeleteObject() const { return m_deleteObject; }
    inline bool DeleteObjectHasBeenSet() const { return m_deleteObjectHasBeenSet; }
    template<typename DeleteObjectT = BatchDeleteObjectResponse>
    void SetDeleteObject(DeleteObjectT&& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = std::forward<DeleteObjectT>(value); }
    template<typename DeleteObjectT = BatchDeleteObjectResponse>
    BatchWriteOperationResponse& WithDeleteObject(DeleteObjectT&& value) { SetDeleteObject(std::forward<DeleteObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of an add facet to object batch operation.</p>
     */
    inline const BatchAddFacetToObjectResponse& GetAddFacetToObject() const { return m_addFacetToObject; }
    inline bool AddFacetToObjectHasBeenSet() const { return m_addFacetToObjectHasBeenSet; }
    template<typename AddFacetToObjectT = BatchAddFacetToObjectResponse>
    void SetAddFacetToObject(AddFacetToObjectT&& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = std::forward<AddFacetToObjectT>(value); }
    template<typename AddFacetToObjectT = BatchAddFacetToObjectResponse>
    BatchWriteOperationResponse& WithAddFacetToObject(AddFacetToObjectT&& value) { SetAddFacetToObject(std::forward<AddFacetToObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of a batch remove facet from object operation.</p>
     */
    inline const BatchRemoveFacetFromObjectResponse& GetRemoveFacetFromObject() const { return m_removeFacetFromObject; }
    inline bool RemoveFacetFromObjectHasBeenSet() const { return m_removeFacetFromObjectHasBeenSet; }
    template<typename RemoveFacetFromObjectT = BatchRemoveFacetFromObjectResponse>
    void SetRemoveFacetFromObject(RemoveFacetFromObjectT&& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = std::forward<RemoveFacetFromObjectT>(value); }
    template<typename RemoveFacetFromObjectT = BatchRemoveFacetFromObjectResponse>
    BatchWriteOperationResponse& WithRemoveFacetFromObject(RemoveFacetFromObjectT&& value) { SetRemoveFacetFromObject(std::forward<RemoveFacetFromObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline const BatchAttachPolicyResponse& GetAttachPolicy() const { return m_attachPolicy; }
    inline bool AttachPolicyHasBeenSet() const { return m_attachPolicyHasBeenSet; }
    template<typename AttachPolicyT = BatchAttachPolicyResponse>
    void SetAttachPolicy(AttachPolicyT&& value) { m_attachPolicyHasBeenSet = true; m_attachPolicy = std::forward<AttachPolicyT>(value); }
    template<typename AttachPolicyT = BatchAttachPolicyResponse>
    BatchWriteOperationResponse& WithAttachPolicy(AttachPolicyT&& value) { SetAttachPolicy(std::forward<AttachPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline const BatchDetachPolicyResponse& GetDetachPolicy() const { return m_detachPolicy; }
    inline bool DetachPolicyHasBeenSet() const { return m_detachPolicyHasBeenSet; }
    template<typename DetachPolicyT = BatchDetachPolicyResponse>
    void SetDetachPolicy(DetachPolicyT&& value) { m_detachPolicyHasBeenSet = true; m_detachPolicy = std::forward<DetachPolicyT>(value); }
    template<typename DetachPolicyT = BatchDetachPolicyResponse>
    BatchWriteOperationResponse& WithDetachPolicy(DetachPolicyT&& value) { SetDetachPolicy(std::forward<DetachPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline const BatchCreateIndexResponse& GetCreateIndex() const { return m_createIndex; }
    inline bool CreateIndexHasBeenSet() const { return m_createIndexHasBeenSet; }
    template<typename CreateIndexT = BatchCreateIndexResponse>
    void SetCreateIndex(CreateIndexT&& value) { m_createIndexHasBeenSet = true; m_createIndex = std::forward<CreateIndexT>(value); }
    template<typename CreateIndexT = BatchCreateIndexResponse>
    BatchWriteOperationResponse& WithCreateIndex(CreateIndexT&& value) { SetCreateIndex(std::forward<CreateIndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline const BatchAttachToIndexResponse& GetAttachToIndex() const { return m_attachToIndex; }
    inline bool AttachToIndexHasBeenSet() const { return m_attachToIndexHasBeenSet; }
    template<typename AttachToIndexT = BatchAttachToIndexResponse>
    void SetAttachToIndex(AttachToIndexT&& value) { m_attachToIndexHasBeenSet = true; m_attachToIndex = std::forward<AttachToIndexT>(value); }
    template<typename AttachToIndexT = BatchAttachToIndexResponse>
    BatchWriteOperationResponse& WithAttachToIndex(AttachToIndexT&& value) { SetAttachToIndex(std::forward<AttachToIndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline const BatchDetachFromIndexResponse& GetDetachFromIndex() const { return m_detachFromIndex; }
    inline bool DetachFromIndexHasBeenSet() const { return m_detachFromIndexHasBeenSet; }
    template<typename DetachFromIndexT = BatchDetachFromIndexResponse>
    void SetDetachFromIndex(DetachFromIndexT&& value) { m_detachFromIndexHasBeenSet = true; m_detachFromIndex = std::forward<DetachFromIndexT>(value); }
    template<typename DetachFromIndexT = BatchDetachFromIndexResponse>
    BatchWriteOperationResponse& WithDetachFromIndex(DetachFromIndexT&& value) { SetDetachFromIndex(std::forward<DetachFromIndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchAttachTypedLinkResponse& GetAttachTypedLink() const { return m_attachTypedLink; }
    inline bool AttachTypedLinkHasBeenSet() const { return m_attachTypedLinkHasBeenSet; }
    template<typename AttachTypedLinkT = BatchAttachTypedLinkResponse>
    void SetAttachTypedLink(AttachTypedLinkT&& value) { m_attachTypedLinkHasBeenSet = true; m_attachTypedLink = std::forward<AttachTypedLinkT>(value); }
    template<typename AttachTypedLinkT = BatchAttachTypedLinkResponse>
    BatchWriteOperationResponse& WithAttachTypedLink(AttachTypedLinkT&& value) { SetAttachTypedLink(std::forward<AttachTypedLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchDetachTypedLinkResponse& GetDetachTypedLink() const { return m_detachTypedLink; }
    inline bool DetachTypedLinkHasBeenSet() const { return m_detachTypedLinkHasBeenSet; }
    template<typename DetachTypedLinkT = BatchDetachTypedLinkResponse>
    void SetDetachTypedLink(DetachTypedLinkT&& value) { m_detachTypedLinkHasBeenSet = true; m_detachTypedLink = std::forward<DetachTypedLinkT>(value); }
    template<typename DetachTypedLinkT = BatchDetachTypedLinkResponse>
    BatchWriteOperationResponse& WithDetachTypedLink(DetachTypedLinkT&& value) { SetDetachTypedLink(std::forward<DetachTypedLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the output of a <code>BatchWrite</code> response operation.</p>
     */
    inline const BatchUpdateLinkAttributesResponse& GetUpdateLinkAttributes() const { return m_updateLinkAttributes; }
    inline bool UpdateLinkAttributesHasBeenSet() const { return m_updateLinkAttributesHasBeenSet; }
    template<typename UpdateLinkAttributesT = BatchUpdateLinkAttributesResponse>
    void SetUpdateLinkAttributes(UpdateLinkAttributesT&& value) { m_updateLinkAttributesHasBeenSet = true; m_updateLinkAttributes = std::forward<UpdateLinkAttributesT>(value); }
    template<typename UpdateLinkAttributesT = BatchUpdateLinkAttributesResponse>
    BatchWriteOperationResponse& WithUpdateLinkAttributes(UpdateLinkAttributesT&& value) { SetUpdateLinkAttributes(std::forward<UpdateLinkAttributesT>(value)); return *this;}
    ///@}
  private:

    BatchCreateObjectResponse m_createObject;
    bool m_createObjectHasBeenSet = false;

    BatchAttachObjectResponse m_attachObject;
    bool m_attachObjectHasBeenSet = false;

    BatchDetachObjectResponse m_detachObject;
    bool m_detachObjectHasBeenSet = false;

    BatchUpdateObjectAttributesResponse m_updateObjectAttributes;
    bool m_updateObjectAttributesHasBeenSet = false;

    BatchDeleteObjectResponse m_deleteObject;
    bool m_deleteObjectHasBeenSet = false;

    BatchAddFacetToObjectResponse m_addFacetToObject;
    bool m_addFacetToObjectHasBeenSet = false;

    BatchRemoveFacetFromObjectResponse m_removeFacetFromObject;
    bool m_removeFacetFromObjectHasBeenSet = false;

    BatchAttachPolicyResponse m_attachPolicy;
    bool m_attachPolicyHasBeenSet = false;

    BatchDetachPolicyResponse m_detachPolicy;
    bool m_detachPolicyHasBeenSet = false;

    BatchCreateIndexResponse m_createIndex;
    bool m_createIndexHasBeenSet = false;

    BatchAttachToIndexResponse m_attachToIndex;
    bool m_attachToIndexHasBeenSet = false;

    BatchDetachFromIndexResponse m_detachFromIndex;
    bool m_detachFromIndexHasBeenSet = false;

    BatchAttachTypedLinkResponse m_attachTypedLink;
    bool m_attachTypedLinkHasBeenSet = false;

    BatchDetachTypedLinkResponse m_detachTypedLink;
    bool m_detachTypedLinkHasBeenSet = false;

    BatchUpdateLinkAttributesResponse m_updateLinkAttributes;
    bool m_updateLinkAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
