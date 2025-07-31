/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/EcrRescanDuration.h>
#include <aws/inspector2/model/EcrPullDateRescanDuration.h>
#include <aws/inspector2/model/EcrPullDateRescanMode.h>
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
   * <p>Details about the ECR automated re-scan duration setting for your
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/EcrConfiguration">AWS
   * API Reference</a></p>
   */
  class EcrConfiguration
  {
  public:
    AWS_INSPECTOR2_API EcrConfiguration() = default;
    AWS_INSPECTOR2_API EcrConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API EcrConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rescan duration configured for image push date.</p>
     */
    inline EcrRescanDuration GetRescanDuration() const { return m_rescanDuration; }
    inline bool RescanDurationHasBeenSet() const { return m_rescanDurationHasBeenSet; }
    inline void SetRescanDuration(EcrRescanDuration value) { m_rescanDurationHasBeenSet = true; m_rescanDuration = value; }
    inline EcrConfiguration& WithRescanDuration(EcrRescanDuration value) { SetRescanDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rescan duration configured for image pull date.</p>
     */
    inline EcrPullDateRescanDuration GetPullDateRescanDuration() const { return m_pullDateRescanDuration; }
    inline bool PullDateRescanDurationHasBeenSet() const { return m_pullDateRescanDurationHasBeenSet; }
    inline void SetPullDateRescanDuration(EcrPullDateRescanDuration value) { m_pullDateRescanDurationHasBeenSet = true; m_pullDateRescanDuration = value; }
    inline EcrConfiguration& WithPullDateRescanDuration(EcrPullDateRescanDuration value) { SetPullDateRescanDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pull date for the re-scan mode.</p>
     */
    inline EcrPullDateRescanMode GetPullDateRescanMode() const { return m_pullDateRescanMode; }
    inline bool PullDateRescanModeHasBeenSet() const { return m_pullDateRescanModeHasBeenSet; }
    inline void SetPullDateRescanMode(EcrPullDateRescanMode value) { m_pullDateRescanModeHasBeenSet = true; m_pullDateRescanMode = value; }
    inline EcrConfiguration& WithPullDateRescanMode(EcrPullDateRescanMode value) { SetPullDateRescanMode(value); return *this;}
    ///@}
  private:

    EcrRescanDuration m_rescanDuration{EcrRescanDuration::NOT_SET};
    bool m_rescanDurationHasBeenSet = false;

    EcrPullDateRescanDuration m_pullDateRescanDuration{EcrPullDateRescanDuration::NOT_SET};
    bool m_pullDateRescanDurationHasBeenSet = false;

    EcrPullDateRescanMode m_pullDateRescanMode{EcrPullDateRescanMode::NOT_SET};
    bool m_pullDateRescanModeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
