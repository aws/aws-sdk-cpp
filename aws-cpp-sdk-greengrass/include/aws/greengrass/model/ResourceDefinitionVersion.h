/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GREENGRASS_API ResourceDefinitionVersion
  {
  public:
    ResourceDefinitionVersion();
    ResourceDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    ResourceDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of resources.
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * A list of resources.
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * A list of resources.
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * A list of resources.
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * A list of resources.
     */
    inline ResourceDefinitionVersion& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * A list of resources.
     */
    inline ResourceDefinitionVersion& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * A list of resources.
     */
    inline ResourceDefinitionVersion& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * A list of resources.
     */
    inline ResourceDefinitionVersion& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
