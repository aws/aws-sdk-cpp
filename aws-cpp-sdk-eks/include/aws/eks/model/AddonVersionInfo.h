/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/Compatibility.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Information about an add-on version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonVersionInfo">AWS
   * API Reference</a></p>
   */
  class AWS_EKS_API AddonVersionInfo
  {
  public:
    AddonVersionInfo();
    AddonVersionInfo(Aws::Utils::Json::JsonView jsonValue);
    AddonVersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the add-on.</p>
     */
    inline const Aws::String& GetAddonVersion() const{ return m_addonVersion; }

    /**
     * <p>The version of the add-on.</p>
     */
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }

    /**
     * <p>The version of the add-on.</p>
     */
    inline void SetAddonVersion(const Aws::String& value) { m_addonVersionHasBeenSet = true; m_addonVersion = value; }

    /**
     * <p>The version of the add-on.</p>
     */
    inline void SetAddonVersion(Aws::String&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::move(value); }

    /**
     * <p>The version of the add-on.</p>
     */
    inline void SetAddonVersion(const char* value) { m_addonVersionHasBeenSet = true; m_addonVersion.assign(value); }

    /**
     * <p>The version of the add-on.</p>
     */
    inline AddonVersionInfo& WithAddonVersion(const Aws::String& value) { SetAddonVersion(value); return *this;}

    /**
     * <p>The version of the add-on.</p>
     */
    inline AddonVersionInfo& WithAddonVersion(Aws::String&& value) { SetAddonVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the add-on.</p>
     */
    inline AddonVersionInfo& WithAddonVersion(const char* value) { SetAddonVersion(value); return *this;}


    /**
     * <p>The architectures that the version supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architectures that the version supports.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architectures that the version supports.</p>
     */
    inline void SetArchitecture(const Aws::Vector<Aws::String>& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architectures that the version supports.</p>
     */
    inline void SetArchitecture(Aws::Vector<Aws::String>&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architectures that the version supports.</p>
     */
    inline AddonVersionInfo& WithArchitecture(const Aws::Vector<Aws::String>& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architectures that the version supports.</p>
     */
    inline AddonVersionInfo& WithArchitecture(Aws::Vector<Aws::String>&& value) { SetArchitecture(std::move(value)); return *this;}

    /**
     * <p>The architectures that the version supports.</p>
     */
    inline AddonVersionInfo& AddArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture.push_back(value); return *this; }

    /**
     * <p>The architectures that the version supports.</p>
     */
    inline AddonVersionInfo& AddArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture.push_back(std::move(value)); return *this; }

    /**
     * <p>The architectures that the version supports.</p>
     */
    inline AddonVersionInfo& AddArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.push_back(value); return *this; }


    /**
     * <p>An object that represents the compatibilities of a version.</p>
     */
    inline const Aws::Vector<Compatibility>& GetCompatibilities() const{ return m_compatibilities; }

    /**
     * <p>An object that represents the compatibilities of a version.</p>
     */
    inline bool CompatibilitiesHasBeenSet() const { return m_compatibilitiesHasBeenSet; }

    /**
     * <p>An object that represents the compatibilities of a version.</p>
     */
    inline void SetCompatibilities(const Aws::Vector<Compatibility>& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities = value; }

    /**
     * <p>An object that represents the compatibilities of a version.</p>
     */
    inline void SetCompatibilities(Aws::Vector<Compatibility>&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities = std::move(value); }

    /**
     * <p>An object that represents the compatibilities of a version.</p>
     */
    inline AddonVersionInfo& WithCompatibilities(const Aws::Vector<Compatibility>& value) { SetCompatibilities(value); return *this;}

    /**
     * <p>An object that represents the compatibilities of a version.</p>
     */
    inline AddonVersionInfo& WithCompatibilities(Aws::Vector<Compatibility>&& value) { SetCompatibilities(std::move(value)); return *this;}

    /**
     * <p>An object that represents the compatibilities of a version.</p>
     */
    inline AddonVersionInfo& AddCompatibilities(const Compatibility& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities.push_back(value); return *this; }

    /**
     * <p>An object that represents the compatibilities of a version.</p>
     */
    inline AddonVersionInfo& AddCompatibilities(Compatibility&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet;

    Aws::Vector<Aws::String> m_architecture;
    bool m_architectureHasBeenSet;

    Aws::Vector<Compatibility> m_compatibilities;
    bool m_compatibilitiesHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
