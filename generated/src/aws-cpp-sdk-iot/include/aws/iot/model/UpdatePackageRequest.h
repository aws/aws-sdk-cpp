/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdatePackageRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdatePackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackage"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the target software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The name of the target software package.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>The name of the target software package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>The name of the target software package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>The name of the target software package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>The name of the target software package.</p>
     */
    inline UpdatePackageRequest& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The name of the target software package.</p>
     */
    inline UpdatePackageRequest& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the target software package.</p>
     */
    inline UpdatePackageRequest& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The package description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The package description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The package description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The package description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The package description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The package description.</p>
     */
    inline UpdatePackageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The package description.</p>
     */
    inline UpdatePackageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The package description.</p>
     */
    inline UpdatePackageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the default package version.</p> <p> <b>Note:</b> You cannot name
     * a <code>defaultVersion</code> and set <code>unsetDefaultVersion</code> equal to
     * <code>true</code> at the same time.</p>
     */
    inline const Aws::String& GetDefaultVersionName() const{ return m_defaultVersionName; }

    /**
     * <p>The name of the default package version.</p> <p> <b>Note:</b> You cannot name
     * a <code>defaultVersion</code> and set <code>unsetDefaultVersion</code> equal to
     * <code>true</code> at the same time.</p>
     */
    inline bool DefaultVersionNameHasBeenSet() const { return m_defaultVersionNameHasBeenSet; }

    /**
     * <p>The name of the default package version.</p> <p> <b>Note:</b> You cannot name
     * a <code>defaultVersion</code> and set <code>unsetDefaultVersion</code> equal to
     * <code>true</code> at the same time.</p>
     */
    inline void SetDefaultVersionName(const Aws::String& value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName = value; }

    /**
     * <p>The name of the default package version.</p> <p> <b>Note:</b> You cannot name
     * a <code>defaultVersion</code> and set <code>unsetDefaultVersion</code> equal to
     * <code>true</code> at the same time.</p>
     */
    inline void SetDefaultVersionName(Aws::String&& value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName = std::move(value); }

    /**
     * <p>The name of the default package version.</p> <p> <b>Note:</b> You cannot name
     * a <code>defaultVersion</code> and set <code>unsetDefaultVersion</code> equal to
     * <code>true</code> at the same time.</p>
     */
    inline void SetDefaultVersionName(const char* value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName.assign(value); }

    /**
     * <p>The name of the default package version.</p> <p> <b>Note:</b> You cannot name
     * a <code>defaultVersion</code> and set <code>unsetDefaultVersion</code> equal to
     * <code>true</code> at the same time.</p>
     */
    inline UpdatePackageRequest& WithDefaultVersionName(const Aws::String& value) { SetDefaultVersionName(value); return *this;}

    /**
     * <p>The name of the default package version.</p> <p> <b>Note:</b> You cannot name
     * a <code>defaultVersion</code> and set <code>unsetDefaultVersion</code> equal to
     * <code>true</code> at the same time.</p>
     */
    inline UpdatePackageRequest& WithDefaultVersionName(Aws::String&& value) { SetDefaultVersionName(std::move(value)); return *this;}

    /**
     * <p>The name of the default package version.</p> <p> <b>Note:</b> You cannot name
     * a <code>defaultVersion</code> and set <code>unsetDefaultVersion</code> equal to
     * <code>true</code> at the same time.</p>
     */
    inline UpdatePackageRequest& WithDefaultVersionName(const char* value) { SetDefaultVersionName(value); return *this;}


    /**
     * <p>Indicates whether you want to remove the named default package version from
     * the software package. Set as <code>true</code> to remove the default package
     * version. </p> <p> <b>Note:</b> You cannot name a <code>defaultVersion</code> and
     * set <code>unsetDefaultVersion</code> equal to <code>true</code> at the same
     * time.</p>
     */
    inline bool GetUnsetDefaultVersion() const{ return m_unsetDefaultVersion; }

    /**
     * <p>Indicates whether you want to remove the named default package version from
     * the software package. Set as <code>true</code> to remove the default package
     * version. </p> <p> <b>Note:</b> You cannot name a <code>defaultVersion</code> and
     * set <code>unsetDefaultVersion</code> equal to <code>true</code> at the same
     * time.</p>
     */
    inline bool UnsetDefaultVersionHasBeenSet() const { return m_unsetDefaultVersionHasBeenSet; }

    /**
     * <p>Indicates whether you want to remove the named default package version from
     * the software package. Set as <code>true</code> to remove the default package
     * version. </p> <p> <b>Note:</b> You cannot name a <code>defaultVersion</code> and
     * set <code>unsetDefaultVersion</code> equal to <code>true</code> at the same
     * time.</p>
     */
    inline void SetUnsetDefaultVersion(bool value) { m_unsetDefaultVersionHasBeenSet = true; m_unsetDefaultVersion = value; }

    /**
     * <p>Indicates whether you want to remove the named default package version from
     * the software package. Set as <code>true</code> to remove the default package
     * version. </p> <p> <b>Note:</b> You cannot name a <code>defaultVersion</code> and
     * set <code>unsetDefaultVersion</code> equal to <code>true</code> at the same
     * time.</p>
     */
    inline UpdatePackageRequest& WithUnsetDefaultVersion(bool value) { SetUnsetDefaultVersion(value); return *this;}


    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline UpdatePackageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline UpdatePackageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline UpdatePackageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_defaultVersionName;
    bool m_defaultVersionNameHasBeenSet = false;

    bool m_unsetDefaultVersion;
    bool m_unsetDefaultVersionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
