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
    AWS_CHIMESDKMESSAGING_API ChannelMessageStatusStructure() = default;
    AWS_CHIMESDKMESSAGING_API ChannelMessageStatusStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMessageStatusStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message status value.</p>
     */
    inline ChannelMessageStatus GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(ChannelMessageStatus value) { m_valueHasBeenSet = true; m_value = value; }
    inline ChannelMessageStatusStructure& WithValue(ChannelMessageStatus value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains more details about the message status.</p>
     */
    inline const Aws::String& GetDetail() const { return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    template<typename DetailT = Aws::String>
    void SetDetail(DetailT&& value) { m_detailHasBeenSet = true; m_detail = std::forward<DetailT>(value); }
    template<typename DetailT = Aws::String>
    ChannelMessageStatusStructure& WithDetail(DetailT&& value) { SetDetail(std::forward<DetailT>(value)); return *this;}
    ///@}
  private:

    ChannelMessageStatus m_value{ChannelMessageStatus::NOT_SET};
    bool m_valueHasBeenSet = false;

    Aws::String m_detail;
    bool m_detailHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
