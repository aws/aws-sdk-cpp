/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ActionsMode.h>
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
   * <p>Specifies experiment options for running an experiment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StartExperimentExperimentOptionsInput">AWS
   * API Reference</a></p>
   */
  class StartExperimentExperimentOptionsInput
  {
  public:
    AWS_FIS_API StartExperimentExperimentOptionsInput() = default;
    AWS_FIS_API StartExperimentExperimentOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API StartExperimentExperimentOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the actions mode for experiment options.</p>
     */
    inline ActionsMode GetActionsMode() const { return m_actionsMode; }
    inline bool ActionsModeHasBeenSet() const { return m_actionsModeHasBeenSet; }
    inline void SetActionsMode(ActionsMode value) { m_actionsModeHasBeenSet = true; m_actionsMode = value; }
    inline StartExperimentExperimentOptionsInput& WithActionsMode(ActionsMode value) { SetActionsMode(value); return *this;}
    ///@}
  private:

    ActionsMode m_actionsMode{ActionsMode::NOT_SET};
    bool m_actionsModeHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
