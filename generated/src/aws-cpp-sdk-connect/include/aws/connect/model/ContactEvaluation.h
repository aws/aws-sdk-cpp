/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Status.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the contact evaluations where the key is the FormId, which
   * is a unique identifier for the form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactEvaluation">AWS
   * API Reference</a></p>
   */
  class ContactEvaluation
  {
  public:
    AWS_CONNECT_API ContactEvaluation() = default;
    AWS_CONNECT_API ContactEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>FormId</code> of the contact evaluation.</p>
     */
    inline const Aws::String& GetFormId() const { return m_formId; }
    inline bool FormIdHasBeenSet() const { return m_formIdHasBeenSet; }
    template<typename FormIdT = Aws::String>
    void SetFormId(FormIdT&& value) { m_formIdHasBeenSet = true; m_formId = std::forward<FormIdT>(value); }
    template<typename FormIdT = Aws::String>
    ContactEvaluation& WithFormId(FormIdT&& value) { SetFormId(std::forward<FormIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name for the evaluation form. It is always present.</p>
     */
    inline const Aws::String& GetEvaluationArn() const { return m_evaluationArn; }
    inline bool EvaluationArnHasBeenSet() const { return m_evaluationArnHasBeenSet; }
    template<typename EvaluationArnT = Aws::String>
    void SetEvaluationArn(EvaluationArnT&& value) { m_evaluationArnHasBeenSet = true; m_evaluationArn = std::forward<EvaluationArnT>(value); }
    template<typename EvaluationArnT = Aws::String>
    ContactEvaluation& WithEvaluationArn(EvaluationArnT&& value) { SetEvaluationArn(std::forward<EvaluationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the evaluation.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline ContactEvaluation& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the evaluation was started, in UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    ContactEvaluation& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the evaluation was submitted, in UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    void SetEndTimestamp(EndTimestampT&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::forward<EndTimestampT>(value); }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    ContactEvaluation& WithEndTimestamp(EndTimestampT&& value) { SetEndTimestamp(std::forward<EndTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the evaluation was deleted, in UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteTimestamp() const { return m_deleteTimestamp; }
    inline bool DeleteTimestampHasBeenSet() const { return m_deleteTimestampHasBeenSet; }
    template<typename DeleteTimestampT = Aws::Utils::DateTime>
    void SetDeleteTimestamp(DeleteTimestampT&& value) { m_deleteTimestampHasBeenSet = true; m_deleteTimestamp = std::forward<DeleteTimestampT>(value); }
    template<typename DeleteTimestampT = Aws::Utils::DateTime>
    ContactEvaluation& WithDeleteTimestamp(DeleteTimestampT&& value) { SetDeleteTimestamp(std::forward<DeleteTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path where evaluation was exported.</p>
     */
    inline const Aws::String& GetExportLocation() const { return m_exportLocation; }
    inline bool ExportLocationHasBeenSet() const { return m_exportLocationHasBeenSet; }
    template<typename ExportLocationT = Aws::String>
    void SetExportLocation(ExportLocationT&& value) { m_exportLocationHasBeenSet = true; m_exportLocation = std::forward<ExportLocationT>(value); }
    template<typename ExportLocationT = Aws::String>
    ContactEvaluation& WithExportLocation(ExportLocationT&& value) { SetExportLocation(std::forward<ExportLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_formId;
    bool m_formIdHasBeenSet = false;

    Aws::String m_evaluationArn;
    bool m_evaluationArnHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp{};
    bool m_endTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deleteTimestamp{};
    bool m_deleteTimestampHasBeenSet = false;

    Aws::String m_exportLocation;
    bool m_exportLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
