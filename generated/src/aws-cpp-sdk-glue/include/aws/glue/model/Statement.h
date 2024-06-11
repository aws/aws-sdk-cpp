/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/StatementState.h>
#include <aws/glue/model/StatementOutput.h>
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
   * <p>The statement or request for a particular action to occur in a
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Statement">AWS API
   * Reference</a></p>
   */
  class Statement
  {
  public:
    AWS_GLUE_API Statement();
    AWS_GLUE_API Statement(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Statement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the statement.</p>
     */
    inline int GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline Statement& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution code of the statement.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline Statement& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline Statement& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline Statement& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state while request is actioned.</p>
     */
    inline const StatementState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const StatementState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(StatementState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Statement& WithState(const StatementState& value) { SetState(value); return *this;}
    inline Statement& WithState(StatementState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output in JSON.</p>
     */
    inline const StatementOutput& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const StatementOutput& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(StatementOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline Statement& WithOutput(const StatementOutput& value) { SetOutput(value); return *this;}
    inline Statement& WithOutput(StatementOutput&& value) { SetOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code execution progress.</p>
     */
    inline double GetProgress() const{ return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(double value) { m_progressHasBeenSet = true; m_progress = value; }
    inline Statement& WithProgress(double value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unix time and date that the job definition was started.</p>
     */
    inline long long GetStartedOn() const{ return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    inline void SetStartedOn(long long value) { m_startedOnHasBeenSet = true; m_startedOn = value; }
    inline Statement& WithStartedOn(long long value) { SetStartedOn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unix time and date that the job definition was completed.</p>
     */
    inline long long GetCompletedOn() const{ return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    inline void SetCompletedOn(long long value) { m_completedOnHasBeenSet = true; m_completedOn = value; }
    inline Statement& WithCompletedOn(long long value) { SetCompletedOn(value); return *this;}
    ///@}
  private:

    int m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    StatementState m_state;
    bool m_stateHasBeenSet = false;

    StatementOutput m_output;
    bool m_outputHasBeenSet = false;

    double m_progress;
    bool m_progressHasBeenSet = false;

    long long m_startedOn;
    bool m_startedOnHasBeenSet = false;

    long long m_completedOn;
    bool m_completedOnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
