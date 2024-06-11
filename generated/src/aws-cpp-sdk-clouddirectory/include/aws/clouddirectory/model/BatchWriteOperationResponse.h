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
    AWS_CLOUDDIRECTORY_API BatchWriteOperationResponse();
    AWS_CLOUDDIRECTORY_API BatchWriteOperationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchWriteOperationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline const BatchCreateObjectResponse& GetCreateObject() const{ return m_createObject; }
    inline bool CreateObjectHasBeenSet() const { return m_createObjectHasBeenSet; }
    inline void SetCreateObject(const BatchCreateObjectResponse& value) { m_createObjectHasBeenSet = true; m_createObject = value; }
    inline void SetCreateObject(BatchCreateObjectResponse&& value) { m_createObjectHasBeenSet = true; m_createObject = std::move(value); }
    inline BatchWriteOperationResponse& WithCreateObject(const BatchCreateObjectResponse& value) { SetCreateObject(value); return *this;}
    inline BatchWriteOperationResponse& WithCreateObject(BatchCreateObjectResponse&& value) { SetCreateObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline const BatchAttachObjectResponse& GetAttachObject() const{ return m_attachObject; }
    inline bool AttachObjectHasBeenSet() const { return m_attachObjectHasBeenSet; }
    inline void SetAttachObject(const BatchAttachObjectResponse& value) { m_attachObjectHasBeenSet = true; m_attachObject = value; }
    inline void SetAttachObject(BatchAttachObjectResponse&& value) { m_attachObjectHasBeenSet = true; m_attachObject = std::move(value); }
    inline BatchWriteOperationResponse& WithAttachObject(const BatchAttachObjectResponse& value) { SetAttachObject(value); return *this;}
    inline BatchWriteOperationResponse& WithAttachObject(BatchAttachObjectResponse&& value) { SetAttachObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline const BatchDetachObjectResponse& GetDetachObject() const{ return m_detachObject; }
    inline bool DetachObjectHasBeenSet() const { return m_detachObjectHasBeenSet; }
    inline void SetDetachObject(const BatchDetachObjectResponse& value) { m_detachObjectHasBeenSet = true; m_detachObject = value; }
    inline void SetDetachObject(BatchDetachObjectResponse&& value) { m_detachObjectHasBeenSet = true; m_detachObject = std::move(value); }
    inline BatchWriteOperationResponse& WithDetachObject(const BatchDetachObjectResponse& value) { SetDetachObject(value); return *this;}
    inline BatchWriteOperationResponse& WithDetachObject(BatchDetachObjectResponse&& value) { SetDetachObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline const BatchUpdateObjectAttributesResponse& GetUpdateObjectAttributes() const{ return m_updateObjectAttributes; }
    inline bool UpdateObjectAttributesHasBeenSet() const { return m_updateObjectAttributesHasBeenSet; }
    inline void SetUpdateObjectAttributes(const BatchUpdateObjectAttributesResponse& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = value; }
    inline void SetUpdateObjectAttributes(BatchUpdateObjectAttributesResponse&& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = std::move(value); }
    inline BatchWriteOperationResponse& WithUpdateObjectAttributes(const BatchUpdateObjectAttributesResponse& value) { SetUpdateObjectAttributes(value); return *this;}
    inline BatchWriteOperationResponse& WithUpdateObjectAttributes(BatchUpdateObjectAttributesResponse&& value) { SetUpdateObjectAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline const BatchDeleteObjectResponse& GetDeleteObject() const{ return m_deleteObject; }
    inline bool DeleteObjectHasBeenSet() const { return m_deleteObjectHasBeenSet; }
    inline void SetDeleteObject(const BatchDeleteObjectResponse& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = value; }
    inline void SetDeleteObject(BatchDeleteObjectResponse&& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = std::move(value); }
    inline BatchWriteOperationResponse& WithDeleteObject(const BatchDeleteObjectResponse& value) { SetDeleteObject(value); return *this;}
    inline BatchWriteOperationResponse& WithDeleteObject(BatchDeleteObjectResponse&& value) { SetDeleteObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of an add facet to object batch operation.</p>
     */
    inline const BatchAddFacetToObjectResponse& GetAddFacetToObject() const{ return m_addFacetToObject; }
    inline bool AddFacetToObjectHasBeenSet() const { return m_addFacetToObjectHasBeenSet; }
    inline void SetAddFacetToObject(const BatchAddFacetToObjectResponse& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = value; }
    inline void SetAddFacetToObject(BatchAddFacetToObjectResponse&& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = std::move(value); }
    inline BatchWriteOperationResponse& WithAddFacetToObject(const BatchAddFacetToObjectResponse& value) { SetAddFacetToObject(value); return *this;}
    inline BatchWriteOperationResponse& WithAddFacetToObject(BatchAddFacetToObjectResponse&& value) { SetAddFacetToObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of a batch remove facet from object operation.</p>
     */
    inline const BatchRemoveFacetFromObjectResponse& GetRemoveFacetFromObject() const{ return m_removeFacetFromObject; }
    inline bool RemoveFacetFromObjectHasBeenSet() const { return m_removeFacetFromObjectHasBeenSet; }
    inline void SetRemoveFacetFromObject(const BatchRemoveFacetFromObjectResponse& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = value; }
    inline void SetRemoveFacetFromObject(BatchRemoveFacetFromObjectResponse&& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = std::move(value); }
    inline BatchWriteOperationResponse& WithRemoveFacetFromObject(const BatchRemoveFacetFromObjectResponse& value) { SetRemoveFacetFromObject(value); return *this;}
    inline BatchWriteOperationResponse& WithRemoveFacetFromObject(BatchRemoveFacetFromObjectResponse&& value) { SetRemoveFacetFromObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline const BatchAttachPolicyResponse& GetAttachPolicy() const{ return m_attachPolicy; }
    inline bool AttachPolicyHasBeenSet() const { return m_attachPolicyHasBeenSet; }
    inline void SetAttachPolicy(const BatchAttachPolicyResponse& value) { m_attachPolicyHasBeenSet = true; m_attachPolicy = value; }
    inline void SetAttachPolicy(BatchAttachPolicyResponse&& value) { m_attachPolicyHasBeenSet = true; m_attachPolicy = std::move(value); }
    inline BatchWriteOperationResponse& WithAttachPolicy(const BatchAttachPolicyResponse& value) { SetAttachPolicy(value); return *this;}
    inline BatchWriteOperationResponse& WithAttachPolicy(BatchAttachPolicyResponse&& value) { SetAttachPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline const BatchDetachPolicyResponse& GetDetachPolicy() const{ return m_detachPolicy; }
    inline bool DetachPolicyHasBeenSet() const { return m_detachPolicyHasBeenSet; }
    inline void SetDetachPolicy(const BatchDetachPolicyResponse& value) { m_detachPolicyHasBeenSet = true; m_detachPolicy = value; }
    inline void SetDetachPolicy(BatchDetachPolicyResponse&& value) { m_detachPolicyHasBeenSet = true; m_detachPolicy = std::move(value); }
    inline BatchWriteOperationResponse& WithDetachPolicy(const BatchDetachPolicyResponse& value) { SetDetachPolicy(value); return *this;}
    inline BatchWriteOperationResponse& WithDetachPolicy(BatchDetachPolicyResponse&& value) { SetDetachPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline const BatchCreateIndexResponse& GetCreateIndex() const{ return m_createIndex; }
    inline bool CreateIndexHasBeenSet() const { return m_createIndexHasBeenSet; }
    inline void SetCreateIndex(const BatchCreateIndexResponse& value) { m_createIndexHasBeenSet = true; m_createIndex = value; }
    inline void SetCreateIndex(BatchCreateIndexResponse&& value) { m_createIndexHasBeenSet = true; m_createIndex = std::move(value); }
    inline BatchWriteOperationResponse& WithCreateIndex(const BatchCreateIndexResponse& value) { SetCreateIndex(value); return *this;}
    inline BatchWriteOperationResponse& WithCreateIndex(BatchCreateIndexResponse&& value) { SetCreateIndex(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline const BatchAttachToIndexResponse& GetAttachToIndex() const{ return m_attachToIndex; }
    inline bool AttachToIndexHasBeenSet() const { return m_attachToIndexHasBeenSet; }
    inline void SetAttachToIndex(const BatchAttachToIndexResponse& value) { m_attachToIndexHasBeenSet = true; m_attachToIndex = value; }
    inline void SetAttachToIndex(BatchAttachToIndexResponse&& value) { m_attachToIndexHasBeenSet = true; m_attachToIndex = std::move(value); }
    inline BatchWriteOperationResponse& WithAttachToIndex(const BatchAttachToIndexResponse& value) { SetAttachToIndex(value); return *this;}
    inline BatchWriteOperationResponse& WithAttachToIndex(BatchAttachToIndexResponse&& value) { SetAttachToIndex(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline const BatchDetachFromIndexResponse& GetDetachFromIndex() const{ return m_detachFromIndex; }
    inline bool DetachFromIndexHasBeenSet() const { return m_detachFromIndexHasBeenSet; }
    inline void SetDetachFromIndex(const BatchDetachFromIndexResponse& value) { m_detachFromIndexHasBeenSet = true; m_detachFromIndex = value; }
    inline void SetDetachFromIndex(BatchDetachFromIndexResponse&& value) { m_detachFromIndexHasBeenSet = true; m_detachFromIndex = std::move(value); }
    inline BatchWriteOperationResponse& WithDetachFromIndex(const BatchDetachFromIndexResponse& value) { SetDetachFromIndex(value); return *this;}
    inline BatchWriteOperationResponse& WithDetachFromIndex(BatchDetachFromIndexResponse&& value) { SetDetachFromIndex(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchAttachTypedLinkResponse& GetAttachTypedLink() const{ return m_attachTypedLink; }
    inline bool AttachTypedLinkHasBeenSet() const { return m_attachTypedLinkHasBeenSet; }
    inline void SetAttachTypedLink(const BatchAttachTypedLinkResponse& value) { m_attachTypedLinkHasBeenSet = true; m_attachTypedLink = value; }
    inline void SetAttachTypedLink(BatchAttachTypedLinkResponse&& value) { m_attachTypedLinkHasBeenSet = true; m_attachTypedLink = std::move(value); }
    inline BatchWriteOperationResponse& WithAttachTypedLink(const BatchAttachTypedLinkResponse& value) { SetAttachTypedLink(value); return *this;}
    inline BatchWriteOperationResponse& WithAttachTypedLink(BatchAttachTypedLinkResponse&& value) { SetAttachTypedLink(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchDetachTypedLinkResponse& GetDetachTypedLink() const{ return m_detachTypedLink; }
    inline bool DetachTypedLinkHasBeenSet() const { return m_detachTypedLinkHasBeenSet; }
    inline void SetDetachTypedLink(const BatchDetachTypedLinkResponse& value) { m_detachTypedLinkHasBeenSet = true; m_detachTypedLink = value; }
    inline void SetDetachTypedLink(BatchDetachTypedLinkResponse&& value) { m_detachTypedLinkHasBeenSet = true; m_detachTypedLink = std::move(value); }
    inline BatchWriteOperationResponse& WithDetachTypedLink(const BatchDetachTypedLinkResponse& value) { SetDetachTypedLink(value); return *this;}
    inline BatchWriteOperationResponse& WithDetachTypedLink(BatchDetachTypedLinkResponse&& value) { SetDetachTypedLink(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the output of a <code>BatchWrite</code> response operation.</p>
     */
    inline const BatchUpdateLinkAttributesResponse& GetUpdateLinkAttributes() const{ return m_updateLinkAttributes; }
    inline bool UpdateLinkAttributesHasBeenSet() const { return m_updateLinkAttributesHasBeenSet; }
    inline void SetUpdateLinkAttributes(const BatchUpdateLinkAttributesResponse& value) { m_updateLinkAttributesHasBeenSet = true; m_updateLinkAttributes = value; }
    inline void SetUpdateLinkAttributes(BatchUpdateLinkAttributesResponse&& value) { m_updateLinkAttributesHasBeenSet = true; m_updateLinkAttributes = std::move(value); }
    inline BatchWriteOperationResponse& WithUpdateLinkAttributes(const BatchUpdateLinkAttributesResponse& value) { SetUpdateLinkAttributes(value); return *this;}
    inline BatchWriteOperationResponse& WithUpdateLinkAttributes(BatchUpdateLinkAttributesResponse&& value) { SetUpdateLinkAttributes(std::move(value)); return *this;}
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
