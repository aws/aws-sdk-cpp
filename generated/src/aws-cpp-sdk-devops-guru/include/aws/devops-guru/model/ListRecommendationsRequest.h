/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/Locale.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class ListRecommendationsRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API ListRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecommendations"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The ID of the requested insight. </p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }
    inline ListRecommendationsRequest& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}
    inline ListRecommendationsRequest& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}
    inline ListRecommendationsRequest& WithInsightId(const char* value) { SetInsightId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A locale that specifies the language to use for recommendations.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline ListRecommendationsRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}
    inline ListRecommendationsRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ListRecommendationsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ListRecommendationsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ListRecommendationsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Locale m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
