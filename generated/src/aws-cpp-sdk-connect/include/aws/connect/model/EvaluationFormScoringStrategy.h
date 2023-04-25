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
    AWS_CONNECT_API EvaluationFormScoringStrategy();
    AWS_CONNECT_API EvaluationFormScoringStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormScoringStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The scoring mode of the evaluation form.</p>
     */
    inline const EvaluationFormScoringMode& GetMode() const{ return m_mode; }

    /**
     * <p>The scoring mode of the evaluation form.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The scoring mode of the evaluation form.</p>
     */
    inline void SetMode(const EvaluationFormScoringMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The scoring mode of the evaluation form.</p>
     */
    inline void SetMode(EvaluationFormScoringMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The scoring mode of the evaluation form.</p>
     */
    inline EvaluationFormScoringStrategy& WithMode(const EvaluationFormScoringMode& value) { SetMode(value); return *this;}

    /**
     * <p>The scoring mode of the evaluation form.</p>
     */
    inline EvaluationFormScoringStrategy& WithMode(EvaluationFormScoringMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The scoring status of the evaluation form.</p>
     */
    inline const EvaluationFormScoringStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The scoring status of the evaluation form.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The scoring status of the evaluation form.</p>
     */
    inline void SetStatus(const EvaluationFormScoringStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The scoring status of the evaluation form.</p>
     */
    inline void SetStatus(EvaluationFormScoringStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The scoring status of the evaluation form.</p>
     */
    inline EvaluationFormScoringStrategy& WithStatus(const EvaluationFormScoringStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The scoring status of the evaluation form.</p>
     */
    inline EvaluationFormScoringStrategy& WithStatus(EvaluationFormScoringStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    EvaluationFormScoringMode m_mode;
    bool m_modeHasBeenSet = false;

    EvaluationFormScoringStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
