/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/BatchListObjectAttributesResponse.h>
#include <aws/clouddirectory/model/BatchListObjectChildrenResponse.h>
#include <aws/clouddirectory/model/BatchGetObjectInformationResponse.h>
#include <aws/clouddirectory/model/BatchGetObjectAttributesResponse.h>
#include <aws/clouddirectory/model/BatchListAttachedIndicesResponse.h>
#include <aws/clouddirectory/model/BatchListObjectParentPathsResponse.h>
#include <aws/clouddirectory/model/BatchListObjectPoliciesResponse.h>
#include <aws/clouddirectory/model/BatchListPolicyAttachmentsResponse.h>
#include <aws/clouddirectory/model/BatchLookupPolicyResponse.h>
#include <aws/clouddirectory/model/BatchListIndexResponse.h>
#include <aws/clouddirectory/model/BatchListOutgoingTypedLinksResponse.h>
#include <aws/clouddirectory/model/BatchListIncomingTypedLinksResponse.h>
#include <aws/clouddirectory/model/BatchGetLinkAttributesResponse.h>
#include <aws/clouddirectory/model/BatchListObjectParentsResponse.h>
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
   * <p>Represents the output of a <code>BatchRead</code> success response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchReadSuccessfulResponse">AWS
   * API Reference</a></p>
   */
  class BatchReadSuccessfulResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchReadSuccessfulResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchReadSuccessfulResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchReadSuccessfulResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lists all attributes that are associated with an object.</p>
     */
    inline const BatchListObjectAttributesResponse& GetListObjectAttributes() const { return m_listObjectAttributes; }
    inline bool ListObjectAttributesHasBeenSet() const { return m_listObjectAttributesHasBeenSet; }
    template<typename ListObjectAttributesT = BatchListObjectAttributesResponse>
    void SetListObjectAttributes(ListObjectAttributesT&& value) { m_listObjectAttributesHasBeenSet = true; m_listObjectAttributes = std::forward<ListObjectAttributesT>(value); }
    template<typename ListObjectAttributesT = BatchListObjectAttributesResponse>
    BatchReadSuccessfulResponse& WithListObjectAttributes(ListObjectAttributesT&& value) { SetListObjectAttributes(std::forward<ListObjectAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a paginated list of child objects that are associated with a given
     * object.</p>
     */
    inline const BatchListObjectChildrenResponse& GetListObjectChildren() const { return m_listObjectChildren; }
    inline bool ListObjectChildrenHasBeenSet() const { return m_listObjectChildrenHasBeenSet; }
    template<typename ListObjectChildrenT = BatchListObjectChildrenResponse>
    void SetListObjectChildren(ListObjectChildrenT&& value) { m_listObjectChildrenHasBeenSet = true; m_listObjectChildren = std::forward<ListObjectChildrenT>(value); }
    template<typename ListObjectChildrenT = BatchListObjectChildrenResponse>
    BatchReadSuccessfulResponse& WithListObjectChildren(ListObjectChildrenT&& value) { SetListObjectChildren(std::forward<ListObjectChildrenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves metadata about an object.</p>
     */
    inline const BatchGetObjectInformationResponse& GetGetObjectInformation() const { return m_getObjectInformation; }
    inline bool GetObjectInformationHasBeenSet() const { return m_getObjectInformationHasBeenSet; }
    template<typename GetObjectInformationT = BatchGetObjectInformationResponse>
    void SetGetObjectInformation(GetObjectInformationT&& value) { m_getObjectInformationHasBeenSet = true; m_getObjectInformation = std::forward<GetObjectInformationT>(value); }
    template<typename GetObjectInformationT = BatchGetObjectInformationResponse>
    BatchReadSuccessfulResponse& WithGetObjectInformation(GetObjectInformationT&& value) { SetGetObjectInformation(std::forward<GetObjectInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves attributes within a facet that are associated with an object.</p>
     */
    inline const BatchGetObjectAttributesResponse& GetGetObjectAttributes() const { return m_getObjectAttributes; }
    inline bool GetObjectAttributesHasBeenSet() const { return m_getObjectAttributesHasBeenSet; }
    template<typename GetObjectAttributesT = BatchGetObjectAttributesResponse>
    void SetGetObjectAttributes(GetObjectAttributesT&& value) { m_getObjectAttributesHasBeenSet = true; m_getObjectAttributes = std::forward<GetObjectAttributesT>(value); }
    template<typename GetObjectAttributesT = BatchGetObjectAttributesResponse>
    BatchReadSuccessfulResponse& WithGetObjectAttributes(GetObjectAttributesT&& value) { SetGetObjectAttributes(std::forward<GetObjectAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists indices attached to an object.</p>
     */
    inline const BatchListAttachedIndicesResponse& GetListAttachedIndices() const { return m_listAttachedIndices; }
    inline bool ListAttachedIndicesHasBeenSet() const { return m_listAttachedIndicesHasBeenSet; }
    template<typename ListAttachedIndicesT = BatchListAttachedIndicesResponse>
    void SetListAttachedIndices(ListAttachedIndicesT&& value) { m_listAttachedIndicesHasBeenSet = true; m_listAttachedIndices = std::forward<ListAttachedIndicesT>(value); }
    template<typename ListAttachedIndicesT = BatchListAttachedIndicesResponse>
    BatchReadSuccessfulResponse& WithListAttachedIndices(ListAttachedIndicesT&& value) { SetListAttachedIndices(std::forward<ListAttachedIndicesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves all available parent paths for any object type such as node, leaf
     * node, policy node, and index node objects. For more information about objects,
     * see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directorystructure.html">Directory
     * Structure</a>.</p>
     */
    inline const BatchListObjectParentPathsResponse& GetListObjectParentPaths() const { return m_listObjectParentPaths; }
    inline bool ListObjectParentPathsHasBeenSet() const { return m_listObjectParentPathsHasBeenSet; }
    template<typename ListObjectParentPathsT = BatchListObjectParentPathsResponse>
    void SetListObjectParentPaths(ListObjectParentPathsT&& value) { m_listObjectParentPathsHasBeenSet = true; m_listObjectParentPaths = std::forward<ListObjectParentPathsT>(value); }
    template<typename ListObjectParentPathsT = BatchListObjectParentPathsResponse>
    BatchReadSuccessfulResponse& WithListObjectParentPaths(ListObjectParentPathsT&& value) { SetListObjectParentPaths(std::forward<ListObjectParentPathsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns policies attached to an object in pagination fashion.</p>
     */
    inline const BatchListObjectPoliciesResponse& GetListObjectPolicies() const { return m_listObjectPolicies; }
    inline bool ListObjectPoliciesHasBeenSet() const { return m_listObjectPoliciesHasBeenSet; }
    template<typename ListObjectPoliciesT = BatchListObjectPoliciesResponse>
    void SetListObjectPolicies(ListObjectPoliciesT&& value) { m_listObjectPoliciesHasBeenSet = true; m_listObjectPolicies = std::forward<ListObjectPoliciesT>(value); }
    template<typename ListObjectPoliciesT = BatchListObjectPoliciesResponse>
    BatchReadSuccessfulResponse& WithListObjectPolicies(ListObjectPoliciesT&& value) { SetListObjectPolicies(std::forward<ListObjectPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
     * attached.</p>
     */
    inline const BatchListPolicyAttachmentsResponse& GetListPolicyAttachments() const { return m_listPolicyAttachments; }
    inline bool ListPolicyAttachmentsHasBeenSet() const { return m_listPolicyAttachmentsHasBeenSet; }
    template<typename ListPolicyAttachmentsT = BatchListPolicyAttachmentsResponse>
    void SetListPolicyAttachments(ListPolicyAttachmentsT&& value) { m_listPolicyAttachmentsHasBeenSet = true; m_listPolicyAttachments = std::forward<ListPolicyAttachmentsT>(value); }
    template<typename ListPolicyAttachmentsT = BatchListPolicyAttachmentsResponse>
    BatchReadSuccessfulResponse& WithListPolicyAttachments(ListPolicyAttachmentsT&& value) { SetListPolicyAttachments(std::forward<ListPolicyAttachmentsT>(value)); return *this;}
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
    inline const BatchLookupPolicyResponse& GetLookupPolicy() const { return m_lookupPolicy; }
    inline bool LookupPolicyHasBeenSet() const { return m_lookupPolicyHasBeenSet; }
    template<typename LookupPolicyT = BatchLookupPolicyResponse>
    void SetLookupPolicy(LookupPolicyT&& value) { m_lookupPolicyHasBeenSet = true; m_lookupPolicy = std::forward<LookupPolicyT>(value); }
    template<typename LookupPolicyT = BatchLookupPolicyResponse>
    BatchReadSuccessfulResponse& WithLookupPolicy(LookupPolicyT&& value) { SetLookupPolicy(std::forward<LookupPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists objects attached to the specified index.</p>
     */
    inline const BatchListIndexResponse& GetListIndex() const { return m_listIndex; }
    inline bool ListIndexHasBeenSet() const { return m_listIndexHasBeenSet; }
    template<typename ListIndexT = BatchListIndexResponse>
    void SetListIndex(ListIndexT&& value) { m_listIndexHasBeenSet = true; m_listIndex = std::forward<ListIndexT>(value); }
    template<typename ListIndexT = BatchListIndexResponse>
    BatchReadSuccessfulResponse& WithListIndex(ListIndexT&& value) { SetListIndex(std::forward<ListIndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchListOutgoingTypedLinksResponse& GetListOutgoingTypedLinks() const { return m_listOutgoingTypedLinks; }
    inline bool ListOutgoingTypedLinksHasBeenSet() const { return m_listOutgoingTypedLinksHasBeenSet; }
    template<typename ListOutgoingTypedLinksT = BatchListOutgoingTypedLinksResponse>
    void SetListOutgoingTypedLinks(ListOutgoingTypedLinksT&& value) { m_listOutgoingTypedLinksHasBeenSet = true; m_listOutgoingTypedLinks = std::forward<ListOutgoingTypedLinksT>(value); }
    template<typename ListOutgoingTypedLinksT = BatchListOutgoingTypedLinksResponse>
    BatchReadSuccessfulResponse& WithListOutgoingTypedLinks(ListOutgoingTypedLinksT&& value) { SetListOutgoingTypedLinks(std::forward<ListOutgoingTypedLinksT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchListIncomingTypedLinksResponse& GetListIncomingTypedLinks() const { return m_listIncomingTypedLinks; }
    inline bool ListIncomingTypedLinksHasBeenSet() const { return m_listIncomingTypedLinksHasBeenSet; }
    template<typename ListIncomingTypedLinksT = BatchListIncomingTypedLinksResponse>
    void SetListIncomingTypedLinks(ListIncomingTypedLinksT&& value) { m_listIncomingTypedLinksHasBeenSet = true; m_listIncomingTypedLinks = std::forward<ListIncomingTypedLinksT>(value); }
    template<typename ListIncomingTypedLinksT = BatchListIncomingTypedLinksResponse>
    BatchReadSuccessfulResponse& WithListIncomingTypedLinks(ListIncomingTypedLinksT&& value) { SetListIncomingTypedLinks(std::forward<ListIncomingTypedLinksT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of attributes to retrieve from the typed link.</p>
     */
    inline const BatchGetLinkAttributesResponse& GetGetLinkAttributes() const { return m_getLinkAttributes; }
    inline bool GetLinkAttributesHasBeenSet() const { return m_getLinkAttributesHasBeenSet; }
    template<typename GetLinkAttributesT = BatchGetLinkAttributesResponse>
    void SetGetLinkAttributes(GetLinkAttributesT&& value) { m_getLinkAttributesHasBeenSet = true; m_getLinkAttributes = std::forward<GetLinkAttributesT>(value); }
    template<typename GetLinkAttributesT = BatchGetLinkAttributesResponse>
    BatchReadSuccessfulResponse& WithGetLinkAttributes(GetLinkAttributesT&& value) { SetGetLinkAttributes(std::forward<GetLinkAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of parent objects to retrieve.</p>
     */
    inline const BatchListObjectParentsResponse& GetListObjectParents() const { return m_listObjectParents; }
    inline bool ListObjectParentsHasBeenSet() const { return m_listObjectParentsHasBeenSet; }
    template<typename ListObjectParentsT = BatchListObjectParentsResponse>
    void SetListObjectParents(ListObjectParentsT&& value) { m_listObjectParentsHasBeenSet = true; m_listObjectParents = std::forward<ListObjectParentsT>(value); }
    template<typename ListObjectParentsT = BatchListObjectParentsResponse>
    BatchReadSuccessfulResponse& WithListObjectParents(ListObjectParentsT&& value) { SetListObjectParents(std::forward<ListObjectParentsT>(value)); return *this;}
    ///@}
  private:

    BatchListObjectAttributesResponse m_listObjectAttributes;
    bool m_listObjectAttributesHasBeenSet = false;

    BatchListObjectChildrenResponse m_listObjectChildren;
    bool m_listObjectChildrenHasBeenSet = false;

    BatchGetObjectInformationResponse m_getObjectInformation;
    bool m_getObjectInformationHasBeenSet = false;

    BatchGetObjectAttributesResponse m_getObjectAttributes;
    bool m_getObjectAttributesHasBeenSet = false;

    BatchListAttachedIndicesResponse m_listAttachedIndices;
    bool m_listAttachedIndicesHasBeenSet = false;

    BatchListObjectParentPathsResponse m_listObjectParentPaths;
    bool m_listObjectParentPathsHasBeenSet = false;

    BatchListObjectPoliciesResponse m_listObjectPolicies;
    bool m_listObjectPoliciesHasBeenSet = false;

    BatchListPolicyAttachmentsResponse m_listPolicyAttachments;
    bool m_listPolicyAttachmentsHasBeenSet = false;

    BatchLookupPolicyResponse m_lookupPolicy;
    bool m_lookupPolicyHasBeenSet = false;

    BatchListIndexResponse m_listIndex;
    bool m_listIndexHasBeenSet = false;

    BatchListOutgoingTypedLinksResponse m_listOutgoingTypedLinks;
    bool m_listOutgoingTypedLinksHasBeenSet = false;

    BatchListIncomingTypedLinksResponse m_listIncomingTypedLinks;
    bool m_listIncomingTypedLinksHasBeenSet = false;

    BatchGetLinkAttributesResponse m_getLinkAttributes;
    bool m_getLinkAttributesHasBeenSet = false;

    BatchListObjectParentsResponse m_listObjectParents;
    bool m_listObjectParentsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
