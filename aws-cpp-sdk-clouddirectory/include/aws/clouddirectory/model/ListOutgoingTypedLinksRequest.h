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
  class AWS_CLOUDDIRECTORY_API ListOutgoingTypedLinksRequest : public CloudDirectoryRequest
  {
  public:
    ListOutgoingTypedLinksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOutgoingTypedLinks"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to list the
     * typed links.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to list the
     * typed links.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to list the
     * typed links.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to list the
     * typed links.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to list the
     * typed links.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to list the
     * typed links.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to list the
     * typed links.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the directory where you want to list the
     * typed links.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    /**
     * <p>A reference that identifies the object whose attributes will be listed.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>A reference that identifies the object whose attributes will be listed.</p>
     */
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }

    /**
     * <p>A reference that identifies the object whose attributes will be listed.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>A reference that identifies the object whose attributes will be listed.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::move(value); }

    /**
     * <p>A reference that identifies the object whose attributes will be listed.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>A reference that identifies the object whose attributes will be listed.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}


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
    inline ListOutgoingTypedLinksRequest& WithFilterAttributeRanges(const Aws::Vector<TypedLinkAttributeRange>& value) { SetFilterAttributeRanges(value); return *this;}

    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithFilterAttributeRanges(Aws::Vector<TypedLinkAttributeRange>&& value) { SetFilterAttributeRanges(std::move(value)); return *this;}

    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline ListOutgoingTypedLinksRequest& AddFilterAttributeRanges(const TypedLinkAttributeRange& value) { m_filterAttributeRangesHasBeenSet = true; m_filterAttributeRanges.push_back(value); return *this; }

    /**
     * <p>Provides range filters for multiple attributes. When providing ranges to
     * typed link selection, any inexact ranges must be specified at the end. Any
     * attributes that do not have a range specified are presumed to match the entire
     * range.</p>
     */
    inline ListOutgoingTypedLinksRequest& AddFilterAttributeRanges(TypedLinkAttributeRange&& value) { m_filterAttributeRangesHasBeenSet = true; m_filterAttributeRanges.push_back(std::move(value)); return *this; }


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
    inline ListOutgoingTypedLinksRequest& WithFilterTypedLink(const TypedLinkSchemaAndFacetName& value) { SetFilterTypedLink(value); return *this;}

    /**
     * <p>Filters are interpreted in the order of the attributes defined on the typed
     * link facet, not the order they are supplied to any API calls.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithFilterTypedLink(TypedLinkSchemaAndFacetName&& value) { SetFilterTypedLink(std::move(value)); return *this;}


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
    inline ListOutgoingTypedLinksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListOutgoingTypedLinksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The consistency level to execute the request at.</p>
     */
    inline const ConsistencyLevel& GetConsistencyLevel() const{ return m_consistencyLevel; }

    /**
     * <p>The consistency level to execute the request at.</p>
     */
    inline bool ConsistencyLevelHasBeenSet() const { return m_consistencyLevelHasBeenSet; }

    /**
     * <p>The consistency level to execute the request at.</p>
     */
    inline void SetConsistencyLevel(const ConsistencyLevel& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }

    /**
     * <p>The consistency level to execute the request at.</p>
     */
    inline void SetConsistencyLevel(ConsistencyLevel&& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = std::move(value); }

    /**
     * <p>The consistency level to execute the request at.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithConsistencyLevel(const ConsistencyLevel& value) { SetConsistencyLevel(value); return *this;}

    /**
     * <p>The consistency level to execute the request at.</p>
     */
    inline ListOutgoingTypedLinksRequest& WithConsistencyLevel(ConsistencyLevel&& value) { SetConsistencyLevel(std::move(value)); return *this;}

  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;

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

    ConsistencyLevel m_consistencyLevel;
    bool m_consistencyLevelHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
