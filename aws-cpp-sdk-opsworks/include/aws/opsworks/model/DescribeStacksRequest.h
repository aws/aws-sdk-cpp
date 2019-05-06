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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API DescribeStacksRequest : public OpsWorksRequest
  {
  public:
    DescribeStacksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStacks"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, <code>DescribeStacks</code> returns a description of every
     * stack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackIds() const{ return m_stackIds; }

    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, <code>DescribeStacks</code> returns a description of every
     * stack.</p>
     */
    inline bool StackIdsHasBeenSet() const { return m_stackIdsHasBeenSet; }

    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, <code>DescribeStacks</code> returns a description of every
     * stack.</p>
     */
    inline void SetStackIds(const Aws::Vector<Aws::String>& value) { m_stackIdsHasBeenSet = true; m_stackIds = value; }

    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, <code>DescribeStacks</code> returns a description of every
     * stack.</p>
     */
    inline void SetStackIds(Aws::Vector<Aws::String>&& value) { m_stackIdsHasBeenSet = true; m_stackIds = std::move(value); }

    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, <code>DescribeStacks</code> returns a description of every
     * stack.</p>
     */
    inline DescribeStacksRequest& WithStackIds(const Aws::Vector<Aws::String>& value) { SetStackIds(value); return *this;}

    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, <code>DescribeStacks</code> returns a description of every
     * stack.</p>
     */
    inline DescribeStacksRequest& WithStackIds(Aws::Vector<Aws::String>&& value) { SetStackIds(std::move(value)); return *this;}

    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, <code>DescribeStacks</code> returns a description of every
     * stack.</p>
     */
    inline DescribeStacksRequest& AddStackIds(const Aws::String& value) { m_stackIdsHasBeenSet = true; m_stackIds.push_back(value); return *this; }

    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, <code>DescribeStacks</code> returns a description of every
     * stack.</p>
     */
    inline DescribeStacksRequest& AddStackIds(Aws::String&& value) { m_stackIdsHasBeenSet = true; m_stackIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, <code>DescribeStacks</code> returns a description of every
     * stack.</p>
     */
    inline DescribeStacksRequest& AddStackIds(const char* value) { m_stackIdsHasBeenSet = true; m_stackIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_stackIds;
    bool m_stackIdsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
