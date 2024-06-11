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
   * <p>A structure containing information about one error that occurred during a <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_BatchGetServiceLevelObjectiveBudgetReport.html">BatchGetServiceLevelObjectiveBudgetReport</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceLevelObjectiveBudgetReportError">AWS
   * API Reference</a></p>
   */
  class ServiceLevelObjectiveBudgetReportError
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveBudgetReportError();
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveBudgetReportError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveBudgetReportError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SLO that this error is related to.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceLevelObjectiveBudgetReportError& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceLevelObjectiveBudgetReportError& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceLevelObjectiveBudgetReportError& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SLO that this error is related to.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ServiceLevelObjectiveBudgetReportError& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServiceLevelObjectiveBudgetReportError& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServiceLevelObjectiveBudgetReportError& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code for this error.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline ServiceLevelObjectiveBudgetReportError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline ServiceLevelObjectiveBudgetReportError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline ServiceLevelObjectiveBudgetReportError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message for this error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline ServiceLevelObjectiveBudgetReportError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline ServiceLevelObjectiveBudgetReportError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline ServiceLevelObjectiveBudgetReportError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
