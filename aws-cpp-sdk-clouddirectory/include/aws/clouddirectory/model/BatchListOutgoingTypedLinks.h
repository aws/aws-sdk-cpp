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
  class AWS_CLOUDDIRECTORY_API BatchListOutgoingTypedLinks
  {
  public:
    BatchListOutgoingTypedLinks();
    BatchListOutgoingTypedLinks(Aws::Utils::Json::JsonView jsonValue);
    BatchListOutgoingTypedLinks& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reference that identifies the object whose attributes will be listed.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>The reference that identifies the object whose attributes will be listed.</p>
     */
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }

    /**
     * <p>The reference that identifies the object whose attributes will be listed.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>The reference that identifies the object whose attributes will be listed.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }

    /**
     * <p>The reference that identifies the object whose attributes will be listed.</p>
     */
    inline BatchListOutgoingTypedLinks& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>The reference that identifies the object whose attributes will be listed.</p>
     */
    inline BatchListOutgoingTypedLinks& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}


    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline const Aws::Vector<TypedLinkAttributeRange>& GetFilterAttributeRanges() const{ return m_filterAttributeRanges; }

    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline bool FilterAttributeRangesHasBeenSet() const { return m_filterAttributeRangesHasBeenSet; }

    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline void SetFilterAttributeRanges(const Aws::Vector<TypedLinkAttributeRange>& value) { m_filterAttributeRangesHasBeenSet = true; m_filterAttributeRanges = value; }

    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline void SetFilterAttributeRanges(Aws::Vector<TypedLinkAttributeRange>&& value) { m_filterAttributeRangesHasBeenSet = true; m_filterAttributeRanges = std::move(value); }

    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline BatchListOutgoingTypedLinks& WithFilterAttributeRanges(const Aws::Vector<TypedLinkAttributeRange>& value) { SetFilterAttributeRanges(value); return *this;}

    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline BatchListOutgoingTypedLinks& WithFilterAttributeRanges(Aws::Vector<TypedLinkAttributeRange>&& value) { SetFilterAttributeRanges(std::move(value)); return *this;}

    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline BatchListOutgoingTypedLinks& AddFilterAttributeRanges(const TypedLinkAttributeRange& value) { m_filterAttributeRangesHasBeenSet = true; m_filterAttributeRanges.push_back(value); return *this; }

    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline BatchListOutgoingTypedLinks& AddFilterAttributeRanges(TypedLinkAttributeRange&& value) { m_filterAttributeRangesHasBeenSet = true; m_filterAttributeRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters are interpreted in the order of the attributes defined on the typed
     * link facet, not the order they are supplied to any API calls.</p>
     */
    inline const TypedLinkSchemaAndFacetName& GetFilterTypedLink() const{ return m_filterTypedLink; }

    /**
     * <p>Filters are interpreted in the order of the attributes defined on the typed
     * link facet, not the order they are supplied to any API calls.</p>
     */
    inline bool FilterTypedLinkHasBeenSet() const { return m_filterTypedLinkHasBeenSet; }

    /**
     * <p>Filters are interpreted in the order of the attributes defined on the typed
     * link facet, not the order they are supplied to any API calls.</p>
     */
    inline void SetFilterTypedLink(const TypedLinkSchemaAndFacetName& value) { m_filterTypedLinkHasBeenSet = true; m_filterTypedLink = value; }

    /**
     * <p>Filters are interpreted in the order of the attributes defined on the typed
     * link facet, not the order they are supplied to any API calls.</p>
     */
    inline void SetFilterTypedLink(TypedLinkSchemaAndFacetName&& value) { m_filterTypedLinkHasBeenSet = true; m_filterTypedLink = std::move(value); }

    /**
     * <p>Filters are interpreted in the order of the attributes defined on the typed
     * link facet, not the order they are supplied to any API calls.</p>
     */
    inline BatchListOutgoingTypedLinks& WithFilterTypedLink(const TypedLinkSchemaAndFacetName& value) { SetFilterTypedLink(value); return *this;}

    /**
     * <p>Filters are interpreted in the order of the attributes defined on the typed
     * link facet, not the order they are supplied to any API calls.</p>
     */
    inline BatchListOutgoingTypedLinks& WithFilterTypedLink(TypedLinkSchemaAndFacetName&& value) { SetFilterTypedLink(std::move(value)); return *this;}


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListOutgoingTypedLinks& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListOutgoingTypedLinks& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListOutgoingTypedLinks& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline BatchListOutgoingTypedLinks& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet;

    Aws::Vector<TypedLinkAttributeRange> m_filterAttributeRanges;
    bool m_filterAttributeRangesHasBeenSet;

    TypedLinkSchemaAndFacetName m_filterTypedLink;
    bool m_filterTypedLinkHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
