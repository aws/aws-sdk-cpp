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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FollowPoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings to specify if an action follows another.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FollowModeScheduleActionStartSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API FollowModeScheduleActionStartSettings
  {
  public:
    FollowModeScheduleActionStartSettings();
    FollowModeScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
    FollowModeScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Identifies whether this action starts relative to the start or relative to the
     * end of the reference action.
     */
    inline const FollowPoint& GetFollowPoint() const{ return m_followPoint; }

    /**
     * Identifies whether this action starts relative to the start or relative to the
     * end of the reference action.
     */
    inline bool FollowPointHasBeenSet() const { return m_followPointHasBeenSet; }

    /**
     * Identifies whether this action starts relative to the start or relative to the
     * end of the reference action.
     */
    inline void SetFollowPoint(const FollowPoint& value) { m_followPointHasBeenSet = true; m_followPoint = value; }

    /**
     * Identifies whether this action starts relative to the start or relative to the
     * end of the reference action.
     */
    inline void SetFollowPoint(FollowPoint&& value) { m_followPointHasBeenSet = true; m_followPoint = std::move(value); }

    /**
     * Identifies whether this action starts relative to the start or relative to the
     * end of the reference action.
     */
    inline FollowModeScheduleActionStartSettings& WithFollowPoint(const FollowPoint& value) { SetFollowPoint(value); return *this;}

    /**
     * Identifies whether this action starts relative to the start or relative to the
     * end of the reference action.
     */
    inline FollowModeScheduleActionStartSettings& WithFollowPoint(FollowPoint&& value) { SetFollowPoint(std::move(value)); return *this;}


    /**
     * The action name of another action that this one refers to.
     */
    inline const Aws::String& GetReferenceActionName() const{ return m_referenceActionName; }

    /**
     * The action name of another action that this one refers to.
     */
    inline bool ReferenceActionNameHasBeenSet() const { return m_referenceActionNameHasBeenSet; }

    /**
     * The action name of another action that this one refers to.
     */
    inline void SetReferenceActionName(const Aws::String& value) { m_referenceActionNameHasBeenSet = true; m_referenceActionName = value; }

    /**
     * The action name of another action that this one refers to.
     */
    inline void SetReferenceActionName(Aws::String&& value) { m_referenceActionNameHasBeenSet = true; m_referenceActionName = std::move(value); }

    /**
     * The action name of another action that this one refers to.
     */
    inline void SetReferenceActionName(const char* value) { m_referenceActionNameHasBeenSet = true; m_referenceActionName.assign(value); }

    /**
     * The action name of another action that this one refers to.
     */
    inline FollowModeScheduleActionStartSettings& WithReferenceActionName(const Aws::String& value) { SetReferenceActionName(value); return *this;}

    /**
     * The action name of another action that this one refers to.
     */
    inline FollowModeScheduleActionStartSettings& WithReferenceActionName(Aws::String&& value) { SetReferenceActionName(std::move(value)); return *this;}

    /**
     * The action name of another action that this one refers to.
     */
    inline FollowModeScheduleActionStartSettings& WithReferenceActionName(const char* value) { SetReferenceActionName(value); return *this;}

  private:

    FollowPoint m_followPoint;
    bool m_followPointHasBeenSet;

    Aws::String m_referenceActionName;
    bool m_referenceActionNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
