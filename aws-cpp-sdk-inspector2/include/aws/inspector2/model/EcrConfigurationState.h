/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/EcrRescanDurationState.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details about the state of the ECR scans for your environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/EcrConfigurationState">AWS
   * API Reference</a></p>
   */
  class EcrConfigurationState
  {
  public:
    AWS_INSPECTOR2_API EcrConfigurationState();
    AWS_INSPECTOR2_API EcrConfigurationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API EcrConfigurationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains details about the state of the ECR automated re-scan
     * setting.</p>
     */
    inline const EcrRescanDurationState& GetRescanDurationState() const{ return m_rescanDurationState; }

    /**
     * <p>An object that contains details about the state of the ECR automated re-scan
     * setting.</p>
     */
    inline bool RescanDurationStateHasBeenSet() const { return m_rescanDurationStateHasBeenSet; }

    /**
     * <p>An object that contains details about the state of the ECR automated re-scan
     * setting.</p>
     */
    inline void SetRescanDurationState(const EcrRescanDurationState& value) { m_rescanDurationStateHasBeenSet = true; m_rescanDurationState = value; }

    /**
     * <p>An object that contains details about the state of the ECR automated re-scan
     * setting.</p>
     */
    inline void SetRescanDurationState(EcrRescanDurationState&& value) { m_rescanDurationStateHasBeenSet = true; m_rescanDurationState = std::move(value); }

    /**
     * <p>An object that contains details about the state of the ECR automated re-scan
     * setting.</p>
     */
    inline EcrConfigurationState& WithRescanDurationState(const EcrRescanDurationState& value) { SetRescanDurationState(value); return *this;}

    /**
     * <p>An object that contains details about the state of the ECR automated re-scan
     * setting.</p>
     */
    inline EcrConfigurationState& WithRescanDurationState(EcrRescanDurationState&& value) { SetRescanDurationState(std::move(value)); return *this;}

  private:

    EcrRescanDurationState m_rescanDurationState;
    bool m_rescanDurationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
