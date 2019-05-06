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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackResourceDriftStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFORMATION_API DescribeStackResourceDriftsRequest : public CloudFormationRequest
  {
  public:
    DescribeStackResourceDriftsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStackResourceDrifts"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the stack for which you want drift information.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack for which you want drift information.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the stack for which you want drift information.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack for which you want drift information.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack for which you want drift information.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack for which you want drift information.</p>
     */
    inline DescribeStackResourceDriftsRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack for which you want drift information.</p>
     */
    inline DescribeStackResourceDriftsRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack for which you want drift information.</p>
     */
    inline DescribeStackResourceDriftsRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The resource drift status values to use as filters for the resource drift
     * results returned.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs
     * from its expected template configuration in that the resource has been
     * deleted.</p> </li> <li> <p> <code>MODIFIED</code>: One or more resource
     * properties differ from their expected template values.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The resources's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS
     * CloudFormation does not currently return this value.</p> </li> </ul>
     */
    inline const Aws::Vector<StackResourceDriftStatus>& GetStackResourceDriftStatusFilters() const{ return m_stackResourceDriftStatusFilters; }

    /**
     * <p>The resource drift status values to use as filters for the resource drift
     * results returned.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs
     * from its expected template configuration in that the resource has been
     * deleted.</p> </li> <li> <p> <code>MODIFIED</code>: One or more resource
     * properties differ from their expected template values.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The resources's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS
     * CloudFormation does not currently return this value.</p> </li> </ul>
     */
    inline bool StackResourceDriftStatusFiltersHasBeenSet() const { return m_stackResourceDriftStatusFiltersHasBeenSet; }

    /**
     * <p>The resource drift status values to use as filters for the resource drift
     * results returned.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs
     * from its expected template configuration in that the resource has been
     * deleted.</p> </li> <li> <p> <code>MODIFIED</code>: One or more resource
     * properties differ from their expected template values.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The resources's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS
     * CloudFormation does not currently return this value.</p> </li> </ul>
     */
    inline void SetStackResourceDriftStatusFilters(const Aws::Vector<StackResourceDriftStatus>& value) { m_stackResourceDriftStatusFiltersHasBeenSet = true; m_stackResourceDriftStatusFilters = value; }

    /**
     * <p>The resource drift status values to use as filters for the resource drift
     * results returned.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs
     * from its expected template configuration in that the resource has been
     * deleted.</p> </li> <li> <p> <code>MODIFIED</code>: One or more resource
     * properties differ from their expected template values.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The resources's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS
     * CloudFormation does not currently return this value.</p> </li> </ul>
     */
    inline void SetStackResourceDriftStatusFilters(Aws::Vector<StackResourceDriftStatus>&& value) { m_stackResourceDriftStatusFiltersHasBeenSet = true; m_stackResourceDriftStatusFilters = std::move(value); }

    /**
     * <p>The resource drift status values to use as filters for the resource drift
     * results returned.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs
     * from its expected template configuration in that the resource has been
     * deleted.</p> </li> <li> <p> <code>MODIFIED</code>: One or more resource
     * properties differ from their expected template values.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The resources's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS
     * CloudFormation does not currently return this value.</p> </li> </ul>
     */
    inline DescribeStackResourceDriftsRequest& WithStackResourceDriftStatusFilters(const Aws::Vector<StackResourceDriftStatus>& value) { SetStackResourceDriftStatusFilters(value); return *this;}

    /**
     * <p>The resource drift status values to use as filters for the resource drift
     * results returned.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs
     * from its expected template configuration in that the resource has been
     * deleted.</p> </li> <li> <p> <code>MODIFIED</code>: One or more resource
     * properties differ from their expected template values.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The resources's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS
     * CloudFormation does not currently return this value.</p> </li> </ul>
     */
    inline DescribeStackResourceDriftsRequest& WithStackResourceDriftStatusFilters(Aws::Vector<StackResourceDriftStatus>&& value) { SetStackResourceDriftStatusFilters(std::move(value)); return *this;}

    /**
     * <p>The resource drift status values to use as filters for the resource drift
     * results returned.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs
     * from its expected template configuration in that the resource has been
     * deleted.</p> </li> <li> <p> <code>MODIFIED</code>: One or more resource
     * properties differ from their expected template values.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The resources's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS
     * CloudFormation does not currently return this value.</p> </li> </ul>
     */
    inline DescribeStackResourceDriftsRequest& AddStackResourceDriftStatusFilters(const StackResourceDriftStatus& value) { m_stackResourceDriftStatusFiltersHasBeenSet = true; m_stackResourceDriftStatusFilters.push_back(value); return *this; }

    /**
     * <p>The resource drift status values to use as filters for the resource drift
     * results returned.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs
     * from its expected template configuration in that the resource has been
     * deleted.</p> </li> <li> <p> <code>MODIFIED</code>: One or more resource
     * properties differ from their expected template values.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The resources's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS
     * CloudFormation does not currently return this value.</p> </li> </ul>
     */
    inline DescribeStackResourceDriftsRequest& AddStackResourceDriftStatusFilters(StackResourceDriftStatus&& value) { m_stackResourceDriftStatusFiltersHasBeenSet = true; m_stackResourceDriftStatusFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>A string that identifies the next page of stack resource drift results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string that identifies the next page of stack resource drift results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A string that identifies the next page of stack resource drift results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string that identifies the next page of stack resource drift results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A string that identifies the next page of stack resource drift results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string that identifies the next page of stack resource drift results.</p>
     */
    inline DescribeStackResourceDriftsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string that identifies the next page of stack resource drift results.</p>
     */
    inline DescribeStackResourceDriftsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string that identifies the next page of stack resource drift results.</p>
     */
    inline DescribeStackResourceDriftsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline DescribeStackResourceDriftsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;

    Aws::Vector<StackResourceDriftStatus> m_stackResourceDriftStatusFilters;
    bool m_stackResourceDriftStatusFiltersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
