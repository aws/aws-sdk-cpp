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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackStatus.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for <a>ListStacks</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API ListStacksRequest : public CloudFormationRequest
  {
  public:
    ListStacksRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A string that identifies the next page of stacks that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string that identifies the next page of stacks that you want to
     * retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string that identifies the next page of stacks that you want to
     * retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string that identifies the next page of stacks that you want to
     * retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string that identifies the next page of stacks that you want to
     * retrieve.</p>
     */
    inline ListStacksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string that identifies the next page of stacks that you want to
     * retrieve.</p>
     */
    inline ListStacksRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string that identifies the next page of stacks that you want to
     * retrieve.</p>
     */
    inline ListStacksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>Stack status to use as a filter. Specify one or more stack status codes to
     * list only stacks with the specified status codes. For a complete list of stack
     * status codes, see the <code>StackStatus</code> parameter of the <a>Stack</a>
     * data type.</p>
     */
    inline const Aws::Vector<StackStatus>& GetStackStatusFilter() const{ return m_stackStatusFilter; }

    /**
     * <p>Stack status to use as a filter. Specify one or more stack status codes to
     * list only stacks with the specified status codes. For a complete list of stack
     * status codes, see the <code>StackStatus</code> parameter of the <a>Stack</a>
     * data type.</p>
     */
    inline void SetStackStatusFilter(const Aws::Vector<StackStatus>& value) { m_stackStatusFilterHasBeenSet = true; m_stackStatusFilter = value; }

    /**
     * <p>Stack status to use as a filter. Specify one or more stack status codes to
     * list only stacks with the specified status codes. For a complete list of stack
     * status codes, see the <code>StackStatus</code> parameter of the <a>Stack</a>
     * data type.</p>
     */
    inline void SetStackStatusFilter(Aws::Vector<StackStatus>&& value) { m_stackStatusFilterHasBeenSet = true; m_stackStatusFilter = value; }

    /**
     * <p>Stack status to use as a filter. Specify one or more stack status codes to
     * list only stacks with the specified status codes. For a complete list of stack
     * status codes, see the <code>StackStatus</code> parameter of the <a>Stack</a>
     * data type.</p>
     */
    inline ListStacksRequest& WithStackStatusFilter(const Aws::Vector<StackStatus>& value) { SetStackStatusFilter(value); return *this;}

    /**
     * <p>Stack status to use as a filter. Specify one or more stack status codes to
     * list only stacks with the specified status codes. For a complete list of stack
     * status codes, see the <code>StackStatus</code> parameter of the <a>Stack</a>
     * data type.</p>
     */
    inline ListStacksRequest& WithStackStatusFilter(Aws::Vector<StackStatus>&& value) { SetStackStatusFilter(value); return *this;}

    /**
     * <p>Stack status to use as a filter. Specify one or more stack status codes to
     * list only stacks with the specified status codes. For a complete list of stack
     * status codes, see the <code>StackStatus</code> parameter of the <a>Stack</a>
     * data type.</p>
     */
    inline ListStacksRequest& AddStackStatusFilter(const StackStatus& value) { m_stackStatusFilterHasBeenSet = true; m_stackStatusFilter.push_back(value); return *this; }

    /**
     * <p>Stack status to use as a filter. Specify one or more stack status codes to
     * list only stacks with the specified status codes. For a complete list of stack
     * status codes, see the <code>StackStatus</code> parameter of the <a>Stack</a>
     * data type.</p>
     */
    inline ListStacksRequest& AddStackStatusFilter(StackStatus&& value) { m_stackStatusFilterHasBeenSet = true; m_stackStatusFilter.push_back(value); return *this; }

  private:
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    Aws::Vector<StackStatus> m_stackStatusFilter;
    bool m_stackStatusFilterHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
