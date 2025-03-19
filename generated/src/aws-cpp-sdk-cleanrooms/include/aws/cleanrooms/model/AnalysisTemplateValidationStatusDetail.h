/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisTemplateValidationType.h>
#include <aws/cleanrooms/model/AnalysisTemplateValidationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisTemplateValidationStatusReason.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The status details of the analysis template validation. Clean Rooms
   * Differential Privacy uses a general-purpose query structure to support complex
   * SQL queries and validates whether an analysis template fits that general-purpose
   * query structure. Validation is performed when analysis templates are created and
   * fetched. Because analysis templates are immutable by design, we recommend that
   * you create analysis templates after you associate the configured tables with
   * their analysis rule to your collaboration.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/clean-rooms/latest/userguide/analysis-rules-custom.html#custom-diff-privacy">https://docs.aws.amazon.com/clean-rooms/latest/userguide/analysis-rules-custom.html#custom-diff-privacy</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisTemplateValidationStatusDetail">AWS
   * API Reference</a></p>
   */
  class AnalysisTemplateValidationStatusDetail
  {
  public:
    AWS_CLEANROOMS_API AnalysisTemplateValidationStatusDetail() = default;
    AWS_CLEANROOMS_API AnalysisTemplateValidationStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisTemplateValidationStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of validation that was performed.</p>
     */
    inline AnalysisTemplateValidationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AnalysisTemplateValidationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AnalysisTemplateValidationStatusDetail& WithType(AnalysisTemplateValidationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the validation.</p>
     */
    inline AnalysisTemplateValidationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AnalysisTemplateValidationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AnalysisTemplateValidationStatusDetail& WithStatus(AnalysisTemplateValidationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reasons for the validation results.</p>
     */
    inline const Aws::Vector<AnalysisTemplateValidationStatusReason>& GetReasons() const { return m_reasons; }
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }
    template<typename ReasonsT = Aws::Vector<AnalysisTemplateValidationStatusReason>>
    void SetReasons(ReasonsT&& value) { m_reasonsHasBeenSet = true; m_reasons = std::forward<ReasonsT>(value); }
    template<typename ReasonsT = Aws::Vector<AnalysisTemplateValidationStatusReason>>
    AnalysisTemplateValidationStatusDetail& WithReasons(ReasonsT&& value) { SetReasons(std::forward<ReasonsT>(value)); return *this;}
    template<typename ReasonsT = AnalysisTemplateValidationStatusReason>
    AnalysisTemplateValidationStatusDetail& AddReasons(ReasonsT&& value) { m_reasonsHasBeenSet = true; m_reasons.emplace_back(std::forward<ReasonsT>(value)); return *this; }
    ///@}
  private:

    AnalysisTemplateValidationType m_type{AnalysisTemplateValidationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    AnalysisTemplateValidationStatus m_status{AnalysisTemplateValidationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<AnalysisTemplateValidationStatusReason> m_reasons;
    bool m_reasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
