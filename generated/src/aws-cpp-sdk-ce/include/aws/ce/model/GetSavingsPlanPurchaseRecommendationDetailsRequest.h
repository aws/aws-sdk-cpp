/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetSavingsPlanPurchaseRecommendationDetailsRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlanPurchaseRecommendationDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSavingsPlanPurchaseRecommendationDetails"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline const Aws::String& GetRecommendationDetailId() const{ return m_recommendationDetailId; }

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline bool RecommendationDetailIdHasBeenSet() const { return m_recommendationDetailIdHasBeenSet; }

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline void SetRecommendationDetailId(const Aws::String& value) { m_recommendationDetailIdHasBeenSet = true; m_recommendationDetailId = value; }

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline void SetRecommendationDetailId(Aws::String&& value) { m_recommendationDetailIdHasBeenSet = true; m_recommendationDetailId = std::move(value); }

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline void SetRecommendationDetailId(const char* value) { m_recommendationDetailIdHasBeenSet = true; m_recommendationDetailId.assign(value); }

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline GetSavingsPlanPurchaseRecommendationDetailsRequest& WithRecommendationDetailId(const Aws::String& value) { SetRecommendationDetailId(value); return *this;}

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline GetSavingsPlanPurchaseRecommendationDetailsRequest& WithRecommendationDetailId(Aws::String&& value) { SetRecommendationDetailId(std::move(value)); return *this;}

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline GetSavingsPlanPurchaseRecommendationDetailsRequest& WithRecommendationDetailId(const char* value) { SetRecommendationDetailId(value); return *this;}

  private:

    Aws::String m_recommendationDetailId;
    bool m_recommendationDetailIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
