/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_GLUE_API StartCrawlerScheduleRequest : public GlueRequest
  {
  public:
    StartCrawlerScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCrawlerSchedule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the crawler to schedule.</p>
     */
    inline const Aws::String& GetCrawlerName() const{ return m_crawlerName; }

    /**
     * <p>Name of the crawler to schedule.</p>
     */
    inline bool CrawlerNameHasBeenSet() const { return m_crawlerNameHasBeenSet; }

    /**
     * <p>Name of the crawler to schedule.</p>
     */
    inline void SetCrawlerName(const Aws::String& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = value; }

    /**
     * <p>Name of the crawler to schedule.</p>
     */
    inline void SetCrawlerName(Aws::String&& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = std::move(value); }

    /**
     * <p>Name of the crawler to schedule.</p>
     */
    inline void SetCrawlerName(const char* value) { m_crawlerNameHasBeenSet = true; m_crawlerName.assign(value); }

    /**
     * <p>Name of the crawler to schedule.</p>
     */
    inline StartCrawlerScheduleRequest& WithCrawlerName(const Aws::String& value) { SetCrawlerName(value); return *this;}

    /**
     * <p>Name of the crawler to schedule.</p>
     */
    inline StartCrawlerScheduleRequest& WithCrawlerName(Aws::String&& value) { SetCrawlerName(std::move(value)); return *this;}

    /**
     * <p>Name of the crawler to schedule.</p>
     */
    inline StartCrawlerScheduleRequest& WithCrawlerName(const char* value) { SetCrawlerName(value); return *this;}

  private:

    Aws::String m_crawlerName;
    bool m_crawlerNameHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
