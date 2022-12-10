/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>

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
namespace Chime
{
namespace Model
{

  /**
   * <p>The details of the retention settings for a channel.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ChannelRetentionSettings">AWS
   * API Reference</a></p>
   */
  class ChannelRetentionSettings
  {
  public:
    AWS_CHIME_API ChannelRetentionSettings();
    AWS_CHIME_API ChannelRetentionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ChannelRetentionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time in days to retain the messages in a channel.</p>
     */
    inline int GetRetentionDays() const{ return m_retentionDays; }

    /**
     * <p>The time in days to retain the messages in a channel.</p>
     */
    inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }

    /**
     * <p>The time in days to retain the messages in a channel.</p>
     */
    inline void SetRetentionDays(int value) { m_retentionDaysHasBeenSet = true; m_retentionDays = value; }

    /**
     * <p>The time in days to retain the messages in a channel.</p>
     */
    inline ChannelRetentionSettings& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}

  private:

    int m_retentionDays;
    bool m_retentionDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
