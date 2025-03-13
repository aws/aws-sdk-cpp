/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Version information for agent components.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ComponentVersion">AWS
   * API Reference</a></p>
   */
  class ComponentVersion
  {
  public:
    AWS_GROUNDSTATION_API ComponentVersion() = default;
    AWS_GROUNDSTATION_API ComponentVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API ComponentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Component type.</p>
     */
    inline const Aws::String& GetComponentType() const { return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    template<typename ComponentTypeT = Aws::String>
    void SetComponentType(ComponentTypeT&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::forward<ComponentTypeT>(value); }
    template<typename ComponentTypeT = Aws::String>
    ComponentVersion& WithComponentType(ComponentTypeT&& value) { SetComponentType(std::forward<ComponentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of versions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const { return m_versions; }
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }
    template<typename VersionsT = Aws::Vector<Aws::String>>
    void SetVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions = std::forward<VersionsT>(value); }
    template<typename VersionsT = Aws::Vector<Aws::String>>
    ComponentVersion& WithVersions(VersionsT&& value) { SetVersions(std::forward<VersionsT>(value)); return *this;}
    template<typename VersionsT = Aws::String>
    ComponentVersion& AddVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions.emplace_back(std::forward<VersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
