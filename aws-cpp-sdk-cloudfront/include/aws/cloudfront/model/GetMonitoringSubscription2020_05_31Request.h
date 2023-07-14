﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFRONT_API GetMonitoringSubscription2020_05_31Request : public CloudFrontRequest
  {
  public:
    GetMonitoringSubscription2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMonitoringSubscription"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the distribution that you are getting metrics information for.</p>
     */
    inline const Aws::String& GetDistributionId() const{ return m_distributionId; }

    /**
     * <p>The ID of the distribution that you are getting metrics information for.</p>
     */
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }

    /**
     * <p>The ID of the distribution that you are getting metrics information for.</p>
     */
    inline void SetDistributionId(const Aws::String& value) { m_distributionIdHasBeenSet = true; m_distributionId = value; }

    /**
     * <p>The ID of the distribution that you are getting metrics information for.</p>
     */
    inline void SetDistributionId(Aws::String&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::move(value); }

    /**
     * <p>The ID of the distribution that you are getting metrics information for.</p>
     */
    inline void SetDistributionId(const char* value) { m_distributionIdHasBeenSet = true; m_distributionId.assign(value); }

    /**
     * <p>The ID of the distribution that you are getting metrics information for.</p>
     */
    inline GetMonitoringSubscription2020_05_31Request& WithDistributionId(const Aws::String& value) { SetDistributionId(value); return *this;}

    /**
     * <p>The ID of the distribution that you are getting metrics information for.</p>
     */
    inline GetMonitoringSubscription2020_05_31Request& WithDistributionId(Aws::String&& value) { SetDistributionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the distribution that you are getting metrics information for.</p>
     */
    inline GetMonitoringSubscription2020_05_31Request& WithDistributionId(const char* value) { SetDistributionId(value); return *this;}

  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
