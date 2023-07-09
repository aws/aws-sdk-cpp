/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AppBlockBuilderStateChangeReasonCode.h>
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
   * <p>Describes the reason why the last app block builder state change
   * occurred.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AppBlockBuilderStateChangeReason">AWS
   * API Reference</a></p>
   */
  class AppBlockBuilderStateChangeReason
  {
  public:
    AWS_APPSTREAM_API AppBlockBuilderStateChangeReason();
    AWS_APPSTREAM_API AppBlockBuilderStateChangeReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API AppBlockBuilderStateChangeReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state change reason code.</p>
     */
    inline const AppBlockBuilderStateChangeReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>The state change reason code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The state change reason code.</p>
     */
    inline void SetCode(const AppBlockBuilderStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state change reason code.</p>
     */
    inline void SetCode(AppBlockBuilderStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state change reason code.</p>
     */
    inline AppBlockBuilderStateChangeReason& WithCode(const AppBlockBuilderStateChangeReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>The state change reason code.</p>
     */
    inline AppBlockBuilderStateChangeReason& WithCode(AppBlockBuilderStateChangeReasonCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The state change reason message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The state change reason message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The state change reason message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The state change reason message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The state change reason message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The state change reason message.</p>
     */
    inline AppBlockBuilderStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The state change reason message.</p>
     */
    inline AppBlockBuilderStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The state change reason message.</p>
     */
    inline AppBlockBuilderStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    AppBlockBuilderStateChangeReasonCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
