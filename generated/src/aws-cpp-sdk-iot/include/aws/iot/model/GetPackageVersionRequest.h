/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class GetPackageVersionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API GetPackageVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPackageVersion"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the associated package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The name of the associated package.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>The name of the associated package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>The name of the associated package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>The name of the associated package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>The name of the associated package.</p>
     */
    inline GetPackageVersionRequest& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The name of the associated package.</p>
     */
    inline GetPackageVersionRequest& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the associated package.</p>
     */
    inline GetPackageVersionRequest& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The name of the target package version.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The name of the target package version.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>The name of the target package version.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>The name of the target package version.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>The name of the target package version.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>The name of the target package version.</p>
     */
    inline GetPackageVersionRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The name of the target package version.</p>
     */
    inline GetPackageVersionRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The name of the target package version.</p>
     */
    inline GetPackageVersionRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}

  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
