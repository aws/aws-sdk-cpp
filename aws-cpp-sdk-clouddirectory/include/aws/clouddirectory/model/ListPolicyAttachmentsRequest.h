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
  class AWS_CLOUDDIRECTORY_API ListPolicyAttachmentsRequest : public CloudDirectoryRequest
  {
  public:
    ListPolicyAttachmentsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ARN associated with the <a>Directory</a> where objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>ARN associated with the <a>Directory</a> where objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a> where objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }

    /**
     * <p>ARN associated with the <a>Directory</a> where objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }

    /**
     * <p>ARN associated with the <a>Directory</a> where objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline ListPolicyAttachmentsRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> where objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline ListPolicyAttachmentsRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>ARN associated with the <a>Directory</a> where objects reside. For more
     * information, see <a>arns</a>.</p>
     */
    inline ListPolicyAttachmentsRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline const ObjectReference& GetPolicyReference() const{ return m_policyReference; }

    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline void SetPolicyReference(const ObjectReference& value) { m_policyReferenceHasBeenSet = true; m_policyReference = value; }

    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline void SetPolicyReference(ObjectReference&& value) { m_policyReferenceHasBeenSet = true; m_policyReference = value; }

    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline ListPolicyAttachmentsRequest& WithPolicyReference(const ObjectReference& value) { SetPolicyReference(value); return *this;}

    /**
     * <p>Reference that identifies the policy object.</p>
     */
    inline ListPolicyAttachmentsRequest& WithPolicyReference(ObjectReference&& value) { SetPolicyReference(value); return *this;}

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
    inline ListPolicyAttachmentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListPolicyAttachmentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListPolicyAttachmentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>Maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline ListPolicyAttachmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline const ConsistencyLevel& GetConsistencyLevel() const{ return m_consistencyLevel; }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline void SetConsistencyLevel(const ConsistencyLevel& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline void SetConsistencyLevel(ConsistencyLevel&& value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline ListPolicyAttachmentsRequest& WithConsistencyLevel(const ConsistencyLevel& value) { SetConsistencyLevel(value); return *this;}

    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline ListPolicyAttachmentsRequest& WithConsistencyLevel(ConsistencyLevel&& value) { SetConsistencyLevel(value); return *this;}

  private:
    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet;
    ObjectReference m_policyReference;
    bool m_policyReferenceHasBeenSet;
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
