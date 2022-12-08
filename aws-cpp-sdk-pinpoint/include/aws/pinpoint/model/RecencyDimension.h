/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Duration.h>
#include <aws/pinpoint/model/RecencyType.h>
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
   * <p>Specifies criteria for including or excluding endpoints from a segment based
   * on how recently an endpoint was active.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RecencyDimension">AWS
   * API Reference</a></p>
   */
  class RecencyDimension
  {
  public:
    AWS_PINPOINT_API RecencyDimension();
    AWS_PINPOINT_API RecencyDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API RecencyDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The duration to use when determining whether an endpoint is active or
     * inactive.</p>
     */
    inline const Duration& GetDuration() const{ return m_duration; }

    /**
     * <p>The duration to use when determining whether an endpoint is active or
     * inactive.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration to use when determining whether an endpoint is active or
     * inactive.</p>
     */
    inline void SetDuration(const Duration& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration to use when determining whether an endpoint is active or
     * inactive.</p>
     */
    inline void SetDuration(Duration&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }

    /**
     * <p>The duration to use when determining whether an endpoint is active or
     * inactive.</p>
     */
    inline RecencyDimension& WithDuration(const Duration& value) { SetDuration(value); return *this;}

    /**
     * <p>The duration to use when determining whether an endpoint is active or
     * inactive.</p>
     */
    inline RecencyDimension& WithDuration(Duration&& value) { SetDuration(std::move(value)); return *this;}


    /**
     * <p>The type of recency dimension to use for the segment. Valid values are:
     * ACTIVE, endpoints that were active within the specified duration are included in
     * the segment; and, INACTIVE, endpoints that weren't active within the specified
     * duration are included in the segment.</p>
     */
    inline const RecencyType& GetRecencyType() const{ return m_recencyType; }

    /**
     * <p>The type of recency dimension to use for the segment. Valid values are:
     * ACTIVE, endpoints that were active within the specified duration are included in
     * the segment; and, INACTIVE, endpoints that weren't active within the specified
     * duration are included in the segment.</p>
     */
    inline bool RecencyTypeHasBeenSet() const { return m_recencyTypeHasBeenSet; }

    /**
     * <p>The type of recency dimension to use for the segment. Valid values are:
     * ACTIVE, endpoints that were active within the specified duration are included in
     * the segment; and, INACTIVE, endpoints that weren't active within the specified
     * duration are included in the segment.</p>
     */
    inline void SetRecencyType(const RecencyType& value) { m_recencyTypeHasBeenSet = true; m_recencyType = value; }

    /**
     * <p>The type of recency dimension to use for the segment. Valid values are:
     * ACTIVE, endpoints that were active within the specified duration are included in
     * the segment; and, INACTIVE, endpoints that weren't active within the specified
     * duration are included in the segment.</p>
     */
    inline void SetRecencyType(RecencyType&& value) { m_recencyTypeHasBeenSet = true; m_recencyType = std::move(value); }

    /**
     * <p>The type of recency dimension to use for the segment. Valid values are:
     * ACTIVE, endpoints that were active within the specified duration are included in
     * the segment; and, INACTIVE, endpoints that weren't active within the specified
     * duration are included in the segment.</p>
     */
    inline RecencyDimension& WithRecencyType(const RecencyType& value) { SetRecencyType(value); return *this;}

    /**
     * <p>The type of recency dimension to use for the segment. Valid values are:
     * ACTIVE, endpoints that were active within the specified duration are included in
     * the segment; and, INACTIVE, endpoints that weren't active within the specified
     * duration are included in the segment.</p>
     */
    inline RecencyDimension& WithRecencyType(RecencyType&& value) { SetRecencyType(std::move(value)); return *this;}

  private:

    Duration m_duration;
    bool m_durationHasBeenSet = false;

    RecencyType m_recencyType;
    bool m_recencyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
