/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageStatus.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>Stores information about a message status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelMessageStatusStructure">AWS
   * API Reference</a></p>
   */
  class ChannelMessageStatusStructure
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelMessageStatusStructure();
    AWS_CHIMESDKMESSAGING_API ChannelMessageStatusStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMessageStatusStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message status value.</p>
     */
    inline const ChannelMessageStatus& GetValue() const{ return m_value; }

    /**
     * <p>The message status value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The message status value.</p>
     */
    inline void SetValue(const ChannelMessageStatus& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The message status value.</p>
     */
    inline void SetValue(ChannelMessageStatus&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The message status value.</p>
     */
    inline ChannelMessageStatusStructure& WithValue(const ChannelMessageStatus& value) { SetValue(value); return *this;}

    /**
     * <p>The message status value.</p>
     */
    inline ChannelMessageStatusStructure& WithValue(ChannelMessageStatus&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>Contains more details about the messasge status.</p>
     */
    inline const Aws::String& GetDetail() const{ return m_detail; }

    /**
     * <p>Contains more details about the messasge status.</p>
     */
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }

    /**
     * <p>Contains more details about the messasge status.</p>
     */
    inline void SetDetail(const Aws::String& value) { m_detailHasBeenSet = true; m_detail = value; }

    /**
     * <p>Contains more details about the messasge status.</p>
     */
    inline void SetDetail(Aws::String&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }

    /**
     * <p>Contains more details about the messasge status.</p>
     */
    inline void SetDetail(const char* value) { m_detailHasBeenSet = true; m_detail.assign(value); }

    /**
     * <p>Contains more details about the messasge status.</p>
     */
    inline ChannelMessageStatusStructure& WithDetail(const Aws::String& value) { SetDetail(value); return *this;}

    /**
     * <p>Contains more details about the messasge status.</p>
     */
    inline ChannelMessageStatusStructure& WithDetail(Aws::String&& value) { SetDetail(std::move(value)); return *this;}

    /**
     * <p>Contains more details about the messasge status.</p>
     */
    inline ChannelMessageStatusStructure& WithDetail(const char* value) { SetDetail(value); return *this;}

  private:

    ChannelMessageStatus m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_detail;
    bool m_detailHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
