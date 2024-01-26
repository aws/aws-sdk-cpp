/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/EcrPullDateRescanDuration.h>
#include <aws/inspector2/model/EcrRescanDuration.h>
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
    AWS_INSPECTOR2_API EcrConfiguration();
    AWS_INSPECTOR2_API EcrConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API EcrConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rescan duration configured for image pull date.</p>
     */
    inline const EcrPullDateRescanDuration& GetPullDateRescanDuration() const{ return m_pullDateRescanDuration; }

    /**
     * <p>The rescan duration configured for image pull date.</p>
     */
    inline bool PullDateRescanDurationHasBeenSet() const { return m_pullDateRescanDurationHasBeenSet; }

    /**
     * <p>The rescan duration configured for image pull date.</p>
     */
    inline void SetPullDateRescanDuration(const EcrPullDateRescanDuration& value) { m_pullDateRescanDurationHasBeenSet = true; m_pullDateRescanDuration = value; }

    /**
     * <p>The rescan duration configured for image pull date.</p>
     */
    inline void SetPullDateRescanDuration(EcrPullDateRescanDuration&& value) { m_pullDateRescanDurationHasBeenSet = true; m_pullDateRescanDuration = std::move(value); }

    /**
     * <p>The rescan duration configured for image pull date.</p>
     */
    inline EcrConfiguration& WithPullDateRescanDuration(const EcrPullDateRescanDuration& value) { SetPullDateRescanDuration(value); return *this;}

    /**
     * <p>The rescan duration configured for image pull date.</p>
     */
    inline EcrConfiguration& WithPullDateRescanDuration(EcrPullDateRescanDuration&& value) { SetPullDateRescanDuration(std::move(value)); return *this;}


    /**
     * <p>The rescan duration configured for image push date.</p>
     */
    inline const EcrRescanDuration& GetRescanDuration() const{ return m_rescanDuration; }

    /**
     * <p>The rescan duration configured for image push date.</p>
     */
    inline bool RescanDurationHasBeenSet() const { return m_rescanDurationHasBeenSet; }

    /**
     * <p>The rescan duration configured for image push date.</p>
     */
    inline void SetRescanDuration(const EcrRescanDuration& value) { m_rescanDurationHasBeenSet = true; m_rescanDuration = value; }

    /**
     * <p>The rescan duration configured for image push date.</p>
     */
    inline void SetRescanDuration(EcrRescanDuration&& value) { m_rescanDurationHasBeenSet = true; m_rescanDuration = std::move(value); }

    /**
     * <p>The rescan duration configured for image push date.</p>
     */
    inline EcrConfiguration& WithRescanDuration(const EcrRescanDuration& value) { SetRescanDuration(value); return *this;}

    /**
     * <p>The rescan duration configured for image push date.</p>
     */
    inline EcrConfiguration& WithRescanDuration(EcrRescanDuration&& value) { SetRescanDuration(std::move(value)); return *this;}

  private:

    EcrPullDateRescanDuration m_pullDateRescanDuration;
    bool m_pullDateRescanDurationHasBeenSet = false;

    EcrRescanDuration m_rescanDuration;
    bool m_rescanDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
