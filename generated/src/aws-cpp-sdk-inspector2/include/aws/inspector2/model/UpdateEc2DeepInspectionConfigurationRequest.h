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
  class UpdateEc2DeepInspectionConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API UpdateEc2DeepInspectionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEc2DeepInspectionConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>Specify <code>TRUE</code> to activate Amazon Inspector deep inspection in
     * your account, or <code>FALSE</code> to deactivate. Member accounts in an
     * organization cannot deactivate deep inspection, instead the delegated
     * administrator for the organization can deactivate a member account using <a
     * href="https://docs.aws.amazon.com/inspector/v2/APIReference/API_BatchUpdateMemberEc2DeepInspectionStatus.html">BatchUpdateMemberEc2DeepInspectionStatus</a>.</p>
     */
    inline bool GetActivateDeepInspection() const{ return m_activateDeepInspection; }

    /**
     * <p>Specify <code>TRUE</code> to activate Amazon Inspector deep inspection in
     * your account, or <code>FALSE</code> to deactivate. Member accounts in an
     * organization cannot deactivate deep inspection, instead the delegated
     * administrator for the organization can deactivate a member account using <a
     * href="https://docs.aws.amazon.com/inspector/v2/APIReference/API_BatchUpdateMemberEc2DeepInspectionStatus.html">BatchUpdateMemberEc2DeepInspectionStatus</a>.</p>
     */
    inline bool ActivateDeepInspectionHasBeenSet() const { return m_activateDeepInspectionHasBeenSet; }

    /**
     * <p>Specify <code>TRUE</code> to activate Amazon Inspector deep inspection in
     * your account, or <code>FALSE</code> to deactivate. Member accounts in an
     * organization cannot deactivate deep inspection, instead the delegated
     * administrator for the organization can deactivate a member account using <a
     * href="https://docs.aws.amazon.com/inspector/v2/APIReference/API_BatchUpdateMemberEc2DeepInspectionStatus.html">BatchUpdateMemberEc2DeepInspectionStatus</a>.</p>
     */
    inline void SetActivateDeepInspection(bool value) { m_activateDeepInspectionHasBeenSet = true; m_activateDeepInspection = value; }

    /**
     * <p>Specify <code>TRUE</code> to activate Amazon Inspector deep inspection in
     * your account, or <code>FALSE</code> to deactivate. Member accounts in an
     * organization cannot deactivate deep inspection, instead the delegated
     * administrator for the organization can deactivate a member account using <a
     * href="https://docs.aws.amazon.com/inspector/v2/APIReference/API_BatchUpdateMemberEc2DeepInspectionStatus.html">BatchUpdateMemberEc2DeepInspectionStatus</a>.</p>
     */
    inline UpdateEc2DeepInspectionConfigurationRequest& WithActivateDeepInspection(bool value) { SetActivateDeepInspection(value); return *this;}


    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackagePaths() const{ return m_packagePaths; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * account.</p>
     */
    inline bool PackagePathsHasBeenSet() const { return m_packagePathsHasBeenSet; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * account.</p>
     */
    inline void SetPackagePaths(const Aws::Vector<Aws::String>& value) { m_packagePathsHasBeenSet = true; m_packagePaths = value; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * account.</p>
     */
    inline void SetPackagePaths(Aws::Vector<Aws::String>&& value) { m_packagePathsHasBeenSet = true; m_packagePaths = std::move(value); }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * account.</p>
     */
    inline UpdateEc2DeepInspectionConfigurationRequest& WithPackagePaths(const Aws::Vector<Aws::String>& value) { SetPackagePaths(value); return *this;}

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * account.</p>
     */
    inline UpdateEc2DeepInspectionConfigurationRequest& WithPackagePaths(Aws::Vector<Aws::String>&& value) { SetPackagePaths(std::move(value)); return *this;}

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * account.</p>
     */
    inline UpdateEc2DeepInspectionConfigurationRequest& AddPackagePaths(const Aws::String& value) { m_packagePathsHasBeenSet = true; m_packagePaths.push_back(value); return *this; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * account.</p>
     */
    inline UpdateEc2DeepInspectionConfigurationRequest& AddPackagePaths(Aws::String&& value) { m_packagePathsHasBeenSet = true; m_packagePaths.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * account.</p>
     */
    inline UpdateEc2DeepInspectionConfigurationRequest& AddPackagePaths(const char* value) { m_packagePathsHasBeenSet = true; m_packagePaths.push_back(value); return *this; }

  private:

    bool m_activateDeepInspection;
    bool m_activateDeepInspectionHasBeenSet = false;

    Aws::Vector<Aws::String> m_packagePaths;
    bool m_packagePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
