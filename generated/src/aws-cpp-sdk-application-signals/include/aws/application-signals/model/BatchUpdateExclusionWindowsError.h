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
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsError() = default;
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SLO ID in the error.</p>
     */
    inline const Aws::String& GetSloId() const { return m_sloId; }
    inline bool SloIdHasBeenSet() const { return m_sloIdHasBeenSet; }
    template<typename SloIdT = Aws::String>
    void SetSloId(SloIdT&& value) { m_sloIdHasBeenSet = true; m_sloId = std::forward<SloIdT>(value); }
    template<typename SloIdT = Aws::String>
    BatchUpdateExclusionWindowsError& WithSloId(SloIdT&& value) { SetSloId(std::forward<SloIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    BatchUpdateExclusionWindowsError& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    BatchUpdateExclusionWindowsError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
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
