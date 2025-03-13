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

  /**
   * <p> Information about an event that is related to a recommendation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RecommendationRelatedEvent">AWS
   * API Reference</a></p>
   */
  class RecommendationRelatedEvent
  {
  public:
    AWS_DEVOPSGURU_API RecommendationRelatedEvent() = default;
    AWS_DEVOPSGURU_API RecommendationRelatedEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API RecommendationRelatedEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the event. This corresponds to the <code>Name</code> field in an
     * <code>Event</code> object. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RecommendationRelatedEvent& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ResourceCollection</code> object that contains arrays of the names
     * of Amazon Web Services CloudFormation stacks. You can specify up to 500 Amazon
     * Web Services CloudFormation stacks. </p>
     */
    inline const Aws::Vector<RecommendationRelatedEventResource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<RecommendationRelatedEventResource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<RecommendationRelatedEventResource>>
    RecommendationRelatedEvent& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = RecommendationRelatedEventResource>
    RecommendationRelatedEvent& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RecommendationRelatedEventResource> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
