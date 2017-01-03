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
   */
  class AWS_CLOUDFORMATION_API ListImportsRequest : public CloudFormationRequest
  {
  public:
    ListImportsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the exported output value. AWS CloudFormation returns the stack
     * names that are importing this value. </p>
     */
    inline const Aws::String& GetExportName() const{ return m_exportName; }

    /**
     * <p>The name of the exported output value. AWS CloudFormation returns the stack
     * names that are importing this value. </p>
     */
    inline void SetExportName(const Aws::String& value) { m_exportNameHasBeenSet = true; m_exportName = value; }

    /**
     * <p>The name of the exported output value. AWS CloudFormation returns the stack
     * names that are importing this value. </p>
     */
    inline void SetExportName(Aws::String&& value) { m_exportNameHasBeenSet = true; m_exportName = value; }

    /**
     * <p>The name of the exported output value. AWS CloudFormation returns the stack
     * names that are importing this value. </p>
     */
    inline void SetExportName(const char* value) { m_exportNameHasBeenSet = true; m_exportName.assign(value); }

    /**
     * <p>The name of the exported output value. AWS CloudFormation returns the stack
     * names that are importing this value. </p>
     */
    inline ListImportsRequest& WithExportName(const Aws::String& value) { SetExportName(value); return *this;}

    /**
     * <p>The name of the exported output value. AWS CloudFormation returns the stack
     * names that are importing this value. </p>
     */
    inline ListImportsRequest& WithExportName(Aws::String&& value) { SetExportName(value); return *this;}

    /**
     * <p>The name of the exported output value. AWS CloudFormation returns the stack
     * names that are importing this value. </p>
     */
    inline ListImportsRequest& WithExportName(const char* value) { SetExportName(value); return *this;}

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output value.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output value.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output value.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output value.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output value.
     * </p>
     */
    inline ListImportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output value.
     * </p>
     */
    inline ListImportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string (provided by the <a>ListImports</a> response output) that identifies
     * the next page of stacks that are importing the specified exported output value.
     * </p>
     */
    inline ListImportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_exportName;
    bool m_exportNameHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
