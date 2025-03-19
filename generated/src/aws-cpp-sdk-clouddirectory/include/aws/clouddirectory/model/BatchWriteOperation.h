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
    AWS_CLOUDDIRECTORY_API BatchWriteOperation() = default;
    AWS_CLOUDDIRECTORY_API BatchWriteOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchWriteOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Creates an object.</p>
     */
    inline const BatchCreateObject& GetCreateObject() const { return m_createObject; }
    inline bool CreateObjectHasBeenSet() const { return m_createObjectHasBeenSet; }
    template<typename CreateObjectT = BatchCreateObject>
    void SetCreateObject(CreateObjectT&& value) { m_createObjectHasBeenSet = true; m_createObject = std::forward<CreateObjectT>(value); }
    template<typename CreateObjectT = BatchCreateObject>
    BatchWriteOperation& WithCreateObject(CreateObjectT&& value) { SetCreateObject(std::forward<CreateObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches an object to a <a>Directory</a>.</p>
     */
    inline const BatchAttachObject& GetAttachObject() const { return m_attachObject; }
    inline bool AttachObjectHasBeenSet() const { return m_attachObjectHasBeenSet; }
    template<typename AttachObjectT = BatchAttachObject>
    void SetAttachObject(AttachObjectT&& value) { m_attachObjectHasBeenSet = true; m_attachObject = std::forward<AttachObjectT>(value); }
    template<typename AttachObjectT = BatchAttachObject>
    BatchWriteOperation& WithAttachObject(AttachObjectT&& value) { SetAttachObject(std::forward<AttachObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches an object from a <a>Directory</a>.</p>
     */
    inline const BatchDetachObject& GetDetachObject() const { return m_detachObject; }
    inline bool DetachObjectHasBeenSet() const { return m_detachObjectHasBeenSet; }
    template<typename DetachObjectT = BatchDetachObject>
    void SetDetachObject(DetachObjectT&& value) { m_detachObjectHasBeenSet = true; m_detachObject = std::forward<DetachObjectT>(value); }
    template<typename DetachObjectT = BatchDetachObject>
    BatchWriteOperation& WithDetachObject(DetachObjectT&& value) { SetDetachObject(std::forward<DetachObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline const BatchUpdateObjectAttributes& GetUpdateObjectAttributes() const { return m_updateObjectAttributes; }
    inline bool UpdateObjectAttributesHasBeenSet() const { return m_updateObjectAttributesHasBeenSet; }
    template<typename UpdateObjectAttributesT = BatchUpdateObjectAttributes>
    void SetUpdateObjectAttributes(UpdateObjectAttributesT&& value) { m_updateObjectAttributesHasBeenSet = true; m_updateObjectAttributes = std::forward<UpdateObjectAttributesT>(value); }
    template<typename UpdateObjectAttributesT = BatchUpdateObjectAttributes>
    BatchWriteOperation& WithUpdateObjectAttributes(UpdateObjectAttributesT&& value) { SetUpdateObjectAttributes(std::forward<UpdateObjectAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deletes an object in a <a>Directory</a>.</p>
     */
    inline const BatchDeleteObject& GetDeleteObject() const { return m_deleteObject; }
    inline bool DeleteObjectHasBeenSet() const { return m_deleteObjectHasBeenSet; }
    template<typename DeleteObjectT = BatchDeleteObject>
    void SetDeleteObject(DeleteObjectT&& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = std::forward<DeleteObjectT>(value); }
    template<typename DeleteObjectT = BatchDeleteObject>
    BatchWriteOperation& WithDeleteObject(DeleteObjectT&& value) { SetDeleteObject(std::forward<DeleteObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A batch operation that adds a facet to an object.</p>
     */
    inline const BatchAddFacetToObject& GetAddFacetToObject() const { return m_addFacetToObject; }
    inline bool AddFacetToObjectHasBeenSet() const { return m_addFacetToObjectHasBeenSet; }
    template<typename AddFacetToObjectT = BatchAddFacetToObject>
    void SetAddFacetToObject(AddFacetToObjectT&& value) { m_addFacetToObjectHasBeenSet = true; m_addFacetToObject = std::forward<AddFacetToObjectT>(value); }
    template<typename AddFacetToObjectT = BatchAddFacetToObject>
    BatchWriteOperation& WithAddFacetToObject(AddFacetToObjectT&& value) { SetAddFacetToObject(std::forward<AddFacetToObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A batch operation that removes a facet from an object.</p>
     */
    inline const BatchRemoveFacetFromObject& GetRemoveFacetFromObject() const { return m_removeFacetFromObject; }
    inline bool RemoveFacetFromObjectHasBeenSet() const { return m_removeFacetFromObjectHasBeenSet; }
    template<typename RemoveFacetFromObjectT = BatchRemoveFacetFromObject>
    void SetRemoveFacetFromObject(RemoveFacetFromObjectT&& value) { m_removeFacetFromObjectHasBeenSet = true; m_removeFacetFromObject = std::forward<RemoveFacetFromObjectT>(value); }
    template<typename RemoveFacetFromObjectT = BatchRemoveFacetFromObject>
    BatchWriteOperation& WithRemoveFacetFromObject(RemoveFacetFromObjectT&& value) { SetRemoveFacetFromObject(std::forward<RemoveFacetFromObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches a policy object to a regular object. An object can have a limited
     * number of attached policies.</p>
     */
    inline const BatchAttachPolicy& GetAttachPolicy() const { return m_attachPolicy; }
    inline bool AttachPolicyHasBeenSet() const { return m_attachPolicyHasBeenSet; }
    template<typename AttachPolicyT = BatchAttachPolicy>
    void SetAttachPolicy(AttachPolicyT&& value) { m_attachPolicyHasBeenSet = true; m_attachPolicy = std::forward<AttachPolicyT>(value); }
    template<typename AttachPolicyT = BatchAttachPolicy>
    BatchWriteOperation& WithAttachPolicy(AttachPolicyT&& value) { SetAttachPolicy(std::forward<AttachPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches a policy from a <a>Directory</a>.</p>
     */
    inline const BatchDetachPolicy& GetDetachPolicy() const { return m_detachPolicy; }
    inline bool DetachPolicyHasBeenSet() const { return m_detachPolicyHasBeenSet; }
    template<typename DetachPolicyT = BatchDetachPolicy>
    void SetDetachPolicy(DetachPolicyT&& value) { m_detachPolicyHasBeenSet = true; m_detachPolicy = std::forward<DetachPolicyT>(value); }
    template<typename DetachPolicyT = BatchDetachPolicy>
    BatchWriteOperation& WithDetachPolicy(DetachPolicyT&& value) { SetDetachPolicy(std::forward<DetachPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates an index object. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.htm">Indexing
     * and search</a> for more information.</p>
     */
    inline const BatchCreateIndex& GetCreateIndex() const { return m_createIndex; }
    inline bool CreateIndexHasBeenSet() const { return m_createIndexHasBeenSet; }
    template<typename CreateIndexT = BatchCreateIndex>
    void SetCreateIndex(CreateIndexT&& value) { m_createIndexHasBeenSet = true; m_createIndex = std::forward<CreateIndexT>(value); }
    template<typename CreateIndexT = BatchCreateIndex>
    BatchWriteOperation& WithCreateIndex(CreateIndexT&& value) { SetCreateIndex(std::forward<CreateIndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches the specified object to the specified index.</p>
     */
    inline const BatchAttachToIndex& GetAttachToIndex() const { return m_attachToIndex; }
    inline bool AttachToIndexHasBeenSet() const { return m_attachToIndexHasBeenSet; }
    template<typename AttachToIndexT = BatchAttachToIndex>
    void SetAttachToIndex(AttachToIndexT&& value) { m_attachToIndexHasBeenSet = true; m_attachToIndex = std::forward<AttachToIndexT>(value); }
    template<typename AttachToIndexT = BatchAttachToIndex>
    BatchWriteOperation& WithAttachToIndex(AttachToIndexT&& value) { SetAttachToIndex(std::forward<AttachToIndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches the specified object from the specified index.</p>
     */
    inline const BatchDetachFromIndex& GetDetachFromIndex() const { return m_detachFromIndex; }
    inline bool DetachFromIndexHasBeenSet() const { return m_detachFromIndexHasBeenSet; }
    template<typename DetachFromIndexT = BatchDetachFromIndex>
    void SetDetachFromIndex(DetachFromIndexT&& value) { m_detachFromIndexHasBeenSet = true; m_detachFromIndex = std::forward<DetachFromIndexT>(value); }
    template<typename DetachFromIndexT = BatchDetachFromIndex>
    BatchWriteOperation& WithDetachFromIndex(DetachFromIndexT&& value) { SetDetachFromIndex(std::forward<DetachFromIndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attaches a typed link to a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchAttachTypedLink& GetAttachTypedLink() const { return m_attachTypedLink; }
    inline bool AttachTypedLinkHasBeenSet() const { return m_attachTypedLinkHasBeenSet; }
    template<typename AttachTypedLinkT = BatchAttachTypedLink>
    void SetAttachTypedLink(AttachTypedLinkT&& value) { m_attachTypedLinkHasBeenSet = true; m_attachTypedLink = std::forward<AttachTypedLinkT>(value); }
    template<typename AttachTypedLinkT = BatchAttachTypedLink>
    BatchWriteOperation& WithAttachTypedLink(AttachTypedLinkT&& value) { SetAttachTypedLink(std::forward<AttachTypedLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detaches a typed link from a specified source and target object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchDetachTypedLink& GetDetachTypedLink() const { return m_detachTypedLink; }
    inline bool DetachTypedLinkHasBeenSet() const { return m_detachTypedLinkHasBeenSet; }
    template<typename DetachTypedLinkT = BatchDetachTypedLink>
    void SetDetachTypedLink(DetachTypedLinkT&& value) { m_detachTypedLinkHasBeenSet = true; m_detachTypedLink = std::forward<DetachTypedLinkT>(value); }
    template<typename DetachTypedLinkT = BatchDetachTypedLink>
    BatchWriteOperation& WithDetachTypedLink(DetachTypedLinkT&& value) { SetDetachTypedLink(std::forward<DetachTypedLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates a given object's attributes.</p>
     */
    inline const BatchUpdateLinkAttributes& GetUpdateLinkAttributes() const { return m_updateLinkAttributes; }
    inline bool UpdateLinkAttributesHasBeenSet() const { return m_updateLinkAttributesHasBeenSet; }
    template<typename UpdateLinkAttributesT = BatchUpdateLinkAttributes>
    void SetUpdateLinkAttributes(UpdateLinkAttributesT&& value) { m_updateLinkAttributesHasBeenSet = true; m_updateLinkAttributes = std::forward<UpdateLinkAttributesT>(value); }
    template<typename UpdateLinkAttributesT = BatchUpdateLinkAttributes>
    BatchWriteOperation& WithUpdateLinkAttributes(UpdateLinkAttributesT&& value) { SetUpdateLinkAttributes(std::forward<UpdateLinkAttributesT>(value)); return *this;}
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
