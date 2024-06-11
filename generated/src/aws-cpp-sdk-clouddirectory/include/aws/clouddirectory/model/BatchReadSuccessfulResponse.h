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
    AWS_CLOUDDIRECTORY_API BatchReadSuccessfulResponse();
    AWS_CLOUDDIRECTORY_API BatchReadSuccessfulResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchReadSuccessfulResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lists all attributes that are associated with an object.</p>
     */
    inline const BatchListObjectAttributesResponse& GetListObjectAttributes() const{ return m_listObjectAttributes; }
    inline bool ListObjectAttributesHasBeenSet() const { return m_listObjectAttributesHasBeenSet; }
    inline void SetListObjectAttributes(const BatchListObjectAttributesResponse& value) { m_listObjectAttributesHasBeenSet = true; m_listObjectAttributes = value; }
    inline void SetListObjectAttributes(BatchListObjectAttributesResponse&& value) { m_listObjectAttributesHasBeenSet = true; m_listObjectAttributes = std::move(value); }
    inline BatchReadSuccessfulResponse& WithListObjectAttributes(const BatchListObjectAttributesResponse& value) { SetListObjectAttributes(value); return *this;}
    inline BatchReadSuccessfulResponse& WithListObjectAttributes(BatchListObjectAttributesResponse&& value) { SetListObjectAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a paginated list of child objects that are associated with a given
     * object.</p>
     */
    inline const BatchListObjectChildrenResponse& GetListObjectChildren() const{ return m_listObjectChildren; }
    inline bool ListObjectChildrenHasBeenSet() const { return m_listObjectChildrenHasBeenSet; }
    inline void SetListObjectChildren(const BatchListObjectChildrenResponse& value) { m_listObjectChildrenHasBeenSet = true; m_listObjectChildren = value; }
    inline void SetListObjectChildren(BatchListObjectChildrenResponse&& value) { m_listObjectChildrenHasBeenSet = true; m_listObjectChildren = std::move(value); }
    inline BatchReadSuccessfulResponse& WithListObjectChildren(const BatchListObjectChildrenResponse& value) { SetListObjectChildren(value); return *this;}
    inline BatchReadSuccessfulResponse& WithListObjectChildren(BatchListObjectChildrenResponse&& value) { SetListObjectChildren(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves metadata about an object.</p>
     */
    inline const BatchGetObjectInformationResponse& GetGetObjectInformation() const{ return m_getObjectInformation; }
    inline bool GetObjectInformationHasBeenSet() const { return m_getObjectInformationHasBeenSet; }
    inline void SetGetObjectInformation(const BatchGetObjectInformationResponse& value) { m_getObjectInformationHasBeenSet = true; m_getObjectInformation = value; }
    inline void SetGetObjectInformation(BatchGetObjectInformationResponse&& value) { m_getObjectInformationHasBeenSet = true; m_getObjectInformation = std::move(value); }
    inline BatchReadSuccessfulResponse& WithGetObjectInformation(const BatchGetObjectInformationResponse& value) { SetGetObjectInformation(value); return *this;}
    inline BatchReadSuccessfulResponse& WithGetObjectInformation(BatchGetObjectInformationResponse&& value) { SetGetObjectInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves attributes within a facet that are associated with an object.</p>
     */
    inline const BatchGetObjectAttributesResponse& GetGetObjectAttributes() const{ return m_getObjectAttributes; }
    inline bool GetObjectAttributesHasBeenSet() const { return m_getObjectAttributesHasBeenSet; }
    inline void SetGetObjectAttributes(const BatchGetObjectAttributesResponse& value) { m_getObjectAttributesHasBeenSet = true; m_getObjectAttributes = value; }
    inline void SetGetObjectAttributes(BatchGetObjectAttributesResponse&& value) { m_getObjectAttributesHasBeenSet = true; m_getObjectAttributes = std::move(value); }
    inline BatchReadSuccessfulResponse& WithGetObjectAttributes(const BatchGetObjectAttributesResponse& value) { SetGetObjectAttributes(value); return *this;}
    inline BatchReadSuccessfulResponse& WithGetObjectAttributes(BatchGetObjectAttributesResponse&& value) { SetGetObjectAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists indices attached to an object.</p>
     */
    inline const BatchListAttachedIndicesResponse& GetListAttachedIndices() const{ return m_listAttachedIndices; }
    inline bool ListAttachedIndicesHasBeenSet() const { return m_listAttachedIndicesHasBeenSet; }
    inline void SetListAttachedIndices(const BatchListAttachedIndicesResponse& value) { m_listAttachedIndicesHasBeenSet = true; m_listAttachedIndices = value; }
    inline void SetListAttachedIndices(BatchListAttachedIndicesResponse&& value) { m_listAttachedIndicesHasBeenSet = true; m_listAttachedIndices = std::move(value); }
    inline BatchReadSuccessfulResponse& WithListAttachedIndices(const BatchListAttachedIndicesResponse& value) { SetListAttachedIndices(value); return *this;}
    inline BatchReadSuccessfulResponse& WithListAttachedIndices(BatchListAttachedIndicesResponse&& value) { SetListAttachedIndices(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves all available parent paths for any object type such as node, leaf
     * node, policy node, and index node objects. For more information about objects,
     * see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directorystructure.html">Directory
     * Structure</a>.</p>
     */
    inline const BatchListObjectParentPathsResponse& GetListObjectParentPaths() const{ return m_listObjectParentPaths; }
    inline bool ListObjectParentPathsHasBeenSet() const { return m_listObjectParentPathsHasBeenSet; }
    inline void SetListObjectParentPaths(const BatchListObjectParentPathsResponse& value) { m_listObjectParentPathsHasBeenSet = true; m_listObjectParentPaths = value; }
    inline void SetListObjectParentPaths(BatchListObjectParentPathsResponse&& value) { m_listObjectParentPathsHasBeenSet = true; m_listObjectParentPaths = std::move(value); }
    inline BatchReadSuccessfulResponse& WithListObjectParentPaths(const BatchListObjectParentPathsResponse& value) { SetListObjectParentPaths(value); return *this;}
    inline BatchReadSuccessfulResponse& WithListObjectParentPaths(BatchListObjectParentPathsResponse&& value) { SetListObjectParentPaths(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns policies attached to an object in pagination fashion.</p>
     */
    inline const BatchListObjectPoliciesResponse& GetListObjectPolicies() const{ return m_listObjectPolicies; }
    inline bool ListObjectPoliciesHasBeenSet() const { return m_listObjectPoliciesHasBeenSet; }
    inline void SetListObjectPolicies(const BatchListObjectPoliciesResponse& value) { m_listObjectPoliciesHasBeenSet = true; m_listObjectPolicies = value; }
    inline void SetListObjectPolicies(BatchListObjectPoliciesResponse&& value) { m_listObjectPoliciesHasBeenSet = true; m_listObjectPolicies = std::move(value); }
    inline BatchReadSuccessfulResponse& WithListObjectPolicies(const BatchListObjectPoliciesResponse& value) { SetListObjectPolicies(value); return *this;}
    inline BatchReadSuccessfulResponse& WithListObjectPolicies(BatchListObjectPoliciesResponse&& value) { SetListObjectPolicies(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
     * attached.</p>
     */
    inline const BatchListPolicyAttachmentsResponse& GetListPolicyAttachments() const{ return m_listPolicyAttachments; }
    inline bool ListPolicyAttachmentsHasBeenSet() const { return m_listPolicyAttachmentsHasBeenSet; }
    inline void SetListPolicyAttachments(const BatchListPolicyAttachmentsResponse& value) { m_listPolicyAttachmentsHasBeenSet = true; m_listPolicyAttachments = value; }
    inline void SetListPolicyAttachments(BatchListPolicyAttachmentsResponse&& value) { m_listPolicyAttachmentsHasBeenSet = true; m_listPolicyAttachments = std::move(value); }
    inline BatchReadSuccessfulResponse& WithListPolicyAttachments(const BatchListPolicyAttachmentsResponse& value) { SetListPolicyAttachments(value); return *this;}
    inline BatchReadSuccessfulResponse& WithListPolicyAttachments(BatchListPolicyAttachmentsResponse&& value) { SetListPolicyAttachments(std::move(value)); return *this;}
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
    inline const BatchLookupPolicyResponse& GetLookupPolicy() const{ return m_lookupPolicy; }
    inline bool LookupPolicyHasBeenSet() const { return m_lookupPolicyHasBeenSet; }
    inline void SetLookupPolicy(const BatchLookupPolicyResponse& value) { m_lookupPolicyHasBeenSet = true; m_lookupPolicy = value; }
    inline void SetLookupPolicy(BatchLookupPolicyResponse&& value) { m_lookupPolicyHasBeenSet = true; m_lookupPolicy = std::move(value); }
    inline BatchReadSuccessfulResponse& WithLookupPolicy(const BatchLookupPolicyResponse& value) { SetLookupPolicy(value); return *this;}
    inline BatchReadSuccessfulResponse& WithLookupPolicy(BatchLookupPolicyResponse&& value) { SetLookupPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists objects attached to the specified index.</p>
     */
    inline const BatchListIndexResponse& GetListIndex() const{ return m_listIndex; }
    inline bool ListIndexHasBeenSet() const { return m_listIndexHasBeenSet; }
    inline void SetListIndex(const BatchListIndexResponse& value) { m_listIndexHasBeenSet = true; m_listIndex = value; }
    inline void SetListIndex(BatchListIndexResponse&& value) { m_listIndexHasBeenSet = true; m_listIndex = std::move(value); }
    inline BatchReadSuccessfulResponse& WithListIndex(const BatchListIndexResponse& value) { SetListIndex(value); return *this;}
    inline BatchReadSuccessfulResponse& WithListIndex(BatchListIndexResponse&& value) { SetListIndex(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchListOutgoingTypedLinksResponse& GetListOutgoingTypedLinks() const{ return m_listOutgoingTypedLinks; }
    inline bool ListOutgoingTypedLinksHasBeenSet() const { return m_listOutgoingTypedLinksHasBeenSet; }
    inline void SetListOutgoingTypedLinks(const BatchListOutgoingTypedLinksResponse& value) { m_listOutgoingTypedLinksHasBeenSet = true; m_listOutgoingTypedLinks = value; }
    inline void SetListOutgoingTypedLinks(BatchListOutgoingTypedLinksResponse&& value) { m_listOutgoingTypedLinksHasBeenSet = true; m_listOutgoingTypedLinks = std::move(value); }
    inline BatchReadSuccessfulResponse& WithListOutgoingTypedLinks(const BatchListOutgoingTypedLinksResponse& value) { SetListOutgoingTypedLinks(value); return *this;}
    inline BatchReadSuccessfulResponse& WithListOutgoingTypedLinks(BatchListOutgoingTypedLinksResponse&& value) { SetListOutgoingTypedLinks(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchListIncomingTypedLinksResponse& GetListIncomingTypedLinks() const{ return m_listIncomingTypedLinks; }
    inline bool ListIncomingTypedLinksHasBeenSet() const { return m_listIncomingTypedLinksHasBeenSet; }
    inline void SetListIncomingTypedLinks(const BatchListIncomingTypedLinksResponse& value) { m_listIncomingTypedLinksHasBeenSet = true; m_listIncomingTypedLinks = value; }
    inline void SetListIncomingTypedLinks(BatchListIncomingTypedLinksResponse&& value) { m_listIncomingTypedLinksHasBeenSet = true; m_listIncomingTypedLinks = std::move(value); }
    inline BatchReadSuccessfulResponse& WithListIncomingTypedLinks(const BatchListIncomingTypedLinksResponse& value) { SetListIncomingTypedLinks(value); return *this;}
    inline BatchReadSuccessfulResponse& WithListIncomingTypedLinks(BatchListIncomingTypedLinksResponse&& value) { SetListIncomingTypedLinks(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of attributes to retrieve from the typed link.</p>
     */
    inline const BatchGetLinkAttributesResponse& GetGetLinkAttributes() const{ return m_getLinkAttributes; }
    inline bool GetLinkAttributesHasBeenSet() const { return m_getLinkAttributesHasBeenSet; }
    inline void SetGetLinkAttributes(const BatchGetLinkAttributesResponse& value) { m_getLinkAttributesHasBeenSet = true; m_getLinkAttributes = value; }
    inline void SetGetLinkAttributes(BatchGetLinkAttributesResponse&& value) { m_getLinkAttributesHasBeenSet = true; m_getLinkAttributes = std::move(value); }
    inline BatchReadSuccessfulResponse& WithGetLinkAttributes(const BatchGetLinkAttributesResponse& value) { SetGetLinkAttributes(value); return *this;}
    inline BatchReadSuccessfulResponse& WithGetLinkAttributes(BatchGetLinkAttributesResponse&& value) { SetGetLinkAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of parent objects to retrieve.</p>
     */
    inline const BatchListObjectParentsResponse& GetListObjectParents() const{ return m_listObjectParents; }
    inline bool ListObjectParentsHasBeenSet() const { return m_listObjectParentsHasBeenSet; }
    inline void SetListObjectParents(const BatchListObjectParentsResponse& value) { m_listObjectParentsHasBeenSet = true; m_listObjectParents = value; }
    inline void SetListObjectParents(BatchListObjectParentsResponse&& value) { m_listObjectParentsHasBeenSet = true; m_listObjectParents = std::move(value); }
    inline BatchReadSuccessfulResponse& WithListObjectParents(const BatchListObjectParentsResponse& value) { SetListObjectParents(value); return *this;}
    inline BatchReadSuccessfulResponse& WithListObjectParents(BatchListObjectParentsResponse&& value) { SetListObjectParents(std::move(value)); return *this;}
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
