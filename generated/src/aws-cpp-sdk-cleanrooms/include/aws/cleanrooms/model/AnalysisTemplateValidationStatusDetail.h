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
    AWS_CLEANROOMS_API AnalysisTemplateValidationStatusDetail();
    AWS_CLEANROOMS_API AnalysisTemplateValidationStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisTemplateValidationStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of validation that was performed.</p>
     */
    inline const AnalysisTemplateValidationType& GetType() const{ return m_type; }

    /**
     * <p>The type of validation that was performed.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of validation that was performed.</p>
     */
    inline void SetType(const AnalysisTemplateValidationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of validation that was performed.</p>
     */
    inline void SetType(AnalysisTemplateValidationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of validation that was performed.</p>
     */
    inline AnalysisTemplateValidationStatusDetail& WithType(const AnalysisTemplateValidationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of validation that was performed.</p>
     */
    inline AnalysisTemplateValidationStatusDetail& WithType(AnalysisTemplateValidationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The status of the validation.</p>
     */
    inline const AnalysisTemplateValidationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the validation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the validation.</p>
     */
    inline void SetStatus(const AnalysisTemplateValidationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the validation.</p>
     */
    inline void SetStatus(AnalysisTemplateValidationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the validation.</p>
     */
    inline AnalysisTemplateValidationStatusDetail& WithStatus(const AnalysisTemplateValidationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the validation.</p>
     */
    inline AnalysisTemplateValidationStatusDetail& WithStatus(AnalysisTemplateValidationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reasons for the validation results.</p>
     */
    inline const Aws::Vector<AnalysisTemplateValidationStatusReason>& GetReasons() const{ return m_reasons; }

    /**
     * <p>The reasons for the validation results.</p>
     */
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }

    /**
     * <p>The reasons for the validation results.</p>
     */
    inline void SetReasons(const Aws::Vector<AnalysisTemplateValidationStatusReason>& value) { m_reasonsHasBeenSet = true; m_reasons = value; }

    /**
     * <p>The reasons for the validation results.</p>
     */
    inline void SetReasons(Aws::Vector<AnalysisTemplateValidationStatusReason>&& value) { m_reasonsHasBeenSet = true; m_reasons = std::move(value); }

    /**
     * <p>The reasons for the validation results.</p>
     */
    inline AnalysisTemplateValidationStatusDetail& WithReasons(const Aws::Vector<AnalysisTemplateValidationStatusReason>& value) { SetReasons(value); return *this;}

    /**
     * <p>The reasons for the validation results.</p>
     */
    inline AnalysisTemplateValidationStatusDetail& WithReasons(Aws::Vector<AnalysisTemplateValidationStatusReason>&& value) { SetReasons(std::move(value)); return *this;}

    /**
     * <p>The reasons for the validation results.</p>
     */
    inline AnalysisTemplateValidationStatusDetail& AddReasons(const AnalysisTemplateValidationStatusReason& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }

    /**
     * <p>The reasons for the validation results.</p>
     */
    inline AnalysisTemplateValidationStatusDetail& AddReasons(AnalysisTemplateValidationStatusReason&& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(std::move(value)); return *this; }

  private:

    AnalysisTemplateValidationType m_type;
    bool m_typeHasBeenSet = false;

    AnalysisTemplateValidationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<AnalysisTemplateValidationStatusReason> m_reasons;
    bool m_reasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
