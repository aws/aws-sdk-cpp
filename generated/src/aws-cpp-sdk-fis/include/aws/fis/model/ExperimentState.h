/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ExperimentError.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the state of an experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentState">AWS
   * API Reference</a></p>
   */
  class ExperimentState
  {
  public:
    AWS_FIS_API ExperimentState();
    AWS_FIS_API ExperimentState(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the experiment.</p>
     */
    inline const ExperimentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExperimentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExperimentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExperimentState& WithStatus(const ExperimentStatus& value) { SetStatus(value); return *this;}
    inline ExperimentState& WithStatus(ExperimentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the state.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline ExperimentState& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline ExperimentState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline ExperimentState& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error information of the experiment when the action has
     * <code>failed</code>.</p>
     */
    inline const ExperimentError& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ExperimentError& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ExperimentError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline ExperimentState& WithError(const ExperimentError& value) { SetError(value); return *this;}
    inline ExperimentState& WithError(ExperimentError&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    ExperimentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    ExperimentError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
