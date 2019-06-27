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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/SegmentResponse.h>
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
   * <p>Provides information about all the segments that are associated with an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentsResponse
  {
  public:
    SegmentsResponse();
    SegmentsResponse(Aws::Utils::Json::JsonView jsonValue);
    SegmentsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of responses, one for each segment that's associated with the
     * application (Segments resource) or each version of a segment that's associated
     * with the application (Segment Versions resource).</p>
     */
    inline const Aws::Vector<SegmentResponse>& GetItem() const{ return m_item; }

    /**
     * <p>An array of responses, one for each segment that's associated with the
     * application (Segments resource) or each version of a segment that's associated
     * with the application (Segment Versions resource).</p>
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * <p>An array of responses, one for each segment that's associated with the
     * application (Segments resource) or each version of a segment that's associated
     * with the application (Segment Versions resource).</p>
     */
    inline void SetItem(const Aws::Vector<SegmentResponse>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>An array of responses, one for each segment that's associated with the
     * application (Segments resource) or each version of a segment that's associated
     * with the application (Segment Versions resource).</p>
     */
    inline void SetItem(Aws::Vector<SegmentResponse>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * <p>An array of responses, one for each segment that's associated with the
     * application (Segments resource) or each version of a segment that's associated
     * with the application (Segment Versions resource).</p>
     */
    inline SegmentsResponse& WithItem(const Aws::Vector<SegmentResponse>& value) { SetItem(value); return *this;}

    /**
     * <p>An array of responses, one for each segment that's associated with the
     * application (Segments resource) or each version of a segment that's associated
     * with the application (Segment Versions resource).</p>
     */
    inline SegmentsResponse& WithItem(Aws::Vector<SegmentResponse>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>An array of responses, one for each segment that's associated with the
     * application (Segments resource) or each version of a segment that's associated
     * with the application (Segment Versions resource).</p>
     */
    inline SegmentsResponse& AddItem(const SegmentResponse& value) { m_itemHasBeenSet = true; m_item.push_back(value); return *this; }

    /**
     * <p>An array of responses, one for each segment that's associated with the
     * application (Segments resource) or each version of a segment that's associated
     * with the application (Segment Versions resource).</p>
     */
    inline SegmentsResponse& AddItem(SegmentResponse&& value) { m_itemHasBeenSet = true; m_item.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline SegmentsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline SegmentsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline SegmentsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SegmentResponse> m_item;
    bool m_itemHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
