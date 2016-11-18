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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API ListRulesPackagesRequest : public InspectorRequest
  {
  public:
    ListRulesPackagesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRulesPackages</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRulesPackages</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRulesPackages</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRulesPackages</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRulesPackages</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline ListRulesPackagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRulesPackages</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline ListRulesPackagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRulesPackages</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline ListRulesPackagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline ListRulesPackagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
