/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
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
   * <p>Specifies an experiment option for an experiment template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateExperimentTemplateExperimentOptionsInput">AWS
   * API Reference</a></p>
   */
  class UpdateExperimentTemplateExperimentOptionsInput
  {
  public:
    AWS_FIS_API UpdateExperimentTemplateExperimentOptionsInput();
    AWS_FIS_API UpdateExperimentTemplateExperimentOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API UpdateExperimentTemplateExperimentOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The empty target resolution mode of the experiment template.</p>
     */
    inline const EmptyTargetResolutionMode& GetEmptyTargetResolutionMode() const{ return m_emptyTargetResolutionMode; }

    /**
     * <p>The empty target resolution mode of the experiment template.</p>
     */
    inline bool EmptyTargetResolutionModeHasBeenSet() const { return m_emptyTargetResolutionModeHasBeenSet; }

    /**
     * <p>The empty target resolution mode of the experiment template.</p>
     */
    inline void SetEmptyTargetResolutionMode(const EmptyTargetResolutionMode& value) { m_emptyTargetResolutionModeHasBeenSet = true; m_emptyTargetResolutionMode = value; }

    /**
     * <p>The empty target resolution mode of the experiment template.</p>
     */
    inline void SetEmptyTargetResolutionMode(EmptyTargetResolutionMode&& value) { m_emptyTargetResolutionModeHasBeenSet = true; m_emptyTargetResolutionMode = std::move(value); }

    /**
     * <p>The empty target resolution mode of the experiment template.</p>
     */
    inline UpdateExperimentTemplateExperimentOptionsInput& WithEmptyTargetResolutionMode(const EmptyTargetResolutionMode& value) { SetEmptyTargetResolutionMode(value); return *this;}

    /**
     * <p>The empty target resolution mode of the experiment template.</p>
     */
    inline UpdateExperimentTemplateExperimentOptionsInput& WithEmptyTargetResolutionMode(EmptyTargetResolutionMode&& value) { SetEmptyTargetResolutionMode(std::move(value)); return *this;}

  private:

    EmptyTargetResolutionMode m_emptyTargetResolutionMode;
    bool m_emptyTargetResolutionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
