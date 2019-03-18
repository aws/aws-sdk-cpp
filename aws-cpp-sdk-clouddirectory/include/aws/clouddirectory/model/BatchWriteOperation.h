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
#include <aws/clouddirectory/model/BatchCreateObject.h>
#include <aws/clouddirectory/model/BatchAttachObject.h>
#include <aws/clouddirectory/model/BatchDetachObject.h>
#include <aws/clouddirectory/model/BatchUpdateObjectAttributes.h>
#include <aws/clouddirectory/model/BatchDeleteObject.h>
#include <aws/clouddirectory/model/BatchAddFacetToObject.h>
#include <aws/clouddirectory/model/BatchRemoveFacetFromObject.h>
#include <aws/clouddirectory/model/BatchAttachPolicy.h>
#include <aws/clouddirectory/model/BatchDetachPolicy.h>
#include <aws/clouddirectory/model/BatchCreateIndex.h>
#include <aws/clouddirectory/model/BatchAttachToIndex.h>
#include <aws/clouddirectory/model/BatchDetachFromIndex.h>
#include <aws/clouddirectory/model/BatchAttachTypedLink.h>
#include <aws/clouddirectory/model/BatchDetachTypedLink.h>
#include <aws/clouddirectory/model/BatchUpdateLinkAttributes.h>
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
   * <p>Represents the output of a <code>BatchWrite</code> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchWriteOperation">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchWriteOperation
  {
  public:
    BatchWriteOperation();
    BatchWriteOperation(Aws::Utils::Json::JsonView jsonValue);
    BatchWriteOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Creates an object.</p>
     */
    inline const BatchCreateObject& GetCreateObject() const{ return m_createObject; }

    /**
     * <p>Creates an object.</p>
     */
    inline bool CreateObjectHasBeenSet() const { return m_createObjectHasBeenSet; }

    /**
     * <p>Creates an object.</p>
     */
    inline void SetCreateObject(const BatchCreateObject& value) { m_createObjectHasBeenSet = true; m_createObject = value; }

    /**
     * <p>Creates an object.</p>
     */
    inline void SetCreateObject(BatchCreateObject&& value) { m_createObjectHasBeenSet = true; m_createObject = std::move(value); }

    /**
     * <p>Creates an object.</p>
     */
    inline BatchWriteOperation& WithCreateObject(const BatchCreateObject& value) { SetCreateObject(value); return *this;}

    /**
     * <p>Creates an object.</p>
     */
    inline BatchWriteOperation& WithCreateObject(BatchCreateObject&& value) { SetCreateObject(std::move(value)); return *this;}


    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline const BatchAttachObject& GetAttachObject() const{ return m_attachObject; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline bool AttachObjectHasBeenSet() const { return m_attachObjectHasBeenSet; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline void SetAttachObject(const BatchAttachObject& value) { m_attachObjectHasBeenSet = true; m_attachObject = value; }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline void SetAttachObject(BatchAttachObject&& value) { m_attachObjectHasBeenSet = true; m_attachObject = std::move(value); }

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithAttachObject(const BatchAttachObject& value) { SetAttachObject(value); return *this;}

    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithAttachObject(BatchAttachObject&& value) { SetAttachObject(std::move(value)); return *this;}


    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline const BatchDetachObject& GetDetachObject() const{ return m_detachObject; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline bool DetachObjectHasBeenSet() const { return m_detachObjectHasBeenSet; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline void SetDetachObject(const BatchDetachObject& value) { m_detachObjectHasBeenSet = true; m_detachObject = value; }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline void SetDetachObject(BatchDetachObject&& value) { m_detachObjectHasBeenSet = true; m_detachObject = std::move(value); }

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithDetachObject(const BatchDetachObject& value) { SetDetachObject(value); return *this;}

    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithDetachObject(BatchDetachObject&& value) { SetDetachObject(std::move(value)); return *this;}


    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline const BatchUpdateObjectAttributes& GetUpdateObjectAttributes() const{ return m_updateObjectAttributes; }

    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline bool UpdateObjectAttributesHasBeenSet() const { return m_updateObjectAttributesHasBeenSet; }

    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline void SetUpdateObjectAttributes(const BatchUpdateObjectAttributes& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = value; }

    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline void SetUpdateObjectAttributes(BatchUpdateObjectAttributes&& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = std::move(value); }

    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline BatchWriteOperation& WithUpdateObjectAttributes(const BatchUpdateObjectAttributes& value) { SetUpdateObjectAttributes(value); return *this;}

    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline BatchWriteOperation& WithUpdateObjectAttributes(BatchUpdateObjectAttributes&& value) { SetUpdateObjectAttributes(std::move(value)); return *this;}


    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline const BatchDeleteObject& GetDeleteObject() const{ return m_deleteObject; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline bool DeleteObjectHasBeenSet() const { return m_deleteObjectHasBeenSet; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline void SetDeleteObject(const BatchDeleteObject& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = value; }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline void SetDeleteObject(BatchDeleteObject&& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = std::move(value); }

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithDeleteObject(const BatchDeleteObject& value) { SetDeleteObject(value); return *this;}

    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithDeleteObject(BatchDeleteObject&& value) { SetDeleteObject(std::move(value)); return *this;}


    /**
     * <p>A batch operation that adds a facet to an object.</p>
     */
    inline const BatchAddFacetToObject& GetAddFacetToObject() const{ return m_addFacetToObject; }

    /**
     * <p>A batch operation that adds a facet to an object.</p>
     */
    inline bool AddFacetToObjectHasBeenSet() const { return m_addFacetToObjectHasBeenSet; }

    /**
     * <p>A batch operation that adds a facet to an object.</p>
     */
    inline void SetAddFacetToObject(const BatchAddFacetToObject& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = value; }

    /**
     * <p>A batch operation that adds a facet to an object.</p>
     */
    inline void SetAddFacetToObject(BatchAddFacetToObject&& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = std::move(value); }

    /**
     * <p>A batch operation that adds a facet to an object.</p>
     */
    inline BatchWriteOperation& WithAddFacetToObject(const BatchAddFacetToObject& value) { SetAddFacetToObject(value); return *this;}

    /**
     * <p>A batch operation that adds a facet to an object.</p>
     */
    inline BatchWriteOperation& WithAddFacetToObject(BatchAddFacetToObject&& value) { SetAddFacetToObject(std::move(value)); return *this;}


    /**
     * <p>A batch operation that removes a facet from an object.</p>
     */
    inline const BatchRemoveFacetFromObject& GetRemoveFacetFromObject() const{ return m_removeFacetFromObject; }

    /**
     * <p>A batch operation that removes a facet from an object.</p>
     */
    inline bool RemoveFacetFromObjectHasBeenSet() const { return m_removeFacetFromObjectHasBeenSet; }

    /**
     * <p>A batch operation that removes a facet from an object.</p>
     */
    inline void SetRemoveFacetFromObject(const BatchRemoveFacetFromObject& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = value; }

    /**
     * <p>A batch operation that removes a facet from an object.</p>
     */
    inline void SetRemoveFacetFromObject(BatchRemoveFacetFromObject&& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = std::move(value); }

    /**
     * <p>A batch operation that removes a facet from an object.</p>
     */
    inline BatchWriteOperation& WithRemoveFacetFromObject(const BatchRemoveFacetFromObject& value) { SetRemoveFacetFromObject(value); return *this;}

    /**
     * <p>A batch operation that removes a facet from an object.</p>
     */
    inline BatchWriteOperation& WithRemoveFacetFromObject(BatchRemoveFacetFromObject&& value) { SetRemoveFacetFromObject(std::move(value)); return *this;}


    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline const BatchAttachPolicy& GetAttachPolicy() const{ return m_attachPolicy; }

    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline bool AttachPolicyHasBeenSet() const { return m_attachPolicyHasBeenSet; }

    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline void SetAttachPolicy(const BatchAttachPolicy& value) { m_attachPolicyHasBeenSet = true; m_attachPolicy = value; }

    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline void SetAttachPolicy(BatchAttachPolicy&& value) { m_attachPolicyHasBeenSet = true; m_attachPolicy = std::move(value); }

    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline BatchWriteOperation& WithAttachPolicy(const BatchAttachPolicy& value) { SetAttachPolicy(value); return *this;}

    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline BatchWriteOperation& WithAttachPolicy(BatchAttachPolicy&& value) { SetAttachPolicy(std::move(value)); return *this;}


    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline const BatchDetachPolicy& GetDetachPolicy() const{ return m_detachPolicy; }

    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline bool DetachPolicyHasBeenSet() const { return m_detachPolicyHasBeenSet; }

    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline void SetDetachPolicy(const BatchDetachPolicy& value) { m_detachPolicyHasBeenSet = true; m_detachPolicy = value; }

    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline void SetDetachPolicy(BatchDetachPolicy&& value) { m_detachPolicyHasBeenSet = true; m_detachPolicy = std::move(value); }

    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithDetachPolicy(const BatchDetachPolicy& value) { SetDetachPolicy(value); return *this;}

    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline BatchWriteOperation& WithDetachPolicy(BatchDetachPolicy&& value) { SetDetachPolicy(std::move(value)); return *this;}


    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline const BatchCreateIndex& GetCreateIndex() const{ return m_createIndex; }

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
    inline void SetCreateIndex(const BatchCreateIndex& value) { m_createIndexHasBeenSet = true; m_createIndex = value; }

    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline void SetCreateIndex(BatchCreateIndex&& value) { m_createIndexHasBeenSet = true; m_createIndex = std::move(value); }

    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline BatchWriteOperation& WithCreateIndex(const BatchCreateIndex& value) { SetCreateIndex(value); return *this;}

    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline BatchWriteOperation& WithCreateIndex(BatchCreateIndex&& value) { SetCreateIndex(std::move(value)); return *this;}


    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline const BatchAttachToIndex& GetAttachToIndex() const{ return m_attachToIndex; }

    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline bool AttachToIndexHasBeenSet() const { return m_attachToIndexHasBeenSet; }

    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline void SetAttachToIndex(const BatchAttachToIndex& value) { m_attachToIndexHasBeenSet = true; m_attachToIndex = value; }

    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline void SetAttachToIndex(BatchAttachToIndex&& value) { m_attachToIndexHasBeenSet = true; m_attachToIndex = std::move(value); }

    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline BatchWriteOperation& WithAttachToIndex(const BatchAttachToIndex& value) { SetAttachToIndex(value); return *this;}

    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline BatchWriteOperation& WithAttachToIndex(BatchAttachToIndex&& value) { SetAttachToIndex(std::move(value)); return *this;}


    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline const BatchDetachFromIndex& GetDetachFromIndex() const{ return m_detachFromIndex; }

    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline bool DetachFromIndexHasBeenSet() const { return m_detachFromIndexHasBeenSet; }

    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline void SetDetachFromIndex(const BatchDetachFromIndex& value) { m_detachFromIndexHasBeenSet = true; m_detachFromIndex = value; }

    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline void SetDetachFromIndex(BatchDetachFromIndex&& value) { m_detachFromIndexHasBeenSet = true; m_detachFromIndex = std::move(value); }

    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline BatchWriteOperation& WithDetachFromIndex(const BatchDetachFromIndex& value) { SetDetachFromIndex(value); return *this;}

    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline BatchWriteOperation& WithDetachFromIndex(BatchDetachFromIndex&& value) { SetDetachFromIndex(std::move(value)); return *this;}


    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchAttachTypedLink& GetAttachTypedLink() const{ return m_attachTypedLink; }

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
    inline void SetAttachTypedLink(const BatchAttachTypedLink& value) { m_attachTypedLinkHasBeenSet = true; m_attachTypedLink = value; }

    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline void SetAttachTypedLink(BatchAttachTypedLink&& value) { m_attachTypedLinkHasBeenSet = true; m_attachTypedLink = std::move(value); }

    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchWriteOperation& WithAttachTypedLink(const BatchAttachTypedLink& value) { SetAttachTypedLink(value); return *this;}

    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchWriteOperation& WithAttachTypedLink(BatchAttachTypedLink&& value) { SetAttachTypedLink(std::move(value)); return *this;}


    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchDetachTypedLink& GetDetachTypedLink() const{ return m_detachTypedLink; }

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
    inline void SetDetachTypedLink(const BatchDetachTypedLink& value) { m_detachTypedLinkHasBeenSet = true; m_detachTypedLink = value; }

    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline void SetDetachTypedLink(BatchDetachTypedLink&& value) { m_detachTypedLinkHasBeenSet = true; m_detachTypedLink = std::move(value); }

    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchWriteOperation& WithDetachTypedLink(const BatchDetachTypedLink& value) { SetDetachTypedLink(value); return *this;}

    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchWriteOperation& WithDetachTypedLink(BatchDetachTypedLink&& value) { SetDetachTypedLink(std::move(value)); return *this;}


    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline const BatchUpdateLinkAttributes& GetUpdateLinkAttributes() const{ return m_updateLinkAttributes; }

    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline bool UpdateLinkAttributesHasBeenSet() const { return m_updateLinkAttributesHasBeenSet; }

    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline void SetUpdateLinkAttributes(const BatchUpdateLinkAttributes& value) { m_updateLinkAttributesHasBeenSet = true; m_updateLinkAttributes = value; }

    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline void SetUpdateLinkAttributes(BatchUpdateLinkAttributes&& value) { m_updateLinkAttributesHasBeenSet = true; m_updateLinkAttributes = std::move(value); }

    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline BatchWriteOperation& WithUpdateLinkAttributes(const BatchUpdateLinkAttributes& value) { SetUpdateLinkAttributes(value); return *this;}

    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline BatchWriteOperation& WithUpdateLinkAttributes(BatchUpdateLinkAttributes&& value) { SetUpdateLinkAttributes(std::move(value)); return *this;}

  private:

    BatchCreateObject m_createObject;
    bool m_createObjectHasBeenSet;

    BatchAttachObject m_attachObject;
    bool m_attachObjectHasBeenSet;

    BatchDetachObject m_detachObject;
    bool m_detachObjectHasBeenSet;

    BatchUpdateObjectAttributes m_updateObjectAttributes;
    bool m_updateObjectAttributesHasBeenSet;

    BatchDeleteObject m_deleteObject;
    bool m_deleteObjectHasBeenSet;

    BatchAddFacetToObject m_addFacetToObject;
    bool m_addFacetToObjectHasBeenSet;

    BatchRemoveFacetFromObject m_removeFacetFromObject;
    bool m_removeFacetFromObjectHasBeenSet;

    BatchAttachPolicy m_attachPolicy;
    bool m_attachPolicyHasBeenSet;

    BatchDetachPolicy m_detachPolicy;
    bool m_detachPolicyHasBeenSet;

    BatchCreateIndex m_createIndex;
    bool m_createIndexHasBeenSet;

    BatchAttachToIndex m_attachToIndex;
    bool m_attachToIndexHasBeenSet;

    BatchDetachFromIndex m_detachFromIndex;
    bool m_detachFromIndexHasBeenSet;

    BatchAttachTypedLink m_attachTypedLink;
    bool m_attachTypedLinkHasBeenSet;

    BatchDetachTypedLink m_detachTypedLink;
    bool m_detachTypedLinkHasBeenSet;

    BatchUpdateLinkAttributes m_updateLinkAttributes;
    bool m_updateLinkAttributesHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
