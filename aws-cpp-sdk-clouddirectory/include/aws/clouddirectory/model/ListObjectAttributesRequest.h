﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/ConsistencyLevel.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API ListObjectAttributesRequest : public CloudDirectoryRequest
  {
  public:
    ListObjectAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListObjectAttributes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline ListObjectAttributesRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline ListObjectAttributesRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline ListObjectAttributesRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


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
    inline ListObjectAttributesRequest& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>The reference that identifies the object whose attributes will be listed.</p>
     */
    inline ListObjectAttributesRequest& WithObjectReference(ObjectReference&& value) { SetObjectReference(std::move(value)); return *this;}


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
    inline ListObjectAttributesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectAttributesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectAttributesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline ListObjectAttributesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline const ConsistencyLevel& GetConsistencyLevel() const{ return m_consistencyLevel; }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline bool ConsistencyLevelHasBeenSet() const { return m_consistencyLevelHasBeenSet; }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline void SetConsistencyLevel(const ConsistencyLevel& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline void SetConsistencyLevel(ConsistencyLevel&& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = std::move(value); }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline ListObjectAttributesRequest& WithConsistencyLevel(const ConsistencyLevel& value) { SetConsistencyLevel(value); return *this;}

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline ListObjectAttributesRequest& WithConsistencyLevel(ConsistencyLevel&& value) { SetConsistencyLevel(std::move(value)); return *this;}


    /**
     * <p>Used to filter the list of object attributes that are associated with a
     * certain facet.</p>
     */
    inline const SchemaFacet& GetFacetFilter() const{ return m_facetFilter; }

    /**
     * <p>Used to filter the list of object attributes that are associated with a
     * certain facet.</p>
     */
    inline bool FacetFilterHasBeenSet() const { return m_facetFilterHasBeenSet; }

    /**
     * <p>Used to filter the list of object attributes that are associated with a
     * certain facet.</p>
     */
    inline void SetFacetFilter(const SchemaFacet& value) { m_facetFilterHasBeenSet = true; m_facetFilter = value; }

    /**
     * <p>Used to filter the list of object attributes that are associated with a
     * certain facet.</p>
     */
    inline void SetFacetFilter(SchemaFacet&& value) { m_facetFilterHasBeenSet = true; m_facetFilter = std::move(value); }

    /**
     * <p>Used to filter the list of object attributes that are associated with a
     * certain facet.</p>
     */
    inline ListObjectAttributesRequest& WithFacetFilter(const SchemaFacet& value) { SetFacetFilter(value); return *this;}

    /**
     * <p>Used to filter the list of object attributes that are associated with a
     * certain facet.</p>
     */
    inline ListObjectAttributesRequest& WithFacetFilter(SchemaFacet&& value) { SetFacetFilter(std::move(value)); return *this;}

  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    ConsistencyLevel m_consistencyLevel;
    bool m_consistencyLevelHasBeenSet;

    SchemaFacet m_facetFilter;
    bool m_facetFilterHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
