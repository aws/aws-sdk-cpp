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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <a>ListRuleNamesByTarget</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRuleNamesByTargetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API ListRuleNamesByTargetRequest : public CloudWatchEventsRequest
  {
  public:
    ListRuleNamesByTargetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the target resource that you want to list
     * the rules for.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target resource that you want to list
     * the rules for.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target resource that you want to list
     * the rules for.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target resource that you want to list
     * the rules for.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target resource that you want to list
     * the rules for.</p>
     */
    inline ListRuleNamesByTargetRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target resource that you want to list
     * the rules for.</p>
     */
    inline ListRuleNamesByTargetRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target resource that you want to list
     * the rules for.</p>
     */
    inline ListRuleNamesByTargetRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline ListRuleNamesByTargetRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline ListRuleNamesByTargetRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline ListRuleNamesByTargetRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline ListRuleNamesByTargetRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
