/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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

  class AWS_DEVOPSGURU_API RecommendationRelatedAnomaly
  {
  public:
    RecommendationRelatedAnomaly();
    RecommendationRelatedAnomaly(Aws::Utils::Json::JsonView jsonValue);
    RecommendationRelatedAnomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<RecommendationRelatedAnomalyResource>& GetResources() const{ return m_resources; }

    
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    
    inline void SetResources(const Aws::Vector<RecommendationRelatedAnomalyResource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    
    inline void SetResources(Aws::Vector<RecommendationRelatedAnomalyResource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    
    inline RecommendationRelatedAnomaly& WithResources(const Aws::Vector<RecommendationRelatedAnomalyResource>& value) { SetResources(value); return *this;}

    
    inline RecommendationRelatedAnomaly& WithResources(Aws::Vector<RecommendationRelatedAnomalyResource>&& value) { SetResources(std::move(value)); return *this;}

    
    inline RecommendationRelatedAnomaly& AddResources(const RecommendationRelatedAnomalyResource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    
    inline RecommendationRelatedAnomaly& AddResources(RecommendationRelatedAnomalyResource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<RecommendationRelatedAnomalySourceDetail>& GetSourceDetails() const{ return m_sourceDetails; }

    
    inline bool SourceDetailsHasBeenSet() const { return m_sourceDetailsHasBeenSet; }

    
    inline void SetSourceDetails(const Aws::Vector<RecommendationRelatedAnomalySourceDetail>& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = value; }

    
    inline void SetSourceDetails(Aws::Vector<RecommendationRelatedAnomalySourceDetail>&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = std::move(value); }

    
    inline RecommendationRelatedAnomaly& WithSourceDetails(const Aws::Vector<RecommendationRelatedAnomalySourceDetail>& value) { SetSourceDetails(value); return *this;}

    
    inline RecommendationRelatedAnomaly& WithSourceDetails(Aws::Vector<RecommendationRelatedAnomalySourceDetail>&& value) { SetSourceDetails(std::move(value)); return *this;}

    
    inline RecommendationRelatedAnomaly& AddSourceDetails(const RecommendationRelatedAnomalySourceDetail& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails.push_back(value); return *this; }

    
    inline RecommendationRelatedAnomaly& AddSourceDetails(RecommendationRelatedAnomalySourceDetail&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RecommendationRelatedAnomalyResource> m_resources;
    bool m_resourcesHasBeenSet;

    Aws::Vector<RecommendationRelatedAnomalySourceDetail> m_sourceDetails;
    bool m_sourceDetailsHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
