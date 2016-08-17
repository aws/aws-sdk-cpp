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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
    inline void SetStackIds(const Aws::Vector<Aws::String>& value) { m_stackIdsHasBeenSet = true; m_stackIds = value; }

    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, <code>DescribeStacks</code> returns a description of every
     * stack.</p>
     */
    inline void SetStackIds(Aws::Vector<Aws::String>&& value) { m_stackIdsHasBeenSet = true; m_stackIds = value; }

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
    inline DescribeStacksRequest& WithStackIds(Aws::Vector<Aws::String>&& value) { SetStackIds(value); return *this;}

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
    inline DescribeStacksRequest& AddStackIds(Aws::String&& value) { m_stackIdsHasBeenSet = true; m_stackIds.push_back(value); return *this; }

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
