/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class DescribeProblemObservationsRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeProblemObservationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProblemObservations"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the problem.</p>
     */
    inline const Aws::String& GetProblemId() const{ return m_problemId; }

    /**
     * <p>The ID of the problem.</p>
     */
    inline bool ProblemIdHasBeenSet() const { return m_problemIdHasBeenSet; }

    /**
     * <p>The ID of the problem.</p>
     */
    inline void SetProblemId(const Aws::String& value) { m_problemIdHasBeenSet = true; m_problemId = value; }

    /**
     * <p>The ID of the problem.</p>
     */
    inline void SetProblemId(Aws::String&& value) { m_problemIdHasBeenSet = true; m_problemId = std::move(value); }

    /**
     * <p>The ID of the problem.</p>
     */
    inline void SetProblemId(const char* value) { m_problemIdHasBeenSet = true; m_problemId.assign(value); }

    /**
     * <p>The ID of the problem.</p>
     */
    inline DescribeProblemObservationsRequest& WithProblemId(const Aws::String& value) { SetProblemId(value); return *this;}

    /**
     * <p>The ID of the problem.</p>
     */
    inline DescribeProblemObservationsRequest& WithProblemId(Aws::String&& value) { SetProblemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the problem.</p>
     */
    inline DescribeProblemObservationsRequest& WithProblemId(const char* value) { SetProblemId(value); return *this;}


    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline DescribeProblemObservationsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline DescribeProblemObservationsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline DescribeProblemObservationsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_problemId;
    bool m_problemIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
