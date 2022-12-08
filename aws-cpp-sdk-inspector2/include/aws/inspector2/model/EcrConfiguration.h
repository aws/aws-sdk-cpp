/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline const EcrRescanDuration& GetRescanDuration() const{ return m_rescanDuration; }

    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline bool RescanDurationHasBeenSet() const { return m_rescanDurationHasBeenSet; }

    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline void SetRescanDuration(const EcrRescanDuration& value) { m_rescanDurationHasBeenSet = true; m_rescanDuration = value; }

    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline void SetRescanDuration(EcrRescanDuration&& value) { m_rescanDurationHasBeenSet = true; m_rescanDuration = std::move(value); }

    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline EcrConfiguration& WithRescanDuration(const EcrRescanDuration& value) { SetRescanDuration(value); return *this;}

    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline EcrConfiguration& WithRescanDuration(EcrRescanDuration&& value) { SetRescanDuration(std::move(value)); return *this;}

  private:

    EcrRescanDuration m_rescanDuration;
    bool m_rescanDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
