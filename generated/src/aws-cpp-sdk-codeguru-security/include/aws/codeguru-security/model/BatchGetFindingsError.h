/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/ErrorCode.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>Contains information about the error that caused a finding to fail to be
   * retrieved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/BatchGetFindingsError">AWS
   * API Reference</a></p>
   */
  class BatchGetFindingsError
  {
  public:
    AWS_CODEGURUSECURITY_API BatchGetFindingsError();
    AWS_CODEGURUSECURITY_API BatchGetFindingsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API BatchGetFindingsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A code associated with the type of error.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline BatchGetFindingsError& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}
    inline BatchGetFindingsError& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding ID of the finding that was not fetched.</p>
     */
    inline const Aws::String& GetFindingId() const{ return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    inline void SetFindingId(const Aws::String& value) { m_findingIdHasBeenSet = true; m_findingId = value; }
    inline void SetFindingId(Aws::String&& value) { m_findingIdHasBeenSet = true; m_findingId = std::move(value); }
    inline void SetFindingId(const char* value) { m_findingIdHasBeenSet = true; m_findingId.assign(value); }
    inline BatchGetFindingsError& WithFindingId(const Aws::String& value) { SetFindingId(value); return *this;}
    inline BatchGetFindingsError& WithFindingId(Aws::String&& value) { SetFindingId(std::move(value)); return *this;}
    inline BatchGetFindingsError& WithFindingId(const char* value) { SetFindingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BatchGetFindingsError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BatchGetFindingsError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BatchGetFindingsError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scan that generated the finding.</p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }
    inline void SetScanName(const Aws::String& value) { m_scanNameHasBeenSet = true; m_scanName = value; }
    inline void SetScanName(Aws::String&& value) { m_scanNameHasBeenSet = true; m_scanName = std::move(value); }
    inline void SetScanName(const char* value) { m_scanNameHasBeenSet = true; m_scanName.assign(value); }
    inline BatchGetFindingsError& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}
    inline BatchGetFindingsError& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}
    inline BatchGetFindingsError& WithScanName(const char* value) { SetScanName(value); return *this;}
    ///@}
  private:

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_findingId;
    bool m_findingIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
