﻿/*
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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ItemResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * The results from processing a put events request<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EventsResponse
  {
  public:
    EventsResponse();
    EventsResponse(Aws::Utils::Json::JsonView jsonValue);
    EventsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline const Aws::Map<Aws::String, ItemResponse>& GetResults() const{ return m_results; }

    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline void SetResults(const Aws::Map<Aws::String, ItemResponse>& value) { m_resultsHasBeenSet = true; m_results = value; }

    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline void SetResults(Aws::Map<Aws::String, ItemResponse>&& value) { m_resultsHasBeenSet = true; m_results = std::move(value); }

    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline EventsResponse& WithResults(const Aws::Map<Aws::String, ItemResponse>& value) { SetResults(value); return *this;}

    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline EventsResponse& WithResults(Aws::Map<Aws::String, ItemResponse>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline EventsResponse& AddResults(const Aws::String& key, const ItemResponse& value) { m_resultsHasBeenSet = true; m_results.emplace(key, value); return *this; }

    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline EventsResponse& AddResults(Aws::String&& key, const ItemResponse& value) { m_resultsHasBeenSet = true; m_results.emplace(std::move(key), value); return *this; }

    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline EventsResponse& AddResults(const Aws::String& key, ItemResponse&& value) { m_resultsHasBeenSet = true; m_results.emplace(key, std::move(value)); return *this; }

    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline EventsResponse& AddResults(Aws::String&& key, ItemResponse&& value) { m_resultsHasBeenSet = true; m_results.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline EventsResponse& AddResults(const char* key, ItemResponse&& value) { m_resultsHasBeenSet = true; m_results.emplace(key, std::move(value)); return *this; }

    /**
     * A map containing a multi part response for each endpoint, with the endpoint id
     * as the key and item response as the value
     */
    inline EventsResponse& AddResults(const char* key, const ItemResponse& value) { m_resultsHasBeenSet = true; m_results.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, ItemResponse> m_results;
    bool m_resultsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
