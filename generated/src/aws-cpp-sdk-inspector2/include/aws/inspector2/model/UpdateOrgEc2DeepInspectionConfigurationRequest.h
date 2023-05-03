/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class UpdateOrgEc2DeepInspectionConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API UpdateOrgEc2DeepInspectionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrgEc2DeepInspectionConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrgPackagePaths() const{ return m_orgPackagePaths; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * organization.</p>
     */
    inline bool OrgPackagePathsHasBeenSet() const { return m_orgPackagePathsHasBeenSet; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * organization.</p>
     */
    inline void SetOrgPackagePaths(const Aws::Vector<Aws::String>& value) { m_orgPackagePathsHasBeenSet = true; m_orgPackagePaths = value; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * organization.</p>
     */
    inline void SetOrgPackagePaths(Aws::Vector<Aws::String>&& value) { m_orgPackagePathsHasBeenSet = true; m_orgPackagePaths = std::move(value); }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * organization.</p>
     */
    inline UpdateOrgEc2DeepInspectionConfigurationRequest& WithOrgPackagePaths(const Aws::Vector<Aws::String>& value) { SetOrgPackagePaths(value); return *this;}

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * organization.</p>
     */
    inline UpdateOrgEc2DeepInspectionConfigurationRequest& WithOrgPackagePaths(Aws::Vector<Aws::String>&& value) { SetOrgPackagePaths(std::move(value)); return *this;}

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * organization.</p>
     */
    inline UpdateOrgEc2DeepInspectionConfigurationRequest& AddOrgPackagePaths(const Aws::String& value) { m_orgPackagePathsHasBeenSet = true; m_orgPackagePaths.push_back(value); return *this; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * organization.</p>
     */
    inline UpdateOrgEc2DeepInspectionConfigurationRequest& AddOrgPackagePaths(Aws::String&& value) { m_orgPackagePathsHasBeenSet = true; m_orgPackagePaths.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * organization.</p>
     */
    inline UpdateOrgEc2DeepInspectionConfigurationRequest& AddOrgPackagePaths(const char* value) { m_orgPackagePathsHasBeenSet = true; m_orgPackagePaths.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_orgPackagePaths;
    bool m_orgPackagePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
