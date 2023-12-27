﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/IndicatorType.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class ListIndicatorsRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API ListIndicatorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIndicators"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline ListIndicatorsRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline ListIndicatorsRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline ListIndicatorsRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline const Aws::String& GetInvestigationId() const{ return m_investigationId; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline bool InvestigationIdHasBeenSet() const { return m_investigationIdHasBeenSet; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(const Aws::String& value) { m_investigationIdHasBeenSet = true; m_investigationId = value; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(Aws::String&& value) { m_investigationIdHasBeenSet = true; m_investigationId = std::move(value); }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(const char* value) { m_investigationIdHasBeenSet = true; m_investigationId.assign(value); }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline ListIndicatorsRequest& WithInvestigationId(const Aws::String& value) { SetInvestigationId(value); return *this;}

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline ListIndicatorsRequest& WithInvestigationId(Aws::String&& value) { SetInvestigationId(std::move(value)); return *this;}

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline ListIndicatorsRequest& WithInvestigationId(const char* value) { SetInvestigationId(value); return *this;}


    /**
     * <p>See <a
     * href="https://docs.aws.amazon.com/detective/latest/userguide/detective-investigations.html">Detective
     * investigations.</a>.</p>
     */
    inline const IndicatorType& GetIndicatorType() const{ return m_indicatorType; }

    /**
     * <p>See <a
     * href="https://docs.aws.amazon.com/detective/latest/userguide/detective-investigations.html">Detective
     * investigations.</a>.</p>
     */
    inline bool IndicatorTypeHasBeenSet() const { return m_indicatorTypeHasBeenSet; }

    /**
     * <p>See <a
     * href="https://docs.aws.amazon.com/detective/latest/userguide/detective-investigations.html">Detective
     * investigations.</a>.</p>
     */
    inline void SetIndicatorType(const IndicatorType& value) { m_indicatorTypeHasBeenSet = true; m_indicatorType = value; }

    /**
     * <p>See <a
     * href="https://docs.aws.amazon.com/detective/latest/userguide/detective-investigations.html">Detective
     * investigations.</a>.</p>
     */
    inline void SetIndicatorType(IndicatorType&& value) { m_indicatorTypeHasBeenSet = true; m_indicatorType = std::move(value); }

    /**
     * <p>See <a
     * href="https://docs.aws.amazon.com/detective/latest/userguide/detective-investigations.html">Detective
     * investigations.</a>.</p>
     */
    inline ListIndicatorsRequest& WithIndicatorType(const IndicatorType& value) { SetIndicatorType(value); return *this;}

    /**
     * <p>See <a
     * href="https://docs.aws.amazon.com/detective/latest/userguide/detective-investigations.html">Detective
     * investigations.</a>.</p>
     */
    inline ListIndicatorsRequest& WithIndicatorType(IndicatorType&& value) { SetIndicatorType(std::move(value)); return *this;}


    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline ListIndicatorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline ListIndicatorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline ListIndicatorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List the maximum number of indicators in a page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>List the maximum number of indicators in a page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>List the maximum number of indicators in a page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>List the maximum number of indicators in a page.</p>
     */
    inline ListIndicatorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_investigationId;
    bool m_investigationIdHasBeenSet = false;

    IndicatorType m_indicatorType;
    bool m_indicatorTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
