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
   * Define how a segment based on recency of use.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RecencyDimension">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API RecencyDimension
  {
  public:
    RecencyDimension();
    RecencyDimension(Aws::Utils::Json::JsonView jsonValue);
    RecencyDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The length of time during which users have been active or inactive with your
     * app.

Valid values: HR_24, DAY_7, DAY_14, DAY_30
     */
    inline const Duration& GetDuration() const{ return m_duration; }

    /**
     * The length of time during which users have been active or inactive with your
     * app.

Valid values: HR_24, DAY_7, DAY_14, DAY_30
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * The length of time during which users have been active or inactive with your
     * app.

Valid values: HR_24, DAY_7, DAY_14, DAY_30
     */
    inline void SetDuration(const Duration& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * The length of time during which users have been active or inactive with your
     * app.

Valid values: HR_24, DAY_7, DAY_14, DAY_30
     */
    inline void SetDuration(Duration&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }

    /**
     * The length of time during which users have been active or inactive with your
     * app.

Valid values: HR_24, DAY_7, DAY_14, DAY_30
     */
    inline RecencyDimension& WithDuration(const Duration& value) { SetDuration(value); return *this;}

    /**
     * The length of time during which users have been active or inactive with your
     * app.

Valid values: HR_24, DAY_7, DAY_14, DAY_30
     */
    inline RecencyDimension& WithDuration(Duration&& value) { SetDuration(std::move(value)); return *this;}


    /**
     * The recency dimension type:

ACTIVE - Users who have used your app within the
     * specified duration are included in the segment.

INACTIVE - Users who have not
     * used your app within the specified duration are included in the segment.
     */
    inline const RecencyType& GetRecencyType() const{ return m_recencyType; }

    /**
     * The recency dimension type:

ACTIVE - Users who have used your app within the
     * specified duration are included in the segment.

INACTIVE - Users who have not
     * used your app within the specified duration are included in the segment.
     */
    inline bool RecencyTypeHasBeenSet() const { return m_recencyTypeHasBeenSet; }

    /**
     * The recency dimension type:

ACTIVE - Users who have used your app within the
     * specified duration are included in the segment.

INACTIVE - Users who have not
     * used your app within the specified duration are included in the segment.
     */
    inline void SetRecencyType(const RecencyType& value) { m_recencyTypeHasBeenSet = true; m_recencyType = value; }

    /**
     * The recency dimension type:

ACTIVE - Users who have used your app within the
     * specified duration are included in the segment.

INACTIVE - Users who have not
     * used your app within the specified duration are included in the segment.
     */
    inline void SetRecencyType(RecencyType&& value) { m_recencyTypeHasBeenSet = true; m_recencyType = std::move(value); }

    /**
     * The recency dimension type:

ACTIVE - Users who have used your app within the
     * specified duration are included in the segment.

INACTIVE - Users who have not
     * used your app within the specified duration are included in the segment.
     */
    inline RecencyDimension& WithRecencyType(const RecencyType& value) { SetRecencyType(value); return *this;}

    /**
     * The recency dimension type:

ACTIVE - Users who have used your app within the
     * specified duration are included in the segment.

INACTIVE - Users who have not
     * used your app within the specified duration are included in the segment.
     */
    inline RecencyDimension& WithRecencyType(RecencyType&& value) { SetRecencyType(std::move(value)); return *this;}

  private:

    Duration m_duration;
    bool m_durationHasBeenSet;

    RecencyType m_recencyType;
    bool m_recencyTypeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
