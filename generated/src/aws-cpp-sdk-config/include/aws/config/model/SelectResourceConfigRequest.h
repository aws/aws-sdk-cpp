﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class SelectResourceConfigRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API SelectResourceConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SelectResourceConfig"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The SQL query <code>SELECT</code> command.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline SelectResourceConfigRequest& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline SelectResourceConfigRequest& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline SelectResourceConfigRequest& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of query results returned on each page. </p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline SelectResourceConfigRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SelectResourceConfigRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SelectResourceConfigRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SelectResourceConfigRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
