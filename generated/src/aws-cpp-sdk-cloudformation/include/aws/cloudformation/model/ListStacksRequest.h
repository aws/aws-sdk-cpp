/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for <a>ListStacks</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStacksInput">AWS
   * API Reference</a></p>
   */
  class ListStacksRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListStacksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStacks"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A string that identifies the next page of stacks that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListStacksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStacksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStacksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stack status to use as a filter. Specify one or more stack status codes to
     * list only stacks with the specified status codes. For a complete list of stack
     * status codes, see the <code>StackStatus</code> parameter of the <a>Stack</a>
     * data type.</p>
     */
    inline const Aws::Vector<StackStatus>& GetStackStatusFilter() const{ return m_stackStatusFilter; }
    inline bool StackStatusFilterHasBeenSet() const { return m_stackStatusFilterHasBeenSet; }
    inline void SetStackStatusFilter(const Aws::Vector<StackStatus>& value) { m_stackStatusFilterHasBeenSet = true; m_stackStatusFilter = value; }
    inline void SetStackStatusFilter(Aws::Vector<StackStatus>&& value) { m_stackStatusFilterHasBeenSet = true; m_stackStatusFilter = std::move(value); }
    inline ListStacksRequest& WithStackStatusFilter(const Aws::Vector<StackStatus>& value) { SetStackStatusFilter(value); return *this;}
    inline ListStacksRequest& WithStackStatusFilter(Aws::Vector<StackStatus>&& value) { SetStackStatusFilter(std::move(value)); return *this;}
    inline ListStacksRequest& AddStackStatusFilter(const StackStatus& value) { m_stackStatusFilterHasBeenSet = true; m_stackStatusFilter.push_back(value); return *this; }
    inline ListStacksRequest& AddStackStatusFilter(StackStatus&& value) { m_stackStatusFilterHasBeenSet = true; m_stackStatusFilter.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<StackStatus> m_stackStatusFilter;
    bool m_stackStatusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
