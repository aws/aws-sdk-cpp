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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/AssociationExecutionTargetsFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeAssociationExecutionTargetsRequest : public SSMRequest
  {
  public:
    DescribeAssociationExecutionTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssociationExecutionTargets"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The association ID that includes the execution for which you want to view
     * details.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID that includes the execution for which you want to view
     * details.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The association ID that includes the execution for which you want to view
     * details.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID that includes the execution for which you want to view
     * details.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID that includes the execution for which you want to view
     * details.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID that includes the execution for which you want to view
     * details.</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID that includes the execution for which you want to view
     * details.</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID that includes the execution for which you want to view
     * details.</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The execution ID for which you want to view details.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The execution ID for which you want to view details.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>The execution ID for which you want to view details.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>The execution ID for which you want to view details.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>The execution ID for which you want to view details.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>The execution ID for which you want to view details.</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The execution ID for which you want to view details.</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution ID for which you want to view details.</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>Filters for the request. You can specify the following filters and
     * values.</p> <p>Status (EQUAL)</p> <p>ResourceId (EQUAL)</p> <p>ResourceType
     * (EQUAL)</p>
     */
    inline const Aws::Vector<AssociationExecutionTargetsFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters for the request. You can specify the following filters and
     * values.</p> <p>Status (EQUAL)</p> <p>ResourceId (EQUAL)</p> <p>ResourceType
     * (EQUAL)</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters for the request. You can specify the following filters and
     * values.</p> <p>Status (EQUAL)</p> <p>ResourceId (EQUAL)</p> <p>ResourceType
     * (EQUAL)</p>
     */
    inline void SetFilters(const Aws::Vector<AssociationExecutionTargetsFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters for the request. You can specify the following filters and
     * values.</p> <p>Status (EQUAL)</p> <p>ResourceId (EQUAL)</p> <p>ResourceType
     * (EQUAL)</p>
     */
    inline void SetFilters(Aws::Vector<AssociationExecutionTargetsFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters for the request. You can specify the following filters and
     * values.</p> <p>Status (EQUAL)</p> <p>ResourceId (EQUAL)</p> <p>ResourceType
     * (EQUAL)</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithFilters(const Aws::Vector<AssociationExecutionTargetsFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters for the request. You can specify the following filters and
     * values.</p> <p>Status (EQUAL)</p> <p>ResourceId (EQUAL)</p> <p>ResourceType
     * (EQUAL)</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithFilters(Aws::Vector<AssociationExecutionTargetsFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters for the request. You can specify the following filters and
     * values.</p> <p>Status (EQUAL)</p> <p>ResourceId (EQUAL)</p> <p>ResourceType
     * (EQUAL)</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& AddFilters(const AssociationExecutionTargetsFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters for the request. You can specify the following filters and
     * values.</p> <p>Status (EQUAL)</p> <p>ResourceId (EQUAL)</p> <p>ResourceType
     * (EQUAL)</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& AddFilters(AssociationExecutionTargetsFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline DescribeAssociationExecutionTargetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet;

    Aws::Vector<AssociationExecutionTargetsFilter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
