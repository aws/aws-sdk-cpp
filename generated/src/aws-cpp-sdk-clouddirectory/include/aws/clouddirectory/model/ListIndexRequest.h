﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/ConsistencyLevel.h>
#include <aws/clouddirectory/model/ObjectAttributeRange.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class ListIndexRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API ListIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIndex"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the directory that the index exists in.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }
    inline ListIndexRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline ListIndexRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline ListIndexRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline const Aws::Vector<ObjectAttributeRange>& GetRangesOnIndexedValues() const{ return m_rangesOnIndexedValues; }
    inline bool RangesOnIndexedValuesHasBeenSet() const { return m_rangesOnIndexedValuesHasBeenSet; }
    inline void SetRangesOnIndexedValues(const Aws::Vector<ObjectAttributeRange>& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues = value; }
    inline void SetRangesOnIndexedValues(Aws::Vector<ObjectAttributeRange>&& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues = std::move(value); }
    inline ListIndexRequest& WithRangesOnIndexedValues(const Aws::Vector<ObjectAttributeRange>& value) { SetRangesOnIndexedValues(value); return *this;}
    inline ListIndexRequest& WithRangesOnIndexedValues(Aws::Vector<ObjectAttributeRange>&& value) { SetRangesOnIndexedValues(std::move(value)); return *this;}
    inline ListIndexRequest& AddRangesOnIndexedValues(const ObjectAttributeRange& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues.push_back(value); return *this; }
    inline ListIndexRequest& AddRangesOnIndexedValues(ObjectAttributeRange&& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reference to the index to list.</p>
     */
    inline const ObjectReference& GetIndexReference() const{ return m_indexReference; }
    inline bool IndexReferenceHasBeenSet() const { return m_indexReferenceHasBeenSet; }
    inline void SetIndexReference(const ObjectReference& value) { m_indexReferenceHasBeenSet = true; m_indexReference = value; }
    inline void SetIndexReference(ObjectReference&& value) { m_indexReferenceHasBeenSet = true; m_indexReference = std::move(value); }
    inline ListIndexRequest& WithIndexReference(const ObjectReference& value) { SetIndexReference(value); return *this;}
    inline ListIndexRequest& WithIndexReference(ObjectReference&& value) { SetIndexReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects in a single page to retrieve from the index
     * during a request. For more information, see <a
     * href="http://docs.aws.amazon.com/clouddirectory/latest/developerguide/limits.html">Amazon
     * Cloud Directory Limits</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListIndexRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListIndexRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIndexRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIndexRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The consistency level to execute the request at.</p>
     */
    inline const ConsistencyLevel& GetConsistencyLevel() const{ return m_consistencyLevel; }
    inline bool ConsistencyLevelHasBeenSet() const { return m_consistencyLevelHasBeenSet; }
    inline void SetConsistencyLevel(const ConsistencyLevel& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }
    inline void SetConsistencyLevel(ConsistencyLevel&& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = std::move(value); }
    inline ListIndexRequest& WithConsistencyLevel(const ConsistencyLevel& value) { SetConsistencyLevel(value); return *this;}
    inline ListIndexRequest& WithConsistencyLevel(ConsistencyLevel&& value) { SetConsistencyLevel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    Aws::Vector<ObjectAttributeRange> m_rangesOnIndexedValues;
    bool m_rangesOnIndexedValuesHasBeenSet = false;

    ObjectReference m_indexReference;
    bool m_indexReferenceHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ConsistencyLevel m_consistencyLevel;
    bool m_consistencyLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
