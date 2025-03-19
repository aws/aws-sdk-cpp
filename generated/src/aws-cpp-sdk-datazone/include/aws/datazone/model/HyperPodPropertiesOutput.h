/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/HyperPodOrchestrator.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The hyper pod properties of a Amazon Web Services Glue properties
   * patch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/HyperPodPropertiesOutput">AWS
   * API Reference</a></p>
   */
  class HyperPodPropertiesOutput
  {
  public:
    AWS_DATAZONE_API HyperPodPropertiesOutput() = default;
    AWS_DATAZONE_API HyperPodPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API HyperPodPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster ARN of the hyper pod properties.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    HyperPodPropertiesOutput& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster name the hyper pod properties.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    HyperPodPropertiesOutput& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The orchestrator of the hyper pod properties.</p>
     */
    inline HyperPodOrchestrator GetOrchestrator() const { return m_orchestrator; }
    inline bool OrchestratorHasBeenSet() const { return m_orchestratorHasBeenSet; }
    inline void SetOrchestrator(HyperPodOrchestrator value) { m_orchestratorHasBeenSet = true; m_orchestrator = value; }
    inline HyperPodPropertiesOutput& WithOrchestrator(HyperPodOrchestrator value) { SetOrchestrator(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    HyperPodOrchestrator m_orchestrator{HyperPodOrchestrator::NOT_SET};
    bool m_orchestratorHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
