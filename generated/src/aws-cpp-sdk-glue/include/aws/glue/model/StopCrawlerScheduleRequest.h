﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class StopCrawlerScheduleRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API StopCrawlerScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopCrawlerSchedule"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the crawler whose schedule state to set.</p>
     */
    inline const Aws::String& GetCrawlerName() const { return m_crawlerName; }
    inline bool CrawlerNameHasBeenSet() const { return m_crawlerNameHasBeenSet; }
    template<typename CrawlerNameT = Aws::String>
    void SetCrawlerName(CrawlerNameT&& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = std::forward<CrawlerNameT>(value); }
    template<typename CrawlerNameT = Aws::String>
    StopCrawlerScheduleRequest& WithCrawlerName(CrawlerNameT&& value) { SetCrawlerName(std::forward<CrawlerNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_crawlerName;
    bool m_crawlerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
