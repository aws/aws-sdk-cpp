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
    AWS_CODEDEPLOY_API RelatedDeployments() = default;
    AWS_CODEDEPLOY_API RelatedDeployments(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API RelatedDeployments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deployment ID of the root deployment that triggered this deployment.</p>
     */
    inline const Aws::String& GetAutoUpdateOutdatedInstancesRootDeploymentId() const { return m_autoUpdateOutdatedInstancesRootDeploymentId; }
    inline bool AutoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet() const { return m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet; }
    template<typename AutoUpdateOutdatedInstancesRootDeploymentIdT = Aws::String>
    void SetAutoUpdateOutdatedInstancesRootDeploymentId(AutoUpdateOutdatedInstancesRootDeploymentIdT&& value) { m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet = true; m_autoUpdateOutdatedInstancesRootDeploymentId = std::forward<AutoUpdateOutdatedInstancesRootDeploymentIdT>(value); }
    template<typename AutoUpdateOutdatedInstancesRootDeploymentIdT = Aws::String>
    RelatedDeployments& WithAutoUpdateOutdatedInstancesRootDeploymentId(AutoUpdateOutdatedInstancesRootDeploymentIdT&& value) { SetAutoUpdateOutdatedInstancesRootDeploymentId(std::forward<AutoUpdateOutdatedInstancesRootDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment IDs of 'auto-update outdated instances' deployments triggered
     * by this deployment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoUpdateOutdatedInstancesDeploymentIds() const { return m_autoUpdateOutdatedInstancesDeploymentIds; }
    inline bool AutoUpdateOutdatedInstancesDeploymentIdsHasBeenSet() const { return m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet; }
    template<typename AutoUpdateOutdatedInstancesDeploymentIdsT = Aws::Vector<Aws::String>>
    void SetAutoUpdateOutdatedInstancesDeploymentIds(AutoUpdateOutdatedInstancesDeploymentIdsT&& value) { m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet = true; m_autoUpdateOutdatedInstancesDeploymentIds = std::forward<AutoUpdateOutdatedInstancesDeploymentIdsT>(value); }
    template<typename AutoUpdateOutdatedInstancesDeploymentIdsT = Aws::Vector<Aws::String>>
    RelatedDeployments& WithAutoUpdateOutdatedInstancesDeploymentIds(AutoUpdateOutdatedInstancesDeploymentIdsT&& value) { SetAutoUpdateOutdatedInstancesDeploymentIds(std::forward<AutoUpdateOutdatedInstancesDeploymentIdsT>(value)); return *this;}
    template<typename AutoUpdateOutdatedInstancesDeploymentIdsT = Aws::String>
    RelatedDeployments& AddAutoUpdateOutdatedInstancesDeploymentIds(AutoUpdateOutdatedInstancesDeploymentIdsT&& value) { m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet = true; m_autoUpdateOutdatedInstancesDeploymentIds.emplace_back(std::forward<AutoUpdateOutdatedInstancesDeploymentIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoUpdateOutdatedInstancesRootDeploymentId;
    bool m_autoUpdateOutdatedInstancesRootDeploymentIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoUpdateOutdatedInstancesDeploymentIds;
    bool m_autoUpdateOutdatedInstancesDeploymentIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
