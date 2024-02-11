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
  class DescribeObservationRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeObservationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeObservation"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the observation.</p>
     */
    inline const Aws::String& GetObservationId() const{ return m_observationId; }

    /**
     * <p>The ID of the observation.</p>
     */
    inline bool ObservationIdHasBeenSet() const { return m_observationIdHasBeenSet; }

    /**
     * <p>The ID of the observation.</p>
     */
    inline void SetObservationId(const Aws::String& value) { m_observationIdHasBeenSet = true; m_observationId = value; }

    /**
     * <p>The ID of the observation.</p>
     */
    inline void SetObservationId(Aws::String&& value) { m_observationIdHasBeenSet = true; m_observationId = std::move(value); }

    /**
     * <p>The ID of the observation.</p>
     */
    inline void SetObservationId(const char* value) { m_observationIdHasBeenSet = true; m_observationId.assign(value); }

    /**
     * <p>The ID of the observation.</p>
     */
    inline DescribeObservationRequest& WithObservationId(const Aws::String& value) { SetObservationId(value); return *this;}

    /**
     * <p>The ID of the observation.</p>
     */
    inline DescribeObservationRequest& WithObservationId(Aws::String&& value) { SetObservationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the observation.</p>
     */
    inline DescribeObservationRequest& WithObservationId(const char* value) { SetObservationId(value); return *this;}


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
    inline DescribeObservationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline DescribeObservationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline DescribeObservationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_observationId;
    bool m_observationIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
