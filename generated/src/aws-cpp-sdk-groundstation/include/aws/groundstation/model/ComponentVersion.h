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
    AWS_GROUNDSTATION_API ComponentVersion();
    AWS_GROUNDSTATION_API ComponentVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API ComponentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Component type.</p>
     */
    inline const Aws::String& GetComponentType() const{ return m_componentType; }

    /**
     * <p>Component type.</p>
     */
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }

    /**
     * <p>Component type.</p>
     */
    inline void SetComponentType(const Aws::String& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }

    /**
     * <p>Component type.</p>
     */
    inline void SetComponentType(Aws::String&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }

    /**
     * <p>Component type.</p>
     */
    inline void SetComponentType(const char* value) { m_componentTypeHasBeenSet = true; m_componentType.assign(value); }

    /**
     * <p>Component type.</p>
     */
    inline ComponentVersion& WithComponentType(const Aws::String& value) { SetComponentType(value); return *this;}

    /**
     * <p>Component type.</p>
     */
    inline ComponentVersion& WithComponentType(Aws::String&& value) { SetComponentType(std::move(value)); return *this;}

    /**
     * <p>Component type.</p>
     */
    inline ComponentVersion& WithComponentType(const char* value) { SetComponentType(value); return *this;}


    /**
     * <p>List of versions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }

    /**
     * <p>List of versions.</p>
     */
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }

    /**
     * <p>List of versions.</p>
     */
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versionsHasBeenSet = true; m_versions = value; }

    /**
     * <p>List of versions.</p>
     */
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }

    /**
     * <p>List of versions.</p>
     */
    inline ComponentVersion& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}

    /**
     * <p>List of versions.</p>
     */
    inline ComponentVersion& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p>List of versions.</p>
     */
    inline ComponentVersion& AddVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }

    /**
     * <p>List of versions.</p>
     */
    inline ComponentVersion& AddVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions.push_back(std::move(value)); return *this; }

    /**
     * <p>List of versions.</p>
     */
    inline ComponentVersion& AddVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }

  private:

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
