/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/TypedLinkSchemaAndFacetName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/TypedLinkAttributeRange.h>
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
   * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
   * information for an object inside a <a>BatchRead</a> operation. For more
   * information, see <a>ListOutgoingTypedLinks</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListOutgoingTypedLinks">AWS
   * API Reference</a></p>
   */
  class BatchListOutgoingTypedLinks
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinks() = default;
    AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinks(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinks& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reference that identifies the object whose attributes will be listed.</p>
     */
    inline const ObjectReference& GetObjectReference() const { return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    template<typename ObjectReferenceT = ObjectReference>
    void SetObjectReference(ObjectReferenceT&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::forward<ObjectReferenceT>(value); }
    template<typename ObjectReferenceT = ObjectReference>
    BatchListOutgoingTypedLinks& WithObjectReference(ObjectReferenceT&& value) { SetObjectReference(std::forward<ObjectReferenceT>(value)); return *this;}
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
    BatchListOutgoingTypedLinks& WithFilterAttributeRanges(FilterAttributeRangesT&& value) { SetFilterAttributeRanges(std::forward<FilterAttributeRangesT>(value)); return *this;}
    template<typename FilterAttributeRangesT = TypedLinkAttributeRange>
    BatchListOutgoingTypedLinks& AddFilterAttributeRanges(FilterAttributeRangesT&& value) { m_filterAttributeRangesHasBeenSet = true; m_filterAttributeRanges.emplace_back(std::forward<FilterAttributeRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters are interpreted in the order of the attributes defined on the typed
     * link facet, not the order they are supplied to any API calls.</p>
     */
    inline const TypedLinkSchemaAndFacetName& GetFilterTypedLink() const { return m_filterTypedLink; }
    inline bool FilterTypedLinkHasBeenSet() const { return m_filterTypedLinkHasBeenSet; }
    template<typename FilterTypedLinkT = TypedLinkSchemaAndFacetName>
    void SetFilterTypedLink(FilterTypedLinkT&& value) { m_filterTypedLinkHasBeenSet = true; m_filterTypedLink = std::forward<FilterTypedLinkT>(value); }
    template<typename FilterTypedLinkT = TypedLinkSchemaAndFacetName>
    BatchListOutgoingTypedLinks& WithFilterTypedLink(FilterTypedLinkT&& value) { SetFilterTypedLink(std::forward<FilterTypedLinkT>(value)); return *this;}
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
    BatchListOutgoingTypedLinks& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline BatchListOutgoingTypedLinks& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

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
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
