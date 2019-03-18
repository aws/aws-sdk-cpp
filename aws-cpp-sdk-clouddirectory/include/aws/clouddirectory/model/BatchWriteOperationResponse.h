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
  class AWS_CLOUDDIRECTORY_API BatchWriteOperationResponse
  {
  public:
    BatchWriteOperationResponse();
    BatchWriteOperationResponse(Aws::Utils::Json::JsonView jsonValue);
    BatchWriteOperationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline const BatchCreateObjectResponse& GetCreateObject() const{ return m_createObject; }

    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline bool CreateObjectHasBeenSet() const { return m_createObjectHasBeenSet; }

    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline void SetCreateObject(const BatchCreateObjectResponse& value) { m_createObjectHasBeenSet = true; m_createObject = value; }

    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline void SetCreateObject(BatchCreateObjectResponse&& value) { m_createObjectHasBeenSet = true; m_createObject = std::move(value); }

    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithCreateObject(const BatchCreateObjectResponse& value) { SetCreateObject(value); return *this;}

    /**
     * <p>Creates an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithCreateObject(BatchCreateObjectResponse&& value) { SetCreateObject(std::move(value)); return *this;}


    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline const BatchAttachObjectResponse& GetAttachObject() const{ return m_attachObject; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline bool AttachObjectHasBeenSet() const { return m_attachObjectHasBeenSet; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline void SetAttachObject(const BatchAttachObjectResponse& value) { m_attachObjectHasBeenSet = true; m_attachObject = value; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline void SetAttachObject(BatchAttachObjectResponse&& value) { m_attachObjectHasBeenSet = true; m_attachObject = std::move(value); }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithAttachObject(const BatchAttachObjectResponse& value) { SetAttachObject(value); return *this;}

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithAttachObject(BatchAttachObjectResponse&& value) { SetAttachObject(std::move(value)); return *this;}


    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline const BatchDetachObjectResponse& GetDetachObject() const{ return m_detachObject; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline bool DetachObjectHasBeenSet() const { return m_detachObjectHasBeenSet; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline void SetDetachObject(const BatchDetachObjectResponse& value) { m_detachObjectHasBeenSet = true; m_detachObject = value; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline void SetDetachObject(BatchDetachObjectResponse&& value) { m_detachObjectHasBeenSet = true; m_detachObject = std::move(value); }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDetachObject(const BatchDetachObjectResponse& value) { SetDetachObject(value); return *this;}

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDetachObject(BatchDetachObjectResponse&& value) { SetDetachObject(std::move(value)); return *this;}


    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline const BatchUpdateObjectAttributesResponse& GetUpdateObjectAttributes() const{ return m_updateObjectAttributes; }

    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline bool UpdateObjectAttributesHasBeenSet() const { return m_updateObjectAttributesHasBeenSet; }

    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline void SetUpdateObjectAttributes(const BatchUpdateObjectAttributesResponse& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = value; }

    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline void SetUpdateObjectAttributes(BatchUpdateObjectAttributesResponse&& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = std::move(value); }

    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline BatchWriteOperationResponse& WithUpdateObjectAttributes(const BatchUpdateObjectAttributesResponse& value) { SetUpdateObjectAttributes(value); return *this;}

    /**
     * <p>Updates a given object’s attributes.</p>
     */
    inline BatchWriteOperationResponse& WithUpdateObjectAttributes(BatchUpdateObjectAttributesResponse&& value) { SetUpdateObjectAttributes(std::move(value)); return *this;}


    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline const BatchDeleteObjectResponse& GetDeleteObject() const{ return m_deleteObject; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline bool DeleteObjectHasBeenSet() const { return m_deleteObjectHasBeenSet; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline void SetDeleteObject(const BatchDeleteObjectResponse& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = value; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline void SetDeleteObject(BatchDeleteObjectResponse&& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = std::move(value); }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDeleteObject(const BatchDeleteObjectResponse& value) { SetDeleteObject(value); return *this;}

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDeleteObject(BatchDeleteObjectResponse&& value) { SetDeleteObject(std::move(value)); return *this;}


    /**
     * <p>The result of an add facet to object batch operation.</p>
     */
    inline const BatchAddFacetToObjectResponse& GetAddFacetToObject() const{ return m_addFacetToObject; }

    /**
     * <p>The result of an add facet to object batch operation.</p>
     */
    inline bool AddFacetToObjectHasBeenSet() const { return m_addFacetToObjectHasBeenSet; }

    /**
     * <p>The result of an add facet to object batch operation.</p>
     */
    inline void SetAddFacetToObject(const BatchAddFacetToObjectResponse& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = value; }

    /**
     * <p>The result of an add facet to object batch operation.</p>
     */
    inline void SetAddFacetToObject(BatchAddFacetToObjectResponse&& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = std::move(value); }

    /**
     * <p>The result of an add facet to object batch operation.</p>
     */
    inline BatchWriteOperationResponse& WithAddFacetToObject(const BatchAddFacetToObjectResponse& value) { SetAddFacetToObject(value); return *this;}

    /**
     * <p>The result of an add facet to object batch operation.</p>
     */
    inline BatchWriteOperationResponse& WithAddFacetToObject(BatchAddFacetToObjectResponse&& value) { SetAddFacetToObject(std::move(value)); return *this;}


    /**
     * <p>The result of a batch remove facet from object operation.</p>
     */
    inline const BatchRemoveFacetFromObjectResponse& GetRemoveFacetFromObject() const{ return m_removeFacetFromObject; }

    /**
     * <p>The result of a batch remove facet from object operation.</p>
     */
    inline bool RemoveFacetFromObjectHasBeenSet() const { return m_removeFacetFromObjectHasBeenSet; }

    /**
     * <p>The result of a batch remove facet from object operation.</p>
     */
    inline void SetRemoveFacetFromObject(const BatchRemoveFacetFromObjectResponse& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = value; }

    /**
     * <p>The result of a batch remove facet from object operation.</p>
     */
    inline void SetRemoveFacetFromObject(BatchRemoveFacetFromObjectResponse&& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = std::move(value); }

    /**
     * <p>The result of a batch remove facet from object operation.</p>
     */
    inline BatchWriteOperationResponse& WithRemoveFacetFromObject(const BatchRemoveFacetFromObjectResponse& value) { SetRemoveFacetFromObject(value); return *this;}

    /**
     * <p>The result of a batch remove facet from object operation.</p>
     */
    inline BatchWriteOperationResponse& WithRemoveFacetFromObject(BatchRemoveFacetFromObjectResponse&& value) { SetRemoveFacetFromObject(std::move(value)); return *this;}


    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline const BatchAttachPolicyResponse& GetAttachPolicy() const{ return m_attachPolicy; }

    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline bool AttachPolicyHasBeenSet() const { return m_attachPolicyHasBeenSet; }

    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline void SetAttachPolicy(const BatchAttachPolicyResponse& value) { m_attachPolicyHasBeenSet = true; m_attachPolicy = value; }

    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline void SetAttachPolicy(BatchAttachPolicyResponse&& value) { m_attachPolicyHasBeenSet = true; m_attachPolicy = std::move(value); }

    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline BatchWriteOperationResponse& WithAttachPolicy(const BatchAttachPolicyResponse& value) { SetAttachPolicy(value); return *this;}

    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline BatchWriteOperationResponse& WithAttachPolicy(BatchAttachPolicyResponse&& value) { SetAttachPolicy(std::move(value)); return *this;}


    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline const BatchDetachPolicyResponse& GetDetachPolicy() const{ return m_detachPolicy; }

    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline bool DetachPolicyHasBeenSet() const { return m_detachPolicyHasBeenSet; }

    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline void SetDetachPolicy(const BatchDetachPolicyResponse& value) { m_detachPolicyHasBeenSet = true; m_detachPolicy = value; }

    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline void SetDetachPolicy(BatchDetachPolicyResponse&& value) { m_detachPolicyHasBeenSet = true; m_detachPolicy = std::move(value); }

    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDetachPolicy(const BatchDetachPolicyResponse& value) { SetDetachPolicy(value); return *this;}

    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDetachPolicy(BatchDetachPolicyResponse&& value) { SetDetachPolicy(std::move(value)); return *this;}


    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline const BatchCreateIndexResponse& GetCreateIndex() const{ return m_createIndex; }

    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline bool CreateIndexHasBeenSet() const { return m_createIndexHasBeenSet; }

    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline void SetCreateIndex(const BatchCreateIndexResponse& value) { m_createIndexHasBeenSet = true; m_createIndex = value; }

    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline void SetCreateIndex(BatchCreateIndexResponse&& value) { m_createIndexHasBeenSet = true; m_createIndex = std::move(value); }

    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline BatchWriteOperationResponse& WithCreateIndex(const BatchCreateIndexResponse& value) { SetCreateIndex(value); return *this;}

    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline BatchWriteOperationResponse& WithCreateIndex(BatchCreateIndexResponse&& value) { SetCreateIndex(std::move(value)); return *this;}


    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline const BatchAttachToIndexResponse& GetAttachToIndex() const{ return m_attachToIndex; }

    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline bool AttachToIndexHasBeenSet() const { return m_attachToIndexHasBeenSet; }

    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline void SetAttachToIndex(const BatchAttachToIndexResponse& value) { m_attachToIndexHasBeenSet = true; m_attachToIndex = value; }

    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline void SetAttachToIndex(BatchAttachToIndexResponse&& value) { m_attachToIndexHasBeenSet = true; m_attachToIndex = std::move(value); }

    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline BatchWriteOperationResponse& WithAttachToIndex(const BatchAttachToIndexResponse& value) { SetAttachToIndex(value); return *this;}

    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline BatchWriteOperationResponse& WithAttachToIndex(BatchAttachToIndexResponse&& value) { SetAttachToIndex(std::move(value)); return *this;}


    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline const BatchDetachFromIndexResponse& GetDetachFromIndex() const{ return m_detachFromIndex; }

    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline bool DetachFromIndexHasBeenSet() const { return m_detachFromIndexHasBeenSet; }

    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline void SetDetachFromIndex(const BatchDetachFromIndexResponse& value) { m_detachFromIndexHasBeenSet = true; m_detachFromIndex = value; }

    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline void SetDetachFromIndex(BatchDetachFromIndexResponse&& value) { m_detachFromIndexHasBeenSet = true; m_detachFromIndex = std::move(value); }

    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline BatchWriteOperationResponse& WithDetachFromIndex(const BatchDetachFromIndexResponse& value) { SetDetachFromIndex(value); return *this;}

    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline BatchWriteOperationResponse& WithDetachFromIndex(BatchDetachFromIndexResponse&& value) { SetDetachFromIndex(std::move(value)); return *this;}


    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchAttachTypedLinkResponse& GetAttachTypedLink() const{ return m_attachTypedLink; }

    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline bool AttachTypedLinkHasBeenSet() const { return m_attachTypedLinkHasBeenSet; }

    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline void SetAttachTypedLink(const BatchAttachTypedLinkResponse& value) { m_attachTypedLinkHasBeenSet = true; m_attachTypedLink = value; }

    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline void SetAttachTypedLink(BatchAttachTypedLinkResponse&& value) { m_attachTypedLinkHasBeenSet = true; m_attachTypedLink = std::move(value); }

    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchWriteOperationResponse& WithAttachTypedLink(const BatchAttachTypedLinkResponse& value) { SetAttachTypedLink(value); return *this;}

    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchWriteOperationResponse& WithAttachTypedLink(BatchAttachTypedLinkResponse&& value) { SetAttachTypedLink(std::move(value)); return *this;}


    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchDetachTypedLinkResponse& GetDetachTypedLink() const{ return m_detachTypedLink; }

    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline bool DetachTypedLinkHasBeenSet() const { return m_detachTypedLinkHasBeenSet; }

    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline void SetDetachTypedLink(const BatchDetachTypedLinkResponse& value) { m_detachTypedLinkHasBeenSet = true; m_detachTypedLink = value; }

    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline void SetDetachTypedLink(BatchDetachTypedLinkResponse&& value) { m_detachTypedLinkHasBeenSet = true; m_detachTypedLink = std::move(value); }

    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDetachTypedLink(const BatchDetachTypedLinkResponse& value) { SetDetachTypedLink(value); return *this;}

    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchWriteOperationResponse& WithDetachTypedLink(BatchDetachTypedLinkResponse&& value) { SetDetachTypedLink(std::move(value)); return *this;}


    /**
     * <p>Represents the output of a <code>BatchWrite</code> response operation.</p>
     */
    inline const BatchUpdateLinkAttributesResponse& GetUpdateLinkAttributes() const{ return m_updateLinkAttributes; }

    /**
     * <p>Represents the output of a <code>BatchWrite</code> response operation.</p>
     */
    inline bool UpdateLinkAttributesHasBeenSet() const { return m_updateLinkAttributesHasBeenSet; }

    /**
     * <p>Represents the output of a <code>BatchWrite</code> response operation.</p>
     */
    inline void SetUpdateLinkAttributes(const BatchUpdateLinkAttributesResponse& value) { m_updateLinkAttributesHasBeenSet = true; m_updateLinkAttributes = value; }

    /**
     * <p>Represents the output of a <code>BatchWrite</code> response operation.</p>
     */
    inline void SetUpdateLinkAttributes(BatchUpdateLinkAttributesResponse&& value) { m_updateLinkAttributesHasBeenSet = true; m_updateLinkAttributes = std::move(value); }

    /**
     * <p>Represents the output of a <code>BatchWrite</code> response operation.</p>
     */
    inline BatchWriteOperationResponse& WithUpdateLinkAttributes(const BatchUpdateLinkAttributesResponse& value) { SetUpdateLinkAttributes(value); return *this;}

    /**
     * <p>Represents the output of a <code>BatchWrite</code> response operation.</p>
     */
    inline BatchWriteOperationResponse& WithUpdateLinkAttributes(BatchUpdateLinkAttributesResponse&& value) { SetUpdateLinkAttributes(std::move(value)); return *this;}

  private:

    BatchCreateObjectResponse m_createObject;
    bool m_createObjectHasBeenSet;

    BatchAttachObjectResponse m_attachObject;
    bool m_attachObjectHasBeenSet;

    BatchDetachObjectResponse m_detachObject;
    bool m_detachObjectHasBeenSet;

    BatchUpdateObjectAttributesResponse m_updateObjectAttributes;
    bool m_updateObjectAttributesHasBeenSet;

    BatchDeleteObjectResponse m_deleteObject;
    bool m_deleteObjectHasBeenSet;

    BatchAddFacetToObjectResponse m_addFacetToObject;
    bool m_addFacetToObjectHasBeenSet;

    BatchRemoveFacetFromObjectResponse m_removeFacetFromObject;
    bool m_removeFacetFromObjectHasBeenSet;

    BatchAttachPolicyResponse m_attachPolicy;
    bool m_attachPolicyHasBeenSet;

    BatchDetachPolicyResponse m_detachPolicy;
    bool m_detachPolicyHasBeenSet;

    BatchCreateIndexResponse m_createIndex;
    bool m_createIndexHasBeenSet;

    BatchAttachToIndexResponse m_attachToIndex;
    bool m_attachToIndexHasBeenSet;

    BatchDetachFromIndexResponse m_detachFromIndex;
    bool m_detachFromIndexHasBeenSet;

    BatchAttachTypedLinkResponse m_attachTypedLink;
    bool m_attachTypedLinkHasBeenSet;

    BatchDetachTypedLinkResponse m_detachTypedLink;
    bool m_detachTypedLinkHasBeenSet;

    BatchUpdateLinkAttributesResponse m_updateLinkAttributes;
    bool m_updateLinkAttributesHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
