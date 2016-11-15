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

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFORMATION_API ListExportsRequest : public CloudFormationRequest
  {
  public:
    ListExportsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline ListExportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline ListExportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline ListExportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
