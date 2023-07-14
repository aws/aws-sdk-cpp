/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/AddonVersionInfo.h>
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
   * <p>Information about an add-on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonInfo">AWS API
   * Reference</a></p>
   */
  class AWS_EKS_API AddonInfo
  {
  public:
    AddonInfo();
    AddonInfo(Aws::Utils::Json::JsonView jsonValue);
    AddonInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the add-on.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }

    /**
     * <p>The name of the add-on.</p>
     */
    inline AddonInfo& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}

    /**
     * <p>The name of the add-on.</p>
     */
    inline AddonInfo& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}

    /**
     * <p>The name of the add-on.</p>
     */
    inline AddonInfo& WithAddonName(const char* value) { SetAddonName(value); return *this;}


    /**
     * <p>The type of the add-on.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the add-on.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the add-on.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the add-on.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the add-on.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the add-on.</p>
     */
    inline AddonInfo& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the add-on.</p>
     */
    inline AddonInfo& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the add-on.</p>
     */
    inline AddonInfo& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>An object that represents information about available add-on versions and
     * compatible Kubernetes versions.</p>
     */
    inline const Aws::Vector<AddonVersionInfo>& GetAddonVersions() const{ return m_addonVersions; }

    /**
     * <p>An object that represents information about available add-on versions and
     * compatible Kubernetes versions.</p>
     */
    inline bool AddonVersionsHasBeenSet() const { return m_addonVersionsHasBeenSet; }

    /**
     * <p>An object that represents information about available add-on versions and
     * compatible Kubernetes versions.</p>
     */
    inline void SetAddonVersions(const Aws::Vector<AddonVersionInfo>& value) { m_addonVersionsHasBeenSet = true; m_addonVersions = value; }

    /**
     * <p>An object that represents information about available add-on versions and
     * compatible Kubernetes versions.</p>
     */
    inline void SetAddonVersions(Aws::Vector<AddonVersionInfo>&& value) { m_addonVersionsHasBeenSet = true; m_addonVersions = std::move(value); }

    /**
     * <p>An object that represents information about available add-on versions and
     * compatible Kubernetes versions.</p>
     */
    inline AddonInfo& WithAddonVersions(const Aws::Vector<AddonVersionInfo>& value) { SetAddonVersions(value); return *this;}

    /**
     * <p>An object that represents information about available add-on versions and
     * compatible Kubernetes versions.</p>
     */
    inline AddonInfo& WithAddonVersions(Aws::Vector<AddonVersionInfo>&& value) { SetAddonVersions(std::move(value)); return *this;}

    /**
     * <p>An object that represents information about available add-on versions and
     * compatible Kubernetes versions.</p>
     */
    inline AddonInfo& AddAddonVersions(const AddonVersionInfo& value) { m_addonVersionsHasBeenSet = true; m_addonVersions.push_back(value); return *this; }

    /**
     * <p>An object that represents information about available add-on versions and
     * compatible Kubernetes versions.</p>
     */
    inline AddonInfo& AddAddonVersions(AddonVersionInfo&& value) { m_addonVersionsHasBeenSet = true; m_addonVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<AddonVersionInfo> m_addonVersions;
    bool m_addonVersionsHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
