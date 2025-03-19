/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/StatementOutputData.h>
#include <aws/glue/model/StatementState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The code execution output in JSON format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StatementOutput">AWS
   * API Reference</a></p>
   */
  class StatementOutput
  {
  public:
    AWS_GLUE_API StatementOutput() = default;
    AWS_GLUE_API StatementOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StatementOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code execution output.</p>
     */
    inline const StatementOutputData& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = StatementOutputData>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = StatementOutputData>
    StatementOutput& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution count of the output.</p>
     */
    inline int GetExecutionCount() const { return m_executionCount; }
    inline bool ExecutionCountHasBeenSet() const { return m_executionCountHasBeenSet; }
    inline void SetExecutionCount(int value) { m_executionCountHasBeenSet = true; m_executionCount = value; }
    inline StatementOutput& WithExecutionCount(int value) { SetExecutionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the code execution output.</p>
     */
    inline StatementState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatementState value) { m_statusHasBeenSet = true; m_status = value; }
    inline StatementOutput& WithStatus(StatementState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the error in the output.</p>
     */
    inline const Aws::String& GetErrorName() const { return m_errorName; }
    inline bool ErrorNameHasBeenSet() const { return m_errorNameHasBeenSet; }
    template<typename ErrorNameT = Aws::String>
    void SetErrorName(ErrorNameT&& value) { m_errorNameHasBeenSet = true; m_errorName = std::forward<ErrorNameT>(value); }
    template<typename ErrorNameT = Aws::String>
    StatementOutput& WithErrorName(ErrorNameT&& value) { SetErrorName(std::forward<ErrorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error value of the output.</p>
     */
    inline const Aws::String& GetErrorValue() const { return m_errorValue; }
    inline bool ErrorValueHasBeenSet() const { return m_errorValueHasBeenSet; }
    template<typename ErrorValueT = Aws::String>
    void SetErrorValue(ErrorValueT&& value) { m_errorValueHasBeenSet = true; m_errorValue = std::forward<ErrorValueT>(value); }
    template<typename ErrorValueT = Aws::String>
    StatementOutput& WithErrorValue(ErrorValueT&& value) { SetErrorValue(std::forward<ErrorValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The traceback of the output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTraceback() const { return m_traceback; }
    inline bool TracebackHasBeenSet() const { return m_tracebackHasBeenSet; }
    template<typename TracebackT = Aws::Vector<Aws::String>>
    void SetTraceback(TracebackT&& value) { m_tracebackHasBeenSet = true; m_traceback = std::forward<TracebackT>(value); }
    template<typename TracebackT = Aws::Vector<Aws::String>>
    StatementOutput& WithTraceback(TracebackT&& value) { SetTraceback(std::forward<TracebackT>(value)); return *this;}
    template<typename TracebackT = Aws::String>
    StatementOutput& AddTraceback(TracebackT&& value) { m_tracebackHasBeenSet = true; m_traceback.emplace_back(std::forward<TracebackT>(value)); return *this; }
    ///@}
  private:

    StatementOutputData m_data;
    bool m_dataHasBeenSet = false;

    int m_executionCount{0};
    bool m_executionCountHasBeenSet = false;

    StatementState m_status{StatementState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorName;
    bool m_errorNameHasBeenSet = false;

    Aws::String m_errorValue;
    bool m_errorValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_traceback;
    bool m_tracebackHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
