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
  class AWS_CLOUDDIRECTORY_API ListIndexRequest : public CloudDirectoryRequest
  {
  public:
    ListIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIndex"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the directory that the index exists in.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN of the directory that the index exists in.</p>
     */
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }

    /**
     * <p>The ARN of the directory that the index exists in.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory that the index exists in.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }

    /**
     * <p>The ARN of the directory that the index exists in.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The ARN of the directory that the index exists in.</p>
     */
    inline ListIndexRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory that the index exists in.</p>
     */
    inline ListIndexRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the directory that the index exists in.</p>
     */
    inline ListIndexRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline const Aws::Vector<ObjectAttributeRange>& GetRangesOnIndexedValues() const{ return m_rangesOnIndexedValues; }

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline bool RangesOnIndexedValuesHasBeenSet() const { return m_rangesOnIndexedValuesHasBeenSet; }

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline void SetRangesOnIndexedValues(const Aws::Vector<ObjectAttributeRange>& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues = value; }

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline void SetRangesOnIndexedValues(Aws::Vector<ObjectAttributeRange>&& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues = std::move(value); }

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline ListIndexRequest& WithRangesOnIndexedValues(const Aws::Vector<ObjectAttributeRange>& value) { SetRangesOnIndexedValues(value); return *this;}

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline ListIndexRequest& WithRangesOnIndexedValues(Aws::Vector<ObjectAttributeRange>&& value) { SetRangesOnIndexedValues(std::move(value)); return *this;}

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline ListIndexRequest& AddRangesOnIndexedValues(const ObjectAttributeRange& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues.push_back(value); return *this; }

    /**
     * <p>Specifies the ranges of indexed values that you want to query.</p>
     */
    inline ListIndexRequest& AddRangesOnIndexedValues(ObjectAttributeRange&& value) { m_rangesOnIndexedValuesHasBeenSet = true; m_rangesOnIndexedValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The reference to the index to list.</p>
     */
    inline const ObjectReference& GetIndexReference() const{ return m_indexReference; }

    /**
     * <p>The reference to the index to list.</p>
     */
    inline bool IndexReferenceHasBeenSet() const { return m_indexReferenceHasBeenSet; }

    /**
     * <p>The reference to the index to list.</p>
     */
    inline void SetIndexReference(const ObjectReference& value) { m_indexReferenceHasBeenSet = true; m_indexReference = value; }

    /**
     * <p>The reference to the index to list.</p>
     */
    inline void SetIndexReference(ObjectReference&& value) { m_indexReferenceHasBeenSet = true; m_indexReference = std::move(value); }

    /**
     * <p>The reference to the index to list.</p>
     */
    inline ListIndexRequest& WithIndexReference(const ObjectReference& value) { SetIndexReference(value); return *this;}

    /**
     * <p>The reference to the index to list.</p>
     */
    inline ListIndexRequest& WithIndexReference(ObjectReference&& value) { SetIndexReference(std::move(value)); return *this;}


    /**
     * <p>The maximum number of objects in a single page to retrieve from the index
     * during a request. For more information, see <a
     * href="http://docs.aws.amazon.com/clouddirectory/latest/developerguide/limits.html">Amazon
     * Cloud Directory Limits</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects in a single page to retrieve from the index
     * during a request. For more information, see <a
     * href="http://docs.aws.amazon.com/clouddirectory/latest/developerguide/limits.html">Amazon
     * Cloud Directory Limits</a>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects in a single page to retrieve from the index
     * during a request. For more information, see <a
     * href="http://docs.aws.amazon.com/clouddirectory/latest/developerguide/limits.html">Amazon
     * Cloud Directory Limits</a>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects in a single page to retrieve from the index
     * during a request. For more information, see <a
     * href="http://docs.aws.amazon.com/clouddirectory/latest/developerguide/limits.html">Amazon
     * Cloud Directory Limits</a>.</p>
     */
    inline ListIndexRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListIndexRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListIndexRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListIndexRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListIndexRequest& WithConsistencyLevel(const ConsistencyLevel& value) { SetConsistencyLevel(value); return *this;}

    /**
     * <p>The consistency level to execute the request at.</p>
     */
    inline ListIndexRequest& WithConsistencyLevel(ConsistencyLevel&& value) { SetConsistencyLevel(std::move(value)); return *this;}

  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;

    Aws::Vector<ObjectAttributeRange> m_rangesOnIndexedValues;
    bool m_rangesOnIndexedValuesHasBeenSet;

    ObjectReference m_indexReference;
    bool m_indexReferenceHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    ConsistencyLevel m_consistencyLevel;
    bool m_consistencyLevelHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
