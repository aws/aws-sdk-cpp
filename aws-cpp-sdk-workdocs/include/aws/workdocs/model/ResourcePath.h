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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/ResourcePathComponent.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the path information of a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ResourcePath">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API ResourcePath
  {
  public:
    ResourcePath();
    ResourcePath(Aws::Utils::Json::JsonView jsonValue);
    ResourcePath& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The components of the resource path.</p>
     */
    inline const Aws::Vector<ResourcePathComponent>& GetComponents() const{ return m_components; }

    /**
     * <p>The components of the resource path.</p>
     */
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }

    /**
     * <p>The components of the resource path.</p>
     */
    inline void SetComponents(const Aws::Vector<ResourcePathComponent>& value) { m_componentsHasBeenSet = true; m_components = value; }

    /**
     * <p>The components of the resource path.</p>
     */
    inline void SetComponents(Aws::Vector<ResourcePathComponent>&& value) { m_componentsHasBeenSet = true; m_components = std::move(value); }

    /**
     * <p>The components of the resource path.</p>
     */
    inline ResourcePath& WithComponents(const Aws::Vector<ResourcePathComponent>& value) { SetComponents(value); return *this;}

    /**
     * <p>The components of the resource path.</p>
     */
    inline ResourcePath& WithComponents(Aws::Vector<ResourcePathComponent>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>The components of the resource path.</p>
     */
    inline ResourcePath& AddComponents(const ResourcePathComponent& value) { m_componentsHasBeenSet = true; m_components.push_back(value); return *this; }

    /**
     * <p>The components of the resource path.</p>
     */
    inline ResourcePath& AddComponents(ResourcePathComponent&& value) { m_componentsHasBeenSet = true; m_components.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ResourcePathComponent> m_components;
    bool m_componentsHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
