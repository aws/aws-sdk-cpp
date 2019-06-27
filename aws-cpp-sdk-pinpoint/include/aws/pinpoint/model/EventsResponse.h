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
   * <p>Provides information about endpoints and the events that they're associated
   * with.</p><p><h3>See Also:</h3>   <a
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
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline const Aws::Map<Aws::String, ItemResponse>& GetResults() const{ return m_results; }

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline void SetResults(const Aws::Map<Aws::String, ItemResponse>& value) { m_resultsHasBeenSet = true; m_results = value; }

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline void SetResults(Aws::Map<Aws::String, ItemResponse>&& value) { m_resultsHasBeenSet = true; m_results = std::move(value); }

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline EventsResponse& WithResults(const Aws::Map<Aws::String, ItemResponse>& value) { SetResults(value); return *this;}

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline EventsResponse& WithResults(Aws::Map<Aws::String, ItemResponse>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline EventsResponse& AddResults(const Aws::String& key, const ItemResponse& value) { m_resultsHasBeenSet = true; m_results.emplace(key, value); return *this; }

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline EventsResponse& AddResults(Aws::String&& key, const ItemResponse& value) { m_resultsHasBeenSet = true; m_results.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline EventsResponse& AddResults(const Aws::String& key, ItemResponse&& value) { m_resultsHasBeenSet = true; m_results.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline EventsResponse& AddResults(Aws::String&& key, ItemResponse&& value) { m_resultsHasBeenSet = true; m_results.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline EventsResponse& AddResults(const char* key, ItemResponse&& value) { m_resultsHasBeenSet = true; m_results.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline EventsResponse& AddResults(const char* key, const ItemResponse& value) { m_resultsHasBeenSet = true; m_results.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, ItemResponse> m_results;
    bool m_resultsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
