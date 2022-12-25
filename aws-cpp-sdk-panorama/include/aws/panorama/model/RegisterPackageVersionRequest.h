/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Panorama
{
namespace Model
{

  /**
   */
  class RegisterPackageVersionRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API RegisterPackageVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterPackageVersion"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    /**
     * <p>Whether to mark the new version as the latest version.</p>
     */
    inline bool GetMarkLatest() const{ return m_markLatest; }

    /**
     * <p>Whether to mark the new version as the latest version.</p>
     */
    inline bool MarkLatestHasBeenSet() const { return m_markLatestHasBeenSet; }

    /**
     * <p>Whether to mark the new version as the latest version.</p>
     */
    inline void SetMarkLatest(bool value) { m_markLatestHasBeenSet = true; m_markLatest = value; }

    /**
     * <p>Whether to mark the new version as the latest version.</p>
     */
    inline RegisterPackageVersionRequest& WithMarkLatest(bool value) { SetMarkLatest(value); return *this;}


    /**
     * <p>An owner account.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>An owner account.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>An owner account.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>An owner account.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>An owner account.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>An owner account.</p>
     */
    inline RegisterPackageVersionRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>An owner account.</p>
     */
    inline RegisterPackageVersionRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>An owner account.</p>
     */
    inline RegisterPackageVersionRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>A package ID.</p>
     */
    inline const Aws::String& GetPackageId() const{ return m_packageId; }

    /**
     * <p>A package ID.</p>
     */
    inline bool PackageIdHasBeenSet() const { return m_packageIdHasBeenSet; }

    /**
     * <p>A package ID.</p>
     */
    inline void SetPackageId(const Aws::String& value) { m_packageIdHasBeenSet = true; m_packageId = value; }

    /**
     * <p>A package ID.</p>
     */
    inline void SetPackageId(Aws::String&& value) { m_packageIdHasBeenSet = true; m_packageId = std::move(value); }

    /**
     * <p>A package ID.</p>
     */
    inline void SetPackageId(const char* value) { m_packageIdHasBeenSet = true; m_packageId.assign(value); }

    /**
     * <p>A package ID.</p>
     */
    inline RegisterPackageVersionRequest& WithPackageId(const Aws::String& value) { SetPackageId(value); return *this;}

    /**
     * <p>A package ID.</p>
     */
    inline RegisterPackageVersionRequest& WithPackageId(Aws::String&& value) { SetPackageId(std::move(value)); return *this;}

    /**
     * <p>A package ID.</p>
     */
    inline RegisterPackageVersionRequest& WithPackageId(const char* value) { SetPackageId(value); return *this;}


    /**
     * <p>A package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }

    /**
     * <p>A package version.</p>
     */
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }

    /**
     * <p>A package version.</p>
     */
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }

    /**
     * <p>A package version.</p>
     */
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }

    /**
     * <p>A package version.</p>
     */
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }

    /**
     * <p>A package version.</p>
     */
    inline RegisterPackageVersionRequest& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}

    /**
     * <p>A package version.</p>
     */
    inline RegisterPackageVersionRequest& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}

    /**
     * <p>A package version.</p>
     */
    inline RegisterPackageVersionRequest& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}


    /**
     * <p>A patch version.</p>
     */
    inline const Aws::String& GetPatchVersion() const{ return m_patchVersion; }

    /**
     * <p>A patch version.</p>
     */
    inline bool PatchVersionHasBeenSet() const { return m_patchVersionHasBeenSet; }

    /**
     * <p>A patch version.</p>
     */
    inline void SetPatchVersion(const Aws::String& value) { m_patchVersionHasBeenSet = true; m_patchVersion = value; }

    /**
     * <p>A patch version.</p>
     */
    inline void SetPatchVersion(Aws::String&& value) { m_patchVersionHasBeenSet = true; m_patchVersion = std::move(value); }

    /**
     * <p>A patch version.</p>
     */
    inline void SetPatchVersion(const char* value) { m_patchVersionHasBeenSet = true; m_patchVersion.assign(value); }

    /**
     * <p>A patch version.</p>
     */
    inline RegisterPackageVersionRequest& WithPatchVersion(const Aws::String& value) { SetPatchVersion(value); return *this;}

    /**
     * <p>A patch version.</p>
     */
    inline RegisterPackageVersionRequest& WithPatchVersion(Aws::String&& value) { SetPatchVersion(std::move(value)); return *this;}

    /**
     * <p>A patch version.</p>
     */
    inline RegisterPackageVersionRequest& WithPatchVersion(const char* value) { SetPatchVersion(value); return *this;}

  private:

    bool m_markLatest;
    bool m_markLatestHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_packageId;
    bool m_packageIdHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_patchVersion;
    bool m_patchVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
