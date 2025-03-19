/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/BatchListObjectAttributes.h>
#include <aws/clouddirectory/model/BatchListObjectChildren.h>
#include <aws/clouddirectory/model/BatchListAttachedIndices.h>
#include <aws/clouddirectory/model/BatchListObjectParentPaths.h>
#include <aws/clouddirectory/model/BatchGetObjectInformation.h>
#include <aws/clouddirectory/model/BatchGetObjectAttributes.h>
#include <aws/clouddirectory/model/BatchListObjectParents.h>
#include <aws/clouddirectory/model/BatchListObjectPolicies.h>
#include <aws/clouddirectory/model/BatchListPolicyAttachments.h>
#include <aws/clouddirectory/model/BatchLookupPolicy.h>
#include <aws/clouddirectory/model/BatchListIndex.h>
#include <aws/clouddirectory/model/BatchListOutgoingTypedLinks.h>
#include <aws/clouddirectory/model/BatchListIncomingTypedLinks.h>
#include <aws/clouddirectory/model/BatchGetLinkAttributes.h>
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
   * <p>Represents the output of a <code>BatchRead</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchReadOperation">AWS
   * API Reference</a></p>
   */
  class BatchReadOperation
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchReadOperation() = default;
    AWS_CLOUDDIRECTORY_API BatchReadOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchReadOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lists all attributes that are associated with an object.</p>
     */
    inline const BatchListObjectAttributes& GetListObjectAttributes() const { return m_listObjectAttributes; }
    inline bool ListObjectAttributesHasBeenSet() const { return m_listObjectAttributesHasBeenSet; }
    template<typename ListObjectAttributesT = BatchListObjectAttributes>
    void SetListObjectAttributes(ListObjectAttributesT&& value) { m_listObjectAttributesHasBeenSet = true; m_listObjectAttributes = std::forward<ListObjectAttributesT>(value); }
    template<typename ListObjectAttributesT = BatchListObjectAttributes>
    BatchReadOperation& WithListObjectAttributes(ListObjectAttributesT&& value) { SetListObjectAttributes(std::forward<ListObjectAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a paginated list of child objects that are associated with a given
     * object.</p>
     */
    inline const BatchListObjectChildren& GetListObjectChildren() const { return m_listObjectChildren; }
    inline bool ListObjectChildrenHasBeenSet() const { return m_listObjectChildrenHasBeenSet; }
    template<typename ListObjectChildrenT = BatchListObjectChildren>
    void SetListObjectChildren(ListObjectChildrenT&& value) { m_listObjectChildrenHasBeenSet = true; m_listObjectChildren = std::forward<ListObjectChildrenT>(value); }
    template<typename ListObjectChildrenT = BatchListObjectChildren>
    BatchReadOperation& WithListObjectChildren(ListObjectChildrenT&& value) { SetListObjectChildren(std::forward<ListObjectChildrenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists indices attached to an object.</p>
     */
    inline const BatchListAttachedIndices& GetListAttachedIndices() const { return m_listAttachedIndices; }
    inline bool ListAttachedIndicesHasBeenSet() const { return m_listAttachedIndicesHasBeenSet; }
    template<typename ListAttachedIndicesT = BatchListAttachedIndices>
    void SetListAttachedIndices(ListAttachedIndicesT&& value) { m_listAttachedIndicesHasBeenSet = true; m_listAttachedIndices = std::forward<ListAttachedIndicesT>(value); }
    template<typename ListAttachedIndicesT = BatchListAttachedIndices>
    BatchReadOperation& WithListAttachedIndices(ListAttachedIndicesT&& value) { SetListAttachedIndices(std::forward<ListAttachedIndicesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves all available parent paths for any object type such as node, leaf
     * node, policy node, and index node objects. For more information about objects,
     * see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directorystructure.html">Directory
     * Structure</a>.</p>
     */
    inline const BatchListObjectParentPaths& GetListObjectParentPaths() const { return m_listObjectParentPaths; }
    inline bool ListObjectParentPathsHasBeenSet() const { return m_listObjectParentPathsHasBeenSet; }
    template<typename ListObjectParentPathsT = BatchListObjectParentPaths>
    void SetListObjectParentPaths(ListObjectParentPathsT&& value) { m_listObjectParentPathsHasBeenSet = true; m_listObjectParentPaths = std::forward<ListObjectParentPathsT>(value); }
    template<typename ListObjectParentPathsT = BatchListObjectParentPaths>
    BatchReadOperation& WithListObjectParentPaths(ListObjectParentPathsT&& value) { SetListObjectParentPaths(std::forward<ListObjectParentPathsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves metadata about an object.</p>
     */
    inline const BatchGetObjectInformation& GetGetObjectInformation() const { return m_getObjectInformation; }
    inline bool GetObjectInformationHasBeenSet() const { return m_getObjectInformationHasBeenSet; }
    template<typename GetObjectInformationT = BatchGetObjectInformation>
    void SetGetObjectInformation(GetObjectInformationT&& value) { m_getObjectInformationHasBeenSet = true; m_getObjectInformation = std::forward<GetObjectInformationT>(value); }
    template<typename GetObjectInformationT = BatchGetObjectInformation>
    BatchReadOperation& WithGetObjectInformation(GetObjectInformationT&& value) { SetGetObjectInformation(std::forward<GetObjectInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves attributes within a facet that are associated with an object.</p>
     */
    inline const BatchGetObjectAttributes& GetGetObjectAttributes() const { return m_getObjectAttributes; }
    inline bool GetObjectAttributesHasBeenSet() const { return m_getObjectAttributesHasBeenSet; }
    template<typename GetObjectAttributesT = BatchGetObjectAttributes>
    void SetGetObjectAttributes(GetObjectAttributesT&& value) { m_getObjectAttributesHasBeenSet = true; m_getObjectAttributes = std::forward<GetObjectAttributesT>(value); }
    template<typename GetObjectAttributesT = BatchGetObjectAttributes>
    BatchReadOperation& WithGetObjectAttributes(GetObjectAttributesT&& value) { SetGetObjectAttributes(std::forward<GetObjectAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists parent objects that are associated with a given object in pagination
     * fashion.</p>
     */
    inline const BatchListObjectParents& GetListObjectParents() const { return m_listObjectParents; }
    inline bool ListObjectParentsHasBeenSet() const { return m_listObjectParentsHasBeenSet; }
    template<typename ListObjectParentsT = BatchListObjectParents>
    void SetListObjectParents(ListObjectParentsT&& value) { m_listObjectParentsHasBeenSet = true; m_listObjectParents = std::forward<ListObjectParentsT>(value); }
    template<typename ListObjectParentsT = BatchListObjectParents>
    BatchReadOperation& WithListObjectParents(ListObjectParentsT&& value) { SetListObjectParents(std::forward<ListObjectParentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns policies attached to an object in pagination fashion.</p>
     */
    inline const BatchListObjectPolicies& GetListObjectPolicies() const { return m_listObjectPolicies; }
    inline bool ListObjectPoliciesHasBeenSet() const { return m_listObjectPoliciesHasBeenSet; }
    template<typename ListObjectPoliciesT = BatchListObjectPolicies>
    void SetListObjectPolicies(ListObjectPoliciesT&& value) { m_listObjectPoliciesHasBeenSet = true; m_listObjectPolicies = std::forward<ListObjectPoliciesT>(value); }
    template<typename ListObjectPoliciesT = BatchListObjectPolicies>
    BatchReadOperation& WithListObjectPolicies(ListObjectPoliciesT&& value) { SetListObjectPolicies(std::forward<ListObjectPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
     * attached.</p>
     */
    inline const BatchListPolicyAttachments& GetListPolicyAttachments() const { return m_listPolicyAttachments; }
    inline bool ListPolicyAttachmentsHasBeenSet() const { return m_listPolicyAttachmentsHasBeenSet; }
    template<typename ListPolicyAttachmentsT = BatchListPolicyAttachments>
    void SetListPolicyAttachments(ListPolicyAttachmentsT&& value) { m_listPolicyAttachmentsHasBeenSet = true; m_listPolicyAttachments = std::forward<ListPolicyAttachmentsT>(value); }
    template<typename ListPolicyAttachmentsT = BatchListPolicyAttachments>
    BatchReadOperation& WithListPolicyAttachments(ListPolicyAttachmentsT&& value) { SetListPolicyAttachments(std::forward<ListPolicyAttachmentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists all policies from the root of the <a>Directory</a> to the object
     * specified. If there are no policies present, an empty list is returned. If
     * policies are present, and if some objects don't have the policies attached, it
     * returns the <code>ObjectIdentifier</code> for such objects. If policies are
     * present, it returns <code>ObjectIdentifier</code>, <code>policyId</code>, and
     * <code>policyType</code>. Paths that don't lead to the root from the target
     * object are ignored. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline const BatchLookupPolicy& GetLookupPolicy() const { return m_lookupPolicy; }
    inline bool LookupPolicyHasBeenSet() const { return m_lookupPolicyHasBeenSet; }
    template<typename LookupPolicyT = BatchLookupPolicy>
    void SetLookupPolicy(LookupPolicyT&& value) { m_lookupPolicyHasBeenSet = true; m_lookupPolicy = std::forward<LookupPolicyT>(value); }
    template<typename LookupPolicyT = BatchLookupPolicy>
    BatchReadOperation& WithLookupPolicy(LookupPolicyT&& value) { SetLookupPolicy(std::forward<LookupPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists objects attached to the specified index.</p>
     */
    inline const BatchListIndex& GetListIndex() const { return m_listIndex; }
    inline bool ListIndexHasBeenSet() const { return m_listIndexHasBeenSet; }
    template<typename ListIndexT = BatchListIndex>
    void SetListIndex(ListIndexT&& value) { m_listIndexHasBeenSet = true; m_listIndex = std::forward<ListIndexT>(value); }
    template<typename ListIndexT = BatchListIndex>
    BatchReadOperation& WithListIndex(ListIndexT&& value) { SetListIndex(std::forward<ListIndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchListOutgoingTypedLinks& GetListOutgoingTypedLinks() const { return m_listOutgoingTypedLinks; }
    inline bool ListOutgoingTypedLinksHasBeenSet() const { return m_listOutgoingTypedLinksHasBeenSet; }
    template<typename ListOutgoingTypedLinksT = BatchListOutgoingTypedLinks>
    void SetListOutgoingTypedLinks(ListOutgoingTypedLinksT&& value) { m_listOutgoingTypedLinksHasBeenSet = true; m_listOutgoingTypedLinks = std::forward<ListOutgoingTypedLinksT>(value); }
    template<typename ListOutgoingTypedLinksT = BatchListOutgoingTypedLinks>
    BatchReadOperation& WithListOutgoingTypedLinks(ListOutgoingTypedLinksT&& value) { SetListOutgoingTypedLinks(std::forward<ListOutgoingTypedLinksT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchListIncomingTypedLinks& GetListIncomingTypedLinks() const { return m_listIncomingTypedLinks; }
    inline bool ListIncomingTypedLinksHasBeenSet() const { return m_listIncomingTypedLinksHasBeenSet; }
    template<typename ListIncomingTypedLinksT = BatchListIncomingTypedLinks>
    void SetListIncomingTypedLinks(ListIncomingTypedLinksT&& value) { m_listIncomingTypedLinksHasBeenSet = true; m_listIncomingTypedLinks = std::forward<ListIncomingTypedLinksT>(value); }
    template<typename ListIncomingTypedLinksT = BatchListIncomingTypedLinks>
    BatchReadOperation& WithListIncomingTypedLinks(ListIncomingTypedLinksT&& value) { SetListIncomingTypedLinks(std::forward<ListIncomingTypedLinksT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves attributes that are associated with a typed link.</p>
     */
    inline const BatchGetLinkAttributes& GetGetLinkAttributes() const { return m_getLinkAttributes; }
    inline bool GetLinkAttributesHasBeenSet() const { return m_getLinkAttributesHasBeenSet; }
    template<typename GetLinkAttributesT = BatchGetLinkAttributes>
    void SetGetLinkAttributes(GetLinkAttributesT&& value) { m_getLinkAttributesHasBeenSet = true; m_getLinkAttributes = std::forward<GetLinkAttributesT>(value); }
    template<typename GetLinkAttributesT = BatchGetLinkAttributes>
    BatchReadOperation& WithGetLinkAttributes(GetLinkAttributesT&& value) { SetGetLinkAttributes(std::forward<GetLinkAttributesT>(value)); return *this;}
    ///@}
  private:

    BatchListObjectAttributes m_listObjectAttributes;
    bool m_listObjectAttributesHasBeenSet = false;

    BatchListObjectChildren m_listObjectChildren;
    bool m_listObjectChildrenHasBeenSet = false;

    BatchListAttachedIndices m_listAttachedIndices;
    bool m_listAttachedIndicesHasBeenSet = false;

    BatchListObjectParentPaths m_listObjectParentPaths;
    bool m_listObjectParentPathsHasBeenSet = false;

    BatchGetObjectInformation m_getObjectInformation;
    bool m_getObjectInformationHasBeenSet = false;

    BatchGetObjectAttributes m_getObjectAttributes;
    bool m_getObjectAttributesHasBeenSet = false;

    BatchListObjectParents m_listObjectParents;
    bool m_listObjectParentsHasBeenSet = false;

    BatchListObjectPolicies m_listObjectPolicies;
    bool m_listObjectPoliciesHasBeenSet = false;

    BatchListPolicyAttachments m_listPolicyAttachments;
    bool m_listPolicyAttachmentsHasBeenSet = false;

    BatchLookupPolicy m_lookupPolicy;
    bool m_lookupPolicyHasBeenSet = false;

    BatchListIndex m_listIndex;
    bool m_listIndexHasBeenSet = false;

    BatchListOutgoingTypedLinks m_listOutgoingTypedLinks;
    bool m_listOutgoingTypedLinksHasBeenSet = false;

    BatchListIncomingTypedLinks m_listIncomingTypedLinks;
    bool m_listIncomingTypedLinksHasBeenSet = false;

    BatchGetLinkAttributes m_getLinkAttributes;
    bool m_getLinkAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
