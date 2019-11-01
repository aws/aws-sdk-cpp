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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/SegmentCondition.h>
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
   * <p>Specifies the conditions for the first activity in a journey. This activity
   * and its conditions determine which users are participants in a
   * journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/StartCondition">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API StartCondition
  {
  public:
    StartCondition();
    StartCondition(Aws::Utils::Json::JsonView jsonValue);
    StartCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The custom description of the condition.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The custom description of the condition.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The custom description of the condition.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The custom description of the condition.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The custom description of the condition.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The custom description of the condition.</p>
     */
    inline StartCondition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The custom description of the condition.</p>
     */
    inline StartCondition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the condition.</p>
     */
    inline StartCondition& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The segment that's associated with the first activity in the journey. This
     * segment determines which users are participants in the journey.</p>
     */
    inline const SegmentCondition& GetSegmentStartCondition() const{ return m_segmentStartCondition; }

    /**
     * <p>The segment that's associated with the first activity in the journey. This
     * segment determines which users are participants in the journey.</p>
     */
    inline bool SegmentStartConditionHasBeenSet() const { return m_segmentStartConditionHasBeenSet; }

    /**
     * <p>The segment that's associated with the first activity in the journey. This
     * segment determines which users are participants in the journey.</p>
     */
    inline void SetSegmentStartCondition(const SegmentCondition& value) { m_segmentStartConditionHasBeenSet = true; m_segmentStartCondition = value; }

    /**
     * <p>The segment that's associated with the first activity in the journey. This
     * segment determines which users are participants in the journey.</p>
     */
    inline void SetSegmentStartCondition(SegmentCondition&& value) { m_segmentStartConditionHasBeenSet = true; m_segmentStartCondition = std::move(value); }

    /**
     * <p>The segment that's associated with the first activity in the journey. This
     * segment determines which users are participants in the journey.</p>
     */
    inline StartCondition& WithSegmentStartCondition(const SegmentCondition& value) { SetSegmentStartCondition(value); return *this;}

    /**
     * <p>The segment that's associated with the first activity in the journey. This
     * segment determines which users are participants in the journey.</p>
     */
    inline StartCondition& WithSegmentStartCondition(SegmentCondition&& value) { SetSegmentStartCondition(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    SegmentCondition m_segmentStartCondition;
    bool m_segmentStartConditionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
