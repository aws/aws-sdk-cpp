/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreatePackageVersionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreatePackageVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePackageVersion"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the associated software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The name of the associated software package.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>The name of the associated software package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>The name of the associated software package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>The name of the associated software package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>The name of the associated software package.</p>
     */
    inline CreatePackageVersionRequest& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The name of the associated software package.</p>
     */
    inline CreatePackageVersionRequest& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the associated software package.</p>
     */
    inline CreatePackageVersionRequest& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The name of the new package version.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The name of the new package version.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>The name of the new package version.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>The name of the new package version.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>The name of the new package version.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>The name of the new package version.</p>
     */
    inline CreatePackageVersionRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The name of the new package version.</p>
     */
    inline CreatePackageVersionRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The name of the new package version.</p>
     */
    inline CreatePackageVersionRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>A summary of the package version being created. This can be used to outline
     * the package's contents or purpose.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A summary of the package version being created. This can be used to outline
     * the package's contents or purpose.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A summary of the package version being created. This can be used to outline
     * the package's contents or purpose.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A summary of the package version being created. This can be used to outline
     * the package's contents or purpose.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A summary of the package version being created. This can be used to outline
     * the package's contents or purpose.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A summary of the package version being created. This can be used to outline
     * the package's contents or purpose.</p>
     */
    inline CreatePackageVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A summary of the package version being created. This can be used to outline
     * the package's contents or purpose.</p>
     */
    inline CreatePackageVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A summary of the package version being created. This can be used to outline
     * the package's contents or purpose.</p>
     */
    inline CreatePackageVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline CreatePackageVersionRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline CreatePackageVersionRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline CreatePackageVersionRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline CreatePackageVersionRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline CreatePackageVersionRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline CreatePackageVersionRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline CreatePackageVersionRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline CreatePackageVersionRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the S3 file location, configuration options that are being sent to the
     * device or fleet.</p> <p>The combined size of all the attributes on a package
     * version is limited to 3KB.</p>
     */
    inline CreatePackageVersionRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline CreatePackageVersionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline CreatePackageVersionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline CreatePackageVersionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline CreatePackageVersionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline CreatePackageVersionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline CreatePackageVersionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline CreatePackageVersionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline CreatePackageVersionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that can be used to manage the package version.</p>
     */
    inline CreatePackageVersionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline CreatePackageVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreatePackageVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreatePackageVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
