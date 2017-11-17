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
#include <aws/glue/model/Crawler.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetCrawlerResult
  {
  public:
    GetCrawlerResult();
    GetCrawlerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCrawlerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata for the specified crawler.</p>
     */
    inline const Crawler& GetCrawler() const{ return m_crawler; }

    /**
     * <p>The metadata for the specified crawler.</p>
     */
    inline void SetCrawler(const Crawler& value) { m_crawler = value; }

    /**
     * <p>The metadata for the specified crawler.</p>
     */
    inline void SetCrawler(Crawler&& value) { m_crawler = std::move(value); }

    /**
     * <p>The metadata for the specified crawler.</p>
     */
    inline GetCrawlerResult& WithCrawler(const Crawler& value) { SetCrawler(value); return *this;}

    /**
     * <p>The metadata for the specified crawler.</p>
     */
    inline GetCrawlerResult& WithCrawler(Crawler&& value) { SetCrawler(std::move(value)); return *this;}

  private:

    Crawler m_crawler;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
