/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ImageStateChangeReasonCode.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the reason why the last image state change occurred.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ImageStateChangeReason">AWS
   * API Reference</a></p>
   */
  class ImageStateChangeReason
  {
  public:
    AWS_APPSTREAM_API ImageStateChangeReason() = default;
    AWS_APPSTREAM_API ImageStateChangeReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ImageStateChangeReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state change reason code.</p>
     */
    inline ImageStateChangeReasonCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(ImageStateChangeReasonCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline ImageStateChangeReason& WithCode(ImageStateChangeReasonCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state change reason message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ImageStateChangeReason& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    ImageStateChangeReasonCode m_code{ImageStateChangeReasonCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
