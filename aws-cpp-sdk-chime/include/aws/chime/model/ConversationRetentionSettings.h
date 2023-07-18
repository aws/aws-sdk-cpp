﻿/**
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
   * <p>The retention settings that determine how long to retain conversation
   * messages for an Amazon Chime Enterprise account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ConversationRetentionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API ConversationRetentionSettings
  {
  public:
    ConversationRetentionSettings();
    ConversationRetentionSettings(Aws::Utils::Json::JsonView jsonValue);
    ConversationRetentionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of days for which to retain conversation messages.</p>
     */
    inline int GetRetentionDays() const{ return m_retentionDays; }

    /**
     * <p>The number of days for which to retain conversation messages.</p>
     */
    inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }

    /**
     * <p>The number of days for which to retain conversation messages.</p>
     */
    inline void SetRetentionDays(int value) { m_retentionDaysHasBeenSet = true; m_retentionDays = value; }

    /**
     * <p>The number of days for which to retain conversation messages.</p>
     */
    inline ConversationRetentionSettings& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}

  private:

    int m_retentionDays;
    bool m_retentionDaysHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
