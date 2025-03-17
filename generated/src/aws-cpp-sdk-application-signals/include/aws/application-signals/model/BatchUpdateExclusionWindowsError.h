/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>An array of structures, where each structure includes an error indicating
   * that one of the requests in the array was not valid.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/BatchUpdateExclusionWindowsError">AWS
   * API Reference</a></p>
   */
  class BatchUpdateExclusionWindowsError
  {
  public:
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsError();
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SLO ID in the error.</p>
     */
    inline const Aws::String& GetSloId() const{ return m_sloId; }
    inline bool SloIdHasBeenSet() const { return m_sloIdHasBeenSet; }
    inline void SetSloId(const Aws::String& value) { m_sloIdHasBeenSet = true; m_sloId = value; }
    inline void SetSloId(Aws::String&& value) { m_sloIdHasBeenSet = true; m_sloId = std::move(value); }
    inline void SetSloId(const char* value) { m_sloIdHasBeenSet = true; m_sloId.assign(value); }
    inline BatchUpdateExclusionWindowsError& WithSloId(const Aws::String& value) { SetSloId(value); return *this;}
    inline BatchUpdateExclusionWindowsError& WithSloId(Aws::String&& value) { SetSloId(std::move(value)); return *this;}
    inline BatchUpdateExclusionWindowsError& WithSloId(const char* value) { SetSloId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline BatchUpdateExclusionWindowsError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline BatchUpdateExclusionWindowsError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline BatchUpdateExclusionWindowsError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline BatchUpdateExclusionWindowsError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline BatchUpdateExclusionWindowsError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline BatchUpdateExclusionWindowsError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_sloId;
    bool m_sloIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
