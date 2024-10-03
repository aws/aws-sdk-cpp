/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/PackageVersionArtifact.h>
#include <aws/iot/model/PackageVersionAction.h>
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
  class UpdatePackageVersionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdatePackageVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackageVersion"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the associated software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline UpdatePackageVersionRequest& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline UpdatePackageVersionRequest& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline UpdatePackageVersionRequest& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target package version.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline UpdatePackageVersionRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline UpdatePackageVersionRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline UpdatePackageVersionRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package version description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdatePackageVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePackageVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePackageVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to define a package version’s configuration. For
     * example, the Amazon S3 file location, configuration options that are being sent
     * to the device or fleet. </p> <p> <b>Note:</b> Attributes can be updated only
     * when the package version is in a draft state.</p> <p>The combined size of all
     * the attributes on a package version is limited to 3KB.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline UpdatePackageVersionRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline UpdatePackageVersionRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline UpdatePackageVersionRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline UpdatePackageVersionRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline UpdatePackageVersionRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline UpdatePackageVersionRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdatePackageVersionRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline UpdatePackageVersionRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline UpdatePackageVersionRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The various components that make up a software package version.</p>
     */
    inline const PackageVersionArtifact& GetArtifact() const{ return m_artifact; }
    inline bool ArtifactHasBeenSet() const { return m_artifactHasBeenSet; }
    inline void SetArtifact(const PackageVersionArtifact& value) { m_artifactHasBeenSet = true; m_artifact = value; }
    inline void SetArtifact(PackageVersionArtifact&& value) { m_artifactHasBeenSet = true; m_artifact = std::move(value); }
    inline UpdatePackageVersionRequest& WithArtifact(const PackageVersionArtifact& value) { SetArtifact(value); return *this;}
    inline UpdatePackageVersionRequest& WithArtifact(PackageVersionArtifact&& value) { SetArtifact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status that the package version should be assigned. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline const PackageVersionAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const PackageVersionAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(PackageVersionAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline UpdatePackageVersionRequest& WithAction(const PackageVersionAction& value) { SetAction(value); return *this;}
    inline UpdatePackageVersionRequest& WithAction(PackageVersionAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inline job document associated with a software package version used for a
     * quick job deployment.</p>
     */
    inline const Aws::String& GetRecipe() const{ return m_recipe; }
    inline bool RecipeHasBeenSet() const { return m_recipeHasBeenSet; }
    inline void SetRecipe(const Aws::String& value) { m_recipeHasBeenSet = true; m_recipe = value; }
    inline void SetRecipe(Aws::String&& value) { m_recipeHasBeenSet = true; m_recipe = std::move(value); }
    inline void SetRecipe(const char* value) { m_recipeHasBeenSet = true; m_recipe.assign(value); }
    inline UpdatePackageVersionRequest& WithRecipe(const Aws::String& value) { SetRecipe(value); return *this;}
    inline UpdatePackageVersionRequest& WithRecipe(Aws::String&& value) { SetRecipe(std::move(value)); return *this;}
    inline UpdatePackageVersionRequest& WithRecipe(const char* value) { SetRecipe(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdatePackageVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdatePackageVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdatePackageVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    PackageVersionArtifact m_artifact;
    bool m_artifactHasBeenSet = false;

    PackageVersionAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_recipe;
    bool m_recipeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
