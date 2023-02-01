/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/ErrorCode.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The list of errors returned when a member action results in an
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/MemberError">AWS
   * API Reference</a></p>
   */
  class MemberError
  {
  public:
    AWS_CHIME_API MemberError();
    AWS_CHIME_API MemberError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API MemberError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The member ID.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p>The member ID.</p>
     */
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }

    /**
     * <p>The member ID.</p>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }

    /**
     * <p>The member ID.</p>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }

    /**
     * <p>The member ID.</p>
     */
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }

    /**
     * <p>The member ID.</p>
     */
    inline MemberError& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p>The member ID.</p>
     */
    inline MemberError& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p>The member ID.</p>
     */
    inline MemberError& WithMemberId(const char* value) { SetMemberId(value); return *this;}


    /**
     * <p>The error code.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline MemberError& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline MemberError& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message.</p>
     */
    inline MemberError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline MemberError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline MemberError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
