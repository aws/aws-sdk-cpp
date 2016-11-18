﻿/*
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

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>ListChangeSets</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API ListChangeSetsRequest : public CloudFormationRequest
  {
  public:
    ListChangeSetsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the stack for which you want to
     * list change sets.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the stack for which you want to
     * list change sets.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the stack for which you want to
     * list change sets.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the stack for which you want to
     * list change sets.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the stack for which you want to
     * list change sets.</p>
     */
    inline ListChangeSetsRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the stack for which you want to
     * list change sets.</p>
     */
    inline ListChangeSetsRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the stack for which you want to
     * list change sets.</p>
     */
    inline ListChangeSetsRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>A string (provided by the <a>ListChangeSets</a> response output) that
     * identifies the next page of change sets that you want to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string (provided by the <a>ListChangeSets</a> response output) that
     * identifies the next page of change sets that you want to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string (provided by the <a>ListChangeSets</a> response output) that
     * identifies the next page of change sets that you want to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string (provided by the <a>ListChangeSets</a> response output) that
     * identifies the next page of change sets that you want to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string (provided by the <a>ListChangeSets</a> response output) that
     * identifies the next page of change sets that you want to retrieve.</p>
     */
    inline ListChangeSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string (provided by the <a>ListChangeSets</a> response output) that
     * identifies the next page of change sets that you want to retrieve.</p>
     */
    inline ListChangeSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string (provided by the <a>ListChangeSets</a> response output) that
     * identifies the next page of change sets that you want to retrieve.</p>
     */
    inline ListChangeSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
