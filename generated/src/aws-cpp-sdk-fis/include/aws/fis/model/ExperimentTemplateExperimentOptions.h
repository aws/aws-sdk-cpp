/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/AccountTargeting.h>
#include <aws/fis/model/EmptyTargetResolutionMode.h>
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
   * <p>Describes the experiment options for an experiment template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentTemplateExperimentOptions">AWS
   * API Reference</a></p>
   */
  class ExperimentTemplateExperimentOptions
  {
  public:
    AWS_FIS_API ExperimentTemplateExperimentOptions() = default;
    AWS_FIS_API ExperimentTemplateExperimentOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentTemplateExperimentOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account targeting setting for an experiment template. </p>
     */
    inline AccountTargeting GetAccountTargeting() const { return m_accountTargeting; }
    inline bool AccountTargetingHasBeenSet() const { return m_accountTargetingHasBeenSet; }
    inline void SetAccountTargeting(AccountTargeting value) { m_accountTargetingHasBeenSet = true; m_accountTargeting = value; }
    inline ExperimentTemplateExperimentOptions& WithAccountTargeting(AccountTargeting value) { SetAccountTargeting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The empty target resolution mode for an experiment template.</p>
     */
    inline EmptyTargetResolutionMode GetEmptyTargetResolutionMode() const { return m_emptyTargetResolutionMode; }
    inline bool EmptyTargetResolutionModeHasBeenSet() const { return m_emptyTargetResolutionModeHasBeenSet; }
    inline void SetEmptyTargetResolutionMode(EmptyTargetResolutionMode value) { m_emptyTargetResolutionModeHasBeenSet = true; m_emptyTargetResolutionMode = value; }
    inline ExperimentTemplateExperimentOptions& WithEmptyTargetResolutionMode(EmptyTargetResolutionMode value) { SetEmptyTargetResolutionMode(value); return *this;}
    ///@}
  private:

    AccountTargeting m_accountTargeting{AccountTargeting::NOT_SET};
    bool m_accountTargetingHasBeenSet = false;

    EmptyTargetResolutionMode m_emptyTargetResolutionMode{EmptyTargetResolutionMode::NOT_SET};
    bool m_emptyTargetResolutionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
