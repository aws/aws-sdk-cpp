﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DescribeScraper</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeScraperRequest">AWS
   * API Reference</a></p>
   */
  class DescribeScraperRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeScraperRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScraper"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the scraper to describe.</p>
     */
    inline const Aws::String& GetScraperId() const{ return m_scraperId; }
    inline bool ScraperIdHasBeenSet() const { return m_scraperIdHasBeenSet; }
    inline void SetScraperId(const Aws::String& value) { m_scraperIdHasBeenSet = true; m_scraperId = value; }
    inline void SetScraperId(Aws::String&& value) { m_scraperIdHasBeenSet = true; m_scraperId = std::move(value); }
    inline void SetScraperId(const char* value) { m_scraperIdHasBeenSet = true; m_scraperId.assign(value); }
    inline DescribeScraperRequest& WithScraperId(const Aws::String& value) { SetScraperId(value); return *this;}
    inline DescribeScraperRequest& WithScraperId(Aws::String&& value) { SetScraperId(std::move(value)); return *this;}
    inline DescribeScraperRequest& WithScraperId(const char* value) { SetScraperId(value); return *this;}
    ///@}
  private:

    Aws::String m_scraperId;
    bool m_scraperIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
