/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/DeploymentLifecycle.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Contains a summary of a deployed application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DeployedVersionSummary">AWS
   * API Reference</a></p>
   */
  class DeployedVersionSummary
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DeployedVersionSummary();
    AWS_MAINFRAMEMODERNIZATION_API DeployedVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DeployedVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the deployed application.</p>
     */
    inline int GetApplicationVersion() const{ return m_applicationVersion; }
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }
    inline void SetApplicationVersion(int value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }
    inline DeployedVersionSummary& WithApplicationVersion(int value) { SetApplicationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment.</p>
     */
    inline const DeploymentLifecycle& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DeploymentLifecycle& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DeploymentLifecycle&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DeployedVersionSummary& WithStatus(const DeploymentLifecycle& value) { SetStatus(value); return *this;}
    inline DeployedVersionSummary& WithStatus(DeploymentLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline DeployedVersionSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline DeployedVersionSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline DeployedVersionSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    int m_applicationVersion;
    bool m_applicationVersionHasBeenSet = false;

    DeploymentLifecycle m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
