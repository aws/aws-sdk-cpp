/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EventStartCondition.h>
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
  class StartCondition
  {
  public:
    AWS_PINPOINT_API StartCondition();
    AWS_PINPOINT_API StartCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API StartCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    
    inline const EventStartCondition& GetEventStartCondition() const{ return m_eventStartCondition; }

    
    inline bool EventStartConditionHasBeenSet() const { return m_eventStartConditionHasBeenSet; }

    
    inline void SetEventStartCondition(const EventStartCondition& value) { m_eventStartConditionHasBeenSet = true; m_eventStartCondition = value; }

    
    inline void SetEventStartCondition(EventStartCondition&& value) { m_eventStartConditionHasBeenSet = true; m_eventStartCondition = std::move(value); }

    
    inline StartCondition& WithEventStartCondition(const EventStartCondition& value) { SetEventStartCondition(value); return *this;}

    
    inline StartCondition& WithEventStartCondition(EventStartCondition&& value) { SetEventStartCondition(std::move(value)); return *this;}


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
    bool m_descriptionHasBeenSet = false;

    EventStartCondition m_eventStartCondition;
    bool m_eventStartConditionHasBeenSet = false;

    SegmentCondition m_segmentStartCondition;
    bool m_segmentStartConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
