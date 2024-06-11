/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/State.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides a summary of the reference predictor used when retraining or
   * upgrading a predictor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ReferencePredictorSummary">AWS
   * API Reference</a></p>
   */
  class ReferencePredictorSummary
  {
  public:
    AWS_FORECASTSERVICE_API ReferencePredictorSummary();
    AWS_FORECASTSERVICE_API ReferencePredictorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ReferencePredictorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the reference predictor.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ReferencePredictorSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ReferencePredictorSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ReferencePredictorSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the reference predictor is <code>Active</code> or
     * <code>Deleted</code>.</p>
     */
    inline const State& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ReferencePredictorSummary& WithState(const State& value) { SetState(value); return *this;}
    inline ReferencePredictorSummary& WithState(State&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
