/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormScoringMode.h>
#include <aws/connect/model/EvaluationFormScoringStatus.h>
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
   * <p>Information about scoring strategy for an evaluation form.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormScoringStrategy">AWS
   * API Reference</a></p>
   */
  class EvaluationFormScoringStrategy
  {
  public:
    AWS_CONNECT_API EvaluationFormScoringStrategy() = default;
    AWS_CONNECT_API EvaluationFormScoringStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormScoringStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scoring mode of the evaluation form.</p>
     */
    inline EvaluationFormScoringMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(EvaluationFormScoringMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline EvaluationFormScoringStrategy& WithMode(EvaluationFormScoringMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scoring status of the evaluation form.</p>
     */
    inline EvaluationFormScoringStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EvaluationFormScoringStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EvaluationFormScoringStrategy& WithStatus(EvaluationFormScoringStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    EvaluationFormScoringMode m_mode{EvaluationFormScoringMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    EvaluationFormScoringStatus m_status{EvaluationFormScoringStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
