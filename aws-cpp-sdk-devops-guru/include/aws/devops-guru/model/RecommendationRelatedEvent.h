/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/RecommendationRelatedEventResource.h>
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

  class AWS_DEVOPSGURU_API RecommendationRelatedEvent
  {
  public:
    RecommendationRelatedEvent();
    RecommendationRelatedEvent(Aws::Utils::Json::JsonView jsonValue);
    RecommendationRelatedEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline RecommendationRelatedEvent& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline RecommendationRelatedEvent& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline RecommendationRelatedEvent& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Vector<RecommendationRelatedEventResource>& GetResources() const{ return m_resources; }

    
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    
    inline void SetResources(const Aws::Vector<RecommendationRelatedEventResource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    
    inline void SetResources(Aws::Vector<RecommendationRelatedEventResource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    
    inline RecommendationRelatedEvent& WithResources(const Aws::Vector<RecommendationRelatedEventResource>& value) { SetResources(value); return *this;}

    
    inline RecommendationRelatedEvent& WithResources(Aws::Vector<RecommendationRelatedEventResource>&& value) { SetResources(std::move(value)); return *this;}

    
    inline RecommendationRelatedEvent& AddResources(const RecommendationRelatedEventResource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    
    inline RecommendationRelatedEvent& AddResources(RecommendationRelatedEventResource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<RecommendationRelatedEventResource> m_resources;
    bool m_resourcesHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
