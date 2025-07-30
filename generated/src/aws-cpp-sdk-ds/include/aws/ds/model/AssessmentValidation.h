/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about a specific validation test performed during a
   * directory assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AssessmentValidation">AWS
   * API Reference</a></p>
   */
  class AssessmentValidation
  {
  public:
    AWS_DIRECTORYSERVICE_API AssessmentValidation() = default;
    AWS_DIRECTORYSERVICE_API AssessmentValidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API AssessmentValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category of the validation test.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    AssessmentValidation& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the specific validation test performed within the category.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssessmentValidation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result status of the validation test. Valid values include
     * <code>SUCCESS</code>, <code>FAILED</code>, <code>PENDING</code>, and
     * <code>IN_PROGRESS</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AssessmentValidation& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed status code providing additional information about the validation
     * result.</p>
     */
    inline const Aws::String& GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    template<typename StatusCodeT = Aws::String>
    void SetStatusCode(StatusCodeT&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::forward<StatusCodeT>(value); }
    template<typename StatusCodeT = Aws::String>
    AssessmentValidation& WithStatusCode(StatusCodeT&& value) { SetStatusCode(std::forward<StatusCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of the validation result, including any error
     * details or recommendations.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    AssessmentValidation& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the validation test was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    AssessmentValidation& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the validation test was completed or last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDateTime() const { return m_lastUpdateDateTime; }
    inline bool LastUpdateDateTimeHasBeenSet() const { return m_lastUpdateDateTimeHasBeenSet; }
    template<typename LastUpdateDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateDateTime(LastUpdateDateTimeT&& value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime = std::forward<LastUpdateDateTimeT>(value); }
    template<typename LastUpdateDateTimeT = Aws::Utils::DateTime>
    AssessmentValidation& WithLastUpdateDateTime(LastUpdateDateTimeT&& value) { SetLastUpdateDateTime(std::forward<LastUpdateDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDateTime{};
    bool m_lastUpdateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
