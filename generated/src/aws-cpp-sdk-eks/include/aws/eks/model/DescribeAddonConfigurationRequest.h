/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EKS
{
namespace Model
{

  /**
   */
  class DescribeAddonConfigurationRequest : public EKSRequest
  {
  public:
    AWS_EKS_API DescribeAddonConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAddonConfiguration"; }

    AWS_EKS_API Aws::String SerializePayload() const override;

    AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the add-on. The name must match one of the names returned by
     * <code>DescribeAddonVersions</code>.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }
    inline DescribeAddonConfigurationRequest& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}
    inline DescribeAddonConfigurationRequest& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}
    inline DescribeAddonConfigurationRequest& WithAddonName(const char* value) { SetAddonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline const Aws::String& GetAddonVersion() const{ return m_addonVersion; }
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }
    inline void SetAddonVersion(const Aws::String& value) { m_addonVersionHasBeenSet = true; m_addonVersion = value; }
    inline void SetAddonVersion(Aws::String&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::move(value); }
    inline void SetAddonVersion(const char* value) { m_addonVersionHasBeenSet = true; m_addonVersion.assign(value); }
    inline DescribeAddonConfigurationRequest& WithAddonVersion(const Aws::String& value) { SetAddonVersion(value); return *this;}
    inline DescribeAddonConfigurationRequest& WithAddonVersion(Aws::String&& value) { SetAddonVersion(std::move(value)); return *this;}
    inline DescribeAddonConfigurationRequest& WithAddonVersion(const char* value) { SetAddonVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
