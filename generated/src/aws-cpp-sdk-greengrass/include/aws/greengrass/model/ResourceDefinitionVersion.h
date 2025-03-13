/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Resource.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a resource definition version.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResourceDefinitionVersion">AWS
   * API Reference</a></p>
   */
  class ResourceDefinitionVersion
  {
  public:
    AWS_GREENGRASS_API ResourceDefinitionVersion() = default;
    AWS_GREENGRASS_API ResourceDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API ResourceDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A list of resources.
     */
    inline const Aws::Vector<Resource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Resource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Resource>>
    ResourceDefinitionVersion& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Resource>
    ResourceDefinitionVersion& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
