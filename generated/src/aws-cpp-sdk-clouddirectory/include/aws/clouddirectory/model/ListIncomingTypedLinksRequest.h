/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/TypedLinkSchemaAndFacetName.h>
#include <aws/clouddirectory/model/ConsistencyLevel.h>
#include <aws/clouddirectory/model/TypedLinkAttributeRange.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class ListIncomingTypedLinksRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API ListIncomingTypedLinksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIncomingTypedLinks"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to list the
     * typed links.</p>
     */
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    ListIncomingTypedLinksRequest& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference that identifies the object whose attributes will be listed.</p>
     */
    inline const ObjectReference& GetObjectReference() const { return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    template<typename ObjectReferenceT = ObjectReference>
    void SetObjectReference(ObjectReferenceT&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::forward<ObjectReferenceT>(value); }
    template<typename ObjectReferenceT = ObjectReference>
    ListIncomingTypedLinksRequest& WithObjectReference(ObjectReferenceT&& value) { SetObjectReference(std::forward<ObjectReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline const Aws::Vector<TypedLinkAttributeRange>& GetFilterAttributeRanges() const { return m_filterAttributeRanges; }
    inline bool FilterAttributeRangesHasBeenSet() const { return m_filterAttributeRangesHasBeenSet; }
    template<typename FilterAttributeRangesT = Aws::Vector<TypedLinkAttributeRange>>
    void SetFilterAttributeRanges(FilterAttributeRangesT&& value) { m_filterAttributeRangesHasBeenSet = true; m_filterAttributeRanges = std::forward<FilterAttributeRangesT>(value); }
    template<typename FilterAttributeRangesT = Aws::Vector<TypedLinkAttributeRange>>
    ListIncomingTypedLinksRequest& WithFilterAttributeRanges(FilterAttributeRangesT&& value) { SetFilterAttributeRanges(std::forward<FilterAttributeRangesT>(value)); return *this;}
    template<typename FilterAttributeRangesT = TypedLinkAttributeRange>
    ListIncomingTypedLinksRequest& AddFilterAttributeRanges(FilterAttributeRangesT&& value) { m_filterAttributeRangesHasBeenSet = true; m_filterAttributeRanges.emplace_back(std::forward<FilterAttributeRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters are interpreted in the order of the attributes on the typed link
     * facet, not the order in which they are supplied to any API calls.</p>
     */
    inline const TypedLinkSchemaAndFacetName& GetFilterTypedLink() const { return m_filterTypedLink; }
    inline bool FilterTypedLinkHasBeenSet() const { return m_filterTypedLinkHasBeenSet; }
    template<typename FilterTypedLinkT = TypedLinkSchemaAndFacetName>
    void SetFilterTypedLink(FilterTypedLinkT&& value) { m_filterTypedLinkHasBeenSet = true; m_filterTypedLink = std::forward<FilterTypedLinkT>(value); }
    template<typename FilterTypedLinkT = TypedLinkSchemaAndFacetName>
    ListIncomingTypedLinksRequest& WithFilterTypedLink(FilterTypedLinkT&& value) { SetFilterTypedLink(std::forward<FilterTypedLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIncomingTypedLinksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListIncomingTypedLinksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The consistency level to execute the request at.</p>
     */
    inline ConsistencyLevel GetConsistencyLevel() const { return m_consistencyLevel; }
    inline bool ConsistencyLevelHasBeenSet() const { return m_consistencyLevelHasBeenSet; }
    inline void SetConsistencyLevel(ConsistencyLevel value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }
    inline ListIncomingTypedLinksRequest& WithConsistencyLevel(ConsistencyLevel value) { SetConsistencyLevel(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;

    Aws::Vector<TypedLinkAttributeRange> m_filterAttributeRanges;
    bool m_filterAttributeRangesHasBeenSet = false;

    TypedLinkSchemaAndFacetName m_filterTypedLink;
    bool m_filterTypedLinkHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ConsistencyLevel m_consistencyLevel{ConsistencyLevel::NOT_SET};
    bool m_consistencyLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
