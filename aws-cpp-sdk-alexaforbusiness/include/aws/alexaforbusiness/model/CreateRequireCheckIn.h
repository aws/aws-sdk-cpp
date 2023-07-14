﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>

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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>Creates settings for the require check in feature that are applied to a room
   * profile. Require check in allows a meeting room’s Alexa or AVS device to prompt
   * the user to check in; otherwise, the room will be released.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateRequireCheckIn">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API CreateRequireCheckIn
  {
  public:
    CreateRequireCheckIn();
    CreateRequireCheckIn(Aws::Utils::Json::JsonView jsonValue);
    CreateRequireCheckIn& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Duration between 5 and 20 minutes to determine when to release the room if
     * it's not checked into.</p>
     */
    inline int GetReleaseAfterMinutes() const{ return m_releaseAfterMinutes; }

    /**
     * <p>Duration between 5 and 20 minutes to determine when to release the room if
     * it's not checked into.</p>
     */
    inline bool ReleaseAfterMinutesHasBeenSet() const { return m_releaseAfterMinutesHasBeenSet; }

    /**
     * <p>Duration between 5 and 20 minutes to determine when to release the room if
     * it's not checked into.</p>
     */
    inline void SetReleaseAfterMinutes(int value) { m_releaseAfterMinutesHasBeenSet = true; m_releaseAfterMinutes = value; }

    /**
     * <p>Duration between 5 and 20 minutes to determine when to release the room if
     * it's not checked into.</p>
     */
    inline CreateRequireCheckIn& WithReleaseAfterMinutes(int value) { SetReleaseAfterMinutes(value); return *this;}


    /**
     * <p>Whether require check in is enabled or not.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether require check in is enabled or not.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether require check in is enabled or not.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether require check in is enabled or not.</p>
     */
    inline CreateRequireCheckIn& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    int m_releaseAfterMinutes;
    bool m_releaseAfterMinutesHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
