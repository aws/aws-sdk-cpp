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
   * <p>Specifies experiment options for an experiment template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/CreateExperimentTemplateExperimentOptionsInput">AWS
   * API Reference</a></p>
   */
  class CreateExperimentTemplateExperimentOptionsInput
  {
  public:
    AWS_FIS_API CreateExperimentTemplateExperimentOptionsInput();
    AWS_FIS_API CreateExperimentTemplateExperimentOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API CreateExperimentTemplateExperimentOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the account targeting setting for experiment options.</p>
     */
    inline const AccountTargeting& GetAccountTargeting() const{ return m_accountTargeting; }

    /**
     * <p>Specifies the account targeting setting for experiment options.</p>
     */
    inline bool AccountTargetingHasBeenSet() const { return m_accountTargetingHasBeenSet; }

    /**
     * <p>Specifies the account targeting setting for experiment options.</p>
     */
    inline void SetAccountTargeting(const AccountTargeting& value) { m_accountTargetingHasBeenSet = true; m_accountTargeting = value; }

    /**
     * <p>Specifies the account targeting setting for experiment options.</p>
     */
    inline void SetAccountTargeting(AccountTargeting&& value) { m_accountTargetingHasBeenSet = true; m_accountTargeting = std::move(value); }

    /**
     * <p>Specifies the account targeting setting for experiment options.</p>
     */
    inline CreateExperimentTemplateExperimentOptionsInput& WithAccountTargeting(const AccountTargeting& value) { SetAccountTargeting(value); return *this;}

    /**
     * <p>Specifies the account targeting setting for experiment options.</p>
     */
    inline CreateExperimentTemplateExperimentOptionsInput& WithAccountTargeting(AccountTargeting&& value) { SetAccountTargeting(std::move(value)); return *this;}


    /**
     * <p>Specifies the empty target resolution mode for experiment options.</p>
     */
    inline const EmptyTargetResolutionMode& GetEmptyTargetResolutionMode() const{ return m_emptyTargetResolutionMode; }

    /**
     * <p>Specifies the empty target resolution mode for experiment options.</p>
     */
    inline bool EmptyTargetResolutionModeHasBeenSet() const { return m_emptyTargetResolutionModeHasBeenSet; }

    /**
     * <p>Specifies the empty target resolution mode for experiment options.</p>
     */
    inline void SetEmptyTargetResolutionMode(const EmptyTargetResolutionMode& value) { m_emptyTargetResolutionModeHasBeenSet = true; m_emptyTargetResolutionMode = value; }

    /**
     * <p>Specifies the empty target resolution mode for experiment options.</p>
     */
    inline void SetEmptyTargetResolutionMode(EmptyTargetResolutionMode&& value) { m_emptyTargetResolutionModeHasBeenSet = true; m_emptyTargetResolutionMode = std::move(value); }

    /**
     * <p>Specifies the empty target resolution mode for experiment options.</p>
     */
    inline CreateExperimentTemplateExperimentOptionsInput& WithEmptyTargetResolutionMode(const EmptyTargetResolutionMode& value) { SetEmptyTargetResolutionMode(value); return *this;}

    /**
     * <p>Specifies the empty target resolution mode for experiment options.</p>
     */
    inline CreateExperimentTemplateExperimentOptionsInput& WithEmptyTargetResolutionMode(EmptyTargetResolutionMode&& value) { SetEmptyTargetResolutionMode(std::move(value)); return *this;}

  private:

    AccountTargeting m_accountTargeting;
    bool m_accountTargetingHasBeenSet = false;

    EmptyTargetResolutionMode m_emptyTargetResolutionMode;
    bool m_emptyTargetResolutionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
