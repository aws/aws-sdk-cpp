/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/RecommendationRelatedAnomalyResource.h>
#include <aws/devops-guru/model/RecommendationRelatedAnomalySourceDetail.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about an anomaly that is related to a recommendation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RecommendationRelatedAnomaly">AWS
   * API Reference</a></p>
   */
  class RecommendationRelatedAnomaly
  {
  public:
    AWS_DEVOPSGURU_API RecommendationRelatedAnomaly() = default;
    AWS_DEVOPSGURU_API RecommendationRelatedAnomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API RecommendationRelatedAnomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An array of objects that represent resources in which DevOps Guru detected
     * anomalous behavior. Each object contains the name and type of the resource. </p>
     */
    inline const Aws::Vector<RecommendationRelatedAnomalyResource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<RecommendationRelatedAnomalyResource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<RecommendationRelatedAnomalyResource>>
    RecommendationRelatedAnomaly& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = RecommendationRelatedAnomalyResource>
    RecommendationRelatedAnomaly& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Information about where the anomalous behavior related the recommendation
     * was found. For example, details in Amazon CloudWatch metrics. </p>
     */
    inline const Aws::Vector<RecommendationRelatedAnomalySourceDetail>& GetSourceDetails() const { return m_sourceDetails; }
    inline bool SourceDetailsHasBeenSet() const { return m_sourceDetailsHasBeenSet; }
    template<typename SourceDetailsT = Aws::Vector<RecommendationRelatedAnomalySourceDetail>>
    void SetSourceDetails(SourceDetailsT&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = std::forward<SourceDetailsT>(value); }
    template<typename SourceDetailsT = Aws::Vector<RecommendationRelatedAnomalySourceDetail>>
    RecommendationRelatedAnomaly& WithSourceDetails(SourceDetailsT&& value) { SetSourceDetails(std::forward<SourceDetailsT>(value)); return *this;}
    template<typename SourceDetailsT = RecommendationRelatedAnomalySourceDetail>
    RecommendationRelatedAnomaly& AddSourceDetails(SourceDetailsT&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails.emplace_back(std::forward<SourceDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of an anomaly that generated the insight with this recommendation.</p>
     */
    inline const Aws::String& GetAnomalyId() const { return m_anomalyId; }
    inline bool AnomalyIdHasBeenSet() const { return m_anomalyIdHasBeenSet; }
    template<typename AnomalyIdT = Aws::String>
    void SetAnomalyId(AnomalyIdT&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::forward<AnomalyIdT>(value); }
    template<typename AnomalyIdT = Aws::String>
    RecommendationRelatedAnomaly& WithAnomalyId(AnomalyIdT&& value) { SetAnomalyId(std::forward<AnomalyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecommendationRelatedAnomalyResource> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::Vector<RecommendationRelatedAnomalySourceDetail> m_sourceDetails;
    bool m_sourceDetailsHasBeenSet = false;

    Aws::String m_anomalyId;
    bool m_anomalyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
