/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchWriteOperation
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchWriteOperation();
    AWS_CLOUDDIRECTORY_API BatchWriteOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchWriteOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Creates an object.</p>
     */
    inline const BatchCreateObject& GetCreateObject() const{ return m_createObject; }
    inline bool CreateObjectHasBeenSet() const { return m_createObjectHasBeenSet; }
    inline void SetCreateObject(const BatchCreateObject& value) { m_createObjectHasBeenSet = true; m_createObject = value; }
    inline void SetCreateObject(BatchCreateObject&& value) { m_createObjectHasBeenSet = true; m_createObject = std::move(value); }
    inline BatchWriteOperation& WithCreateObject(const BatchCreateObject& value) { SetCreateObject(value); return *this;}
    inline BatchWriteOperation& WithCreateObject(BatchCreateObject&& value) { SetCreateObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline const BatchAttachObject& GetAttachObject() const{ return m_attachObject; }
    inline bool AttachObjectHasBeenSet() const { return m_attachObjectHasBeenSet; }
    inline void SetAttachObject(const BatchAttachObject& value) { m_attachObjectHasBeenSet = true; m_attachObject = value; }
    inline void SetAttachObject(BatchAttachObject&& value) { m_attachObjectHasBeenSet = true; m_attachObject = std::move(value); }
    inline BatchWriteOperation& WithAttachObject(const BatchAttachObject& value) { SetAttachObject(value); return *this;}
    inline BatchWriteOperation& WithAttachObject(BatchAttachObject&& value) { SetAttachObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline const BatchDetachObject& GetDetachObject() const{ return m_detachObject; }
    inline bool DetachObjectHasBeenSet() const { return m_detachObjectHasBeenSet; }
    inline void SetDetachObject(const BatchDetachObject& value) { m_detachObjectHasBeenSet = true; m_detachObject = value; }
    inline void SetDetachObject(BatchDetachObject&& value) { m_detachObjectHasBeenSet = true; m_detachObject = std::move(value); }
    inline BatchWriteOperation& WithDetachObject(const BatchDetachObject& value) { SetDetachObject(value); return *this;}
    inline BatchWriteOperation& WithDetachObject(BatchDetachObject&& value) { SetDetachObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline const BatchUpdateObjectAttributes& GetUpdateObjectAttributes() const{ return m_updateObjectAttributes; }
    inline bool UpdateObjectAttributesHasBeenSet() const { return m_updateObjectAttributesHasBeenSet; }
    inline void SetUpdateObjectAttributes(const BatchUpdateObjectAttributes& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = value; }
    inline void SetUpdateObjectAttributes(BatchUpdateObjectAttributes&& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = std::move(value); }
    inline BatchWriteOperation& WithUpdateObjectAttributes(const BatchUpdateObjectAttributes& value) { SetUpdateObjectAttributes(value); return *this;}
    inline BatchWriteOperation& WithUpdateObjectAttributes(BatchUpdateObjectAttributes&& value) { SetUpdateObjectAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline const BatchDeleteObject& GetDeleteObject() const{ return m_deleteObject; }
    inline bool DeleteObjectHasBeenSet() const { return m_deleteObjectHasBeenSet; }
    inline void SetDeleteObject(const BatchDeleteObject& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = value; }
    inline void SetDeleteObject(BatchDeleteObject&& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = std::move(value); }
    inline BatchWriteOperation& WithDeleteObject(const BatchDeleteObject& value) { SetDeleteObject(value); return *this;}
    inline BatchWriteOperation& WithDeleteObject(BatchDeleteObject&& value) { SetDeleteObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A batch operation that adds a facet to an object.</p>
     */
    inline const BatchAddFacetToObject& GetAddFacetToObject() const{ return m_addFacetToObject; }
    inline bool AddFacetToObjectHasBeenSet() const { return m_addFacetToObjectHasBeenSet; }
    inline void SetAddFacetToObject(const BatchAddFacetToObject& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = value; }
    inline void SetAddFacetToObject(BatchAddFacetToObject&& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = std::move(value); }
    inline BatchWriteOperation& WithAddFacetToObject(const BatchAddFacetToObject& value) { SetAddFacetToObject(value); return *this;}
    inline BatchWriteOperation& WithAddFacetToObject(BatchAddFacetToObject&& value) { SetAddFacetToObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A batch operation that removes a facet from an object.</p>
     */
    inline const BatchRemoveFacetFromObject& GetRemoveFacetFromObject() const{ return m_removeFacetFromObject; }
    inline bool RemoveFacetFromObjectHasBeenSet() const { return m_removeFacetFromObjectHasBeenSet; }
    inline void SetRemoveFacetFromObject(const BatchRemoveFacetFromObject& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = value; }
    inline void SetRemoveFacetFromObject(BatchRemoveFacetFromObject&& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = std::move(value); }
    inline BatchWriteOperation& WithRemoveFacetFromObject(const BatchRemoveFacetFromObject& value) { SetRemoveFacetFromObject(value); return *this;}
    inline BatchWriteOperation& WithRemoveFacetFromObject(BatchRemoveFacetFromObject&& value) { SetRemoveFacetFromObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline const BatchAttachPolicy& GetAttachPolicy() const{ return m_attachPolicy; }
    inline bool AttachPolicyHasBeenSet() const { return m_attachPolicyHasBeenSet; }
    inline void SetAttachPolicy(const BatchAttachPolicy& value) { m_attachPolicyHasBeenSet = true; m_attachPolicy = value; }
    inline void SetAttachPolicy(BatchAttachPolicy&& value) { m_attachPolicyHasBeenSet = true; m_attachPolicy = std::move(value); }
    inline BatchWriteOperation& WithAttachPolicy(const BatchAttachPolicy& value) { SetAttachPolicy(value); return *this;}
    inline BatchWriteOperation& WithAttachPolicy(BatchAttachPolicy&& value) { SetAttachPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline const BatchDetachPolicy& GetDetachPolicy() const{ return m_detachPolicy; }
    inline bool DetachPolicyHasBeenSet() const { return m_detachPolicyHasBeenSet; }
    inline void SetDetachPolicy(const BatchDetachPolicy& value) { m_detachPolicyHasBeenSet = true; m_detachPolicy = value; }
    inline void SetDetachPolicy(BatchDetachPolicy&& value) { m_detachPolicyHasBeenSet = true; m_detachPolicy = std::move(value); }
    inline BatchWriteOperation& WithDetachPolicy(const BatchDetachPolicy& value) { SetDetachPolicy(value); return *this;}
    inline BatchWriteOperation& WithDetachPolicy(BatchDetachPolicy&& value) { SetDetachPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline const BatchCreateIndex& GetCreateIndex() const{ return m_createIndex; }
    inline bool CreateIndexHasBeenSet() const { return m_createIndexHasBeenSet; }
    inline void SetCreateIndex(const BatchCreateIndex& value) { m_createIndexHasBeenSet = true; m_createIndex = value; }
    inline void SetCreateIndex(BatchCreateIndex&& value) { m_createIndexHasBeenSet = true; m_createIndex = std::move(value); }
    inline BatchWriteOperation& WithCreateIndex(const BatchCreateIndex& value) { SetCreateIndex(value); return *this;}
    inline BatchWriteOperation& WithCreateIndex(BatchCreateIndex&& value) { SetCreateIndex(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline const BatchAttachToIndex& GetAttachToIndex() const{ return m_attachToIndex; }
    inline bool AttachToIndexHasBeenSet() const { return m_attachToIndexHasBeenSet; }
    inline void SetAttachToIndex(const BatchAttachToIndex& value) { m_attachToIndexHasBeenSet = true; m_attachToIndex = value; }
    inline void SetAttachToIndex(BatchAttachToIndex&& value) { m_attachToIndexHasBeenSet = true; m_attachToIndex = std::move(value); }
    inline BatchWriteOperation& WithAttachToIndex(const BatchAttachToIndex& value) { SetAttachToIndex(value); return *this;}
    inline BatchWriteOperation& WithAttachToIndex(BatchAttachToIndex&& value) { SetAttachToIndex(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline const BatchDetachFromIndex& GetDetachFromIndex() const{ return m_detachFromIndex; }
    inline bool DetachFromIndexHasBeenSet() const { return m_detachFromIndexHasBeenSet; }
    inline void SetDetachFromIndex(const BatchDetachFromIndex& value) { m_detachFromIndexHasBeenSet = true; m_detachFromIndex = value; }
    inline void SetDetachFromIndex(BatchDetachFromIndex&& value) { m_detachFromIndexHasBeenSet = true; m_detachFromIndex = std::move(value); }
    inline BatchWriteOperation& WithDetachFromIndex(const BatchDetachFromIndex& value) { SetDetachFromIndex(value); return *this;}
    inline BatchWriteOperation& WithDetachFromIndex(BatchDetachFromIndex&& value) { SetDetachFromIndex(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchAttachTypedLink& GetAttachTypedLink() const{ return m_attachTypedLink; }
    inline bool AttachTypedLinkHasBeenSet() const { return m_attachTypedLinkHasBeenSet; }
    inline void SetAttachTypedLink(const BatchAttachTypedLink& value) { m_attachTypedLinkHasBeenSet = true; m_attachTypedLink = value; }
    inline void SetAttachTypedLink(BatchAttachTypedLink&& value) { m_attachTypedLinkHasBeenSet = true; m_attachTypedLink = std::move(value); }
    inline BatchWriteOperation& WithAttachTypedLink(const BatchAttachTypedLink& value) { SetAttachTypedLink(value); return *this;}
    inline BatchWriteOperation& WithAttachTypedLink(BatchAttachTypedLink&& value) { SetAttachTypedLink(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchDetachTypedLink& GetDetachTypedLink() const{ return m_detachTypedLink; }
    inline bool DetachTypedLinkHasBeenSet() const { return m_detachTypedLinkHasBeenSet; }
    inline void SetDetachTypedLink(const BatchDetachTypedLink& value) { m_detachTypedLinkHasBeenSet = true; m_detachTypedLink = value; }
    inline void SetDetachTypedLink(BatchDetachTypedLink&& value) { m_detachTypedLinkHasBeenSet = true; m_detachTypedLink = std::move(value); }
    inline BatchWriteOperation& WithDetachTypedLink(const BatchDetachTypedLink& value) { SetDetachTypedLink(value); return *this;}
    inline BatchWriteOperation& WithDetachTypedLink(BatchDetachTypedLink&& value) { SetDetachTypedLink(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline const BatchUpdateLinkAttributes& GetUpdateLinkAttributes() const{ return m_updateLinkAttributes; }
    inline bool UpdateLinkAttributesHasBeenSet() const { return m_updateLinkAttributesHasBeenSet; }
    inline void SetUpdateLinkAttributes(const BatchUpdateLinkAttributes& value) { m_updateLinkAttributesHasBeenSet = true; m_updateLinkAttributes = value; }
    inline void SetUpdateLinkAttributes(BatchUpdateLinkAttributes&& value) { m_updateLinkAttributesHasBeenSet = true; m_updateLinkAttributes = std::move(value); }
    inline BatchWriteOperation& WithUpdateLinkAttributes(const BatchUpdateLinkAttributes& value) { SetUpdateLinkAttributes(value); return *this;}
    inline BatchWriteOperation& WithUpdateLinkAttributes(BatchUpdateLinkAttributes&& value) { SetUpdateLinkAttributes(std::move(value)); return *this;}
    ///@}
  private:

    BatchCreateObject m_createObject;
    bool m_createObjectHasBeenSet = false;

    BatchAttachObject m_attachObject;
    bool m_attachObjectHasBeenSet = false;

    BatchDetachObject m_detachObject;
    bool m_detachObjectHasBeenSet = false;

    BatchUpdateObjectAttributes m_updateObjectAttributes;
    bool m_updateObjectAttributesHasBeenSet = false;

    BatchDeleteObject m_deleteObject;
    bool m_deleteObjectHasBeenSet = false;

    BatchAddFacetToObject m_addFacetToObject;
    bool m_addFacetToObjectHasBeenSet = false;

    BatchRemoveFacetFromObject m_removeFacetFromObject;
    bool m_removeFacetFromObjectHasBeenSet = false;

    BatchAttachPolicy m_attachPolicy;
    bool m_attachPolicyHasBeenSet = false;

    BatchDetachPolicy m_detachPolicy;
    bool m_detachPolicyHasBeenSet = false;

    BatchCreateIndex m_createIndex;
    bool m_createIndexHasBeenSet = false;

    BatchAttachToIndex m_attachToIndex;
    bool m_attachToIndexHasBeenSet = false;

    BatchDetachFromIndex m_detachFromIndex;
    bool m_detachFromIndexHasBeenSet = false;

    BatchAttachTypedLink m_attachTypedLink;
    bool m_attachTypedLinkHasBeenSet = false;

    BatchDetachTypedLink m_detachTypedLink;
    bool m_detachTypedLinkHasBeenSet = false;

    BatchUpdateLinkAttributes m_updateLinkAttributes;
    bool m_updateLinkAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
