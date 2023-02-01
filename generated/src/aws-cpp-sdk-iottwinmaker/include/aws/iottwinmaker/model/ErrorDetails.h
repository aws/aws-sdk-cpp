/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/ErrorCode.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The error details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ErrorDetails">AWS
   * API Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_IOTTWINMAKER_API ErrorDetails();
    AWS_IOTTWINMAKER_API ErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code.</p>
     */
    inline const ErrorCode& GetCode() const{ return m_code; }

    /**
     * <p>The error code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(const ErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(ErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline ErrorDetails& WithCode(const ErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline ErrorDetails& WithCode(ErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message.</p>
     */
    inline ErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline ErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline ErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
