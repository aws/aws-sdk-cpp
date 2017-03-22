/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/model/ConsistencyLevel.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API ListAttachedIndicesRequest : public CloudDirectoryRequest
  {
  public:
    ListAttachedIndicesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the directory.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN of the directory.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>The ARN of the directory.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>The ARN of the directory.</p>
     */
    inline ListAttachedIndicesRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory.</p>
     */
    inline ListAttachedIndicesRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN of the directory.</p>
     */
    inline ListAttachedIndicesRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>A reference to the object to that has indices attached.</p>
     */
    inline const ObjectReference& GetTargetReference() const{ return m_targetReference; }

    /**
     * <p>A reference to the object to that has indices attached.</p>
     */
    inline void SetTargetReference(const ObjectReference& value) { m_targetReferenceHasBeenSet = true; m_targetReference = value; }

    /**
     * <p>A reference to the object to that has indices attached.</p>
     */
    inline void SetTargetReference(ObjectReference&& value) { m_targetReferenceHasBeenSet = true; m_targetReference = value; }

    /**
     * <p>A reference to the object to that has indices attached.</p>
     */
    inline ListAttachedIndicesRequest& WithTargetReference(const ObjectReference& value) { SetTargetReference(value); return *this;}

    /**
     * <p>A reference to the object to that has indices attached.</p>
     */
    inline ListAttachedIndicesRequest& WithTargetReference(ObjectReference&& value) { SetTargetReference(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListAttachedIndicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListAttachedIndicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListAttachedIndicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline ListAttachedIndicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>The consistency level to use for this operation.</p>
     */
    inline const ConsistencyLevel& GetConsistencyLevel() const{ return m_consistencyLevel; }

    /**
     * <p>The consistency level to use for this operation.</p>
     */
    inline void SetConsistencyLevel(const ConsistencyLevel& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }

    /**
     * <p>The consistency level to use for this operation.</p>
     */
    inline void SetConsistencyLevel(ConsistencyLevel&& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }

    /**
     * <p>The consistency level to use for this operation.</p>
     */
    inline ListAttachedIndicesRequest& WithConsistencyLevel(const ConsistencyLevel& value) { SetConsistencyLevel(value); return *this;}

    /**
     * <p>The consistency level to use for this operation.</p>
     */
    inline ListAttachedIndicesRequest& WithConsistencyLevel(ConsistencyLevel&& value) { SetConsistencyLevel(value); return *this;}

  private:
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
    ObjectReference m_targetReference;
    bool m_targetReferenceHasBeenSet;
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
