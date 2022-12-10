/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about deployments related to the specified
   * deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RelatedDeployments">AWS
   * API Reference</a></p>
   */
  class RelatedDeployments
  {
  public:
    AWS_CODEDEPLOY_API RelatedDeployments();
    AWS_CODEDEPLOY_API RelatedDeployments(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API RelatedDeployments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The deployment ID of the root deployment that triggered this deployment.</p>
     */
    inline const Aws::String& GetAutoUpdateOutdatedInstancesRootDeploymentId() const{ return m_autoUpdateOutdatedInstancesRootDeploymentId; }

    /**
     * <p>The deployment ID of the root deployment that triggered this deployment.</p>
     */
    inline bool AutoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet() const { return m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet; }

    /**
     * <p>The deployment ID of the root deployment that triggered this deployment.</p>
     */
    inline void SetAutoUpdateOutdatedInstancesRootDeploymentId(const Aws::String& value) { m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet = true; m_autoUpdateOutdatedInstancesRootDeploymentId = value; }

    /**
     * <p>The deployment ID of the root deployment that triggered this deployment.</p>
     */
    inline void SetAutoUpdateOutdatedInstancesRootDeploymentId(Aws::String&& value) { m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet = true; m_autoUpdateOutdatedInstancesRootDeploymentId = std::move(value); }

    /**
     * <p>The deployment ID of the root deployment that triggered this deployment.</p>
     */
    inline void SetAutoUpdateOutdatedInstancesRootDeploymentId(const char* value) { m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet = true; m_autoUpdateOutdatedInstancesRootDeploymentId.assign(value); }

    /**
     * <p>The deployment ID of the root deployment that triggered this deployment.</p>
     */
    inline RelatedDeployments& WithAutoUpdateOutdatedInstancesRootDeploymentId(const Aws::String& value) { SetAutoUpdateOutdatedInstancesRootDeploymentId(value); return *this;}

    /**
     * <p>The deployment ID of the root deployment that triggered this deployment.</p>
     */
    inline RelatedDeployments& WithAutoUpdateOutdatedInstancesRootDeploymentId(Aws::String&& value) { SetAutoUpdateOutdatedInstancesRootDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The deployment ID of the root deployment that triggered this deployment.</p>
     */
    inline RelatedDeployments& WithAutoUpdateOutdatedInstancesRootDeploymentId(const char* value) { SetAutoUpdateOutdatedInstancesRootDeploymentId(value); return *this;}


    /**
     * <p>The deployment IDs of 'auto-update outdated instances' deployments triggered
     * by this deployment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoUpdateOutdatedInstancesDeploymentIds() const{ return m_autoUpdateOutdatedInstancesDeploymentIds; }

    /**
     * <p>The deployment IDs of 'auto-update outdated instances' deployments triggered
     * by this deployment.</p>
     */
    inline bool AutoUpdateOutdatedInstancesDeploymentIdsHasBeenSet() const { return m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet; }

    /**
     * <p>The deployment IDs of 'auto-update outdated instances' deployments triggered
     * by this deployment.</p>
     */
    inline void SetAutoUpdateOutdatedInstancesDeploymentIds(const Aws::Vector<Aws::String>& value) { m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet = true; m_autoUpdateOutdatedInstancesDeploymentIds = value; }

    /**
     * <p>The deployment IDs of 'auto-update outdated instances' deployments triggered
     * by this deployment.</p>
     */
    inline void SetAutoUpdateOutdatedInstancesDeploymentIds(Aws::Vector<Aws::String>&& value) { m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet = true; m_autoUpdateOutdatedInstancesDeploymentIds = std::move(value); }

    /**
     * <p>The deployment IDs of 'auto-update outdated instances' deployments triggered
     * by this deployment.</p>
     */
    inline RelatedDeployments& WithAutoUpdateOutdatedInstancesDeploymentIds(const Aws::Vector<Aws::String>& value) { SetAutoUpdateOutdatedInstancesDeploymentIds(value); return *this;}

    /**
     * <p>The deployment IDs of 'auto-update outdated instances' deployments triggered
     * by this deployment.</p>
     */
    inline RelatedDeployments& WithAutoUpdateOutdatedInstancesDeploymentIds(Aws::Vector<Aws::String>&& value) { SetAutoUpdateOutdatedInstancesDeploymentIds(std::move(value)); return *this;}

    /**
     * <p>The deployment IDs of 'auto-update outdated instances' deployments triggered
     * by this deployment.</p>
     */
    inline RelatedDeployments& AddAutoUpdateOutdatedInstancesDeploymentIds(const Aws::String& value) { m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet = true; m_autoUpdateOutdatedInstancesDeploymentIds.push_back(value); return *this; }

    /**
     * <p>The deployment IDs of 'auto-update outdated instances' deployments triggered
     * by this deployment.</p>
     */
    inline RelatedDeployments& AddAutoUpdateOutdatedInstancesDeploymentIds(Aws::String&& value) { m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet = true; m_autoUpdateOutdatedInstancesDeploymentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The deployment IDs of 'auto-update outdated instances' deployments triggered
     * by this deployment.</p>
     */
    inline RelatedDeployments& AddAutoUpdateOutdatedInstancesDeploymentIds(const char* value) { m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet = true; m_autoUpdateOutdatedInstancesDeploymentIds.push_back(value); return *this; }

  private:

    Aws::String m_autoUpdateOutdatedInstancesRootDeploymentId;
    bool m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoUpdateOutdatedInstancesDeploymentIds;
    bool m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
