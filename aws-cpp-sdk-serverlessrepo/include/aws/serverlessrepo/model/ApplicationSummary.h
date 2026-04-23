/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>Summary of details about the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ApplicationSummary
  {
  public:
    ApplicationSummary();
    ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline ApplicationSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline ApplicationSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline ApplicationSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline void SetAuthor(const Aws::String& value) { m_authorHasBeenSet = true; m_author = value; }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline void SetAuthor(Aws::String&& value) { m_authorHasBeenSet = true; m_author = std::move(value); }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline void SetAuthor(const char* value) { m_authorHasBeenSet = true; m_author.assign(value); }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline ApplicationSummary& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline ApplicationSummary& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline ApplicationSummary& WithAuthor(const char* value) { SetAuthor(value); return *this;}


    /**
     * <p>The date and time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline ApplicationSummary& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline ApplicationSummary& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline ApplicationSummary& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline ApplicationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline ApplicationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline ApplicationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline const Aws::String& GetHomePageUrl() const{ return m_homePageUrl; }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline bool HomePageUrlHasBeenSet() const { return m_homePageUrlHasBeenSet; }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline void SetHomePageUrl(const Aws::String& value) { m_homePageUrlHasBeenSet = true; m_homePageUrl = value; }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline void SetHomePageUrl(Aws::String&& value) { m_homePageUrlHasBeenSet = true; m_homePageUrl = std::move(value); }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline void SetHomePageUrl(const char* value) { m_homePageUrlHasBeenSet = true; m_homePageUrl.assign(value); }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline ApplicationSummary& WithHomePageUrl(const Aws::String& value) { SetHomePageUrl(value); return *this;}

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline ApplicationSummary& WithHomePageUrl(Aws::String&& value) { SetHomePageUrl(std::move(value)); return *this;}

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline ApplicationSummary& WithHomePageUrl(const char* value) { SetHomePageUrl(value); return *this;}


    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline ApplicationSummary& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline ApplicationSummary& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline ApplicationSummary& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline ApplicationSummary& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline ApplicationSummary& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline ApplicationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline ApplicationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline ApplicationSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline const Aws::String& GetSpdxLicenseId() const{ return m_spdxLicenseId; }

    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline bool SpdxLicenseIdHasBeenSet() const { return m_spdxLicenseIdHasBeenSet; }

    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline void SetSpdxLicenseId(const Aws::String& value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId = value; }

    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline void SetSpdxLicenseId(Aws::String&& value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId = std::move(value); }

    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline void SetSpdxLicenseId(const char* value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId.assign(value); }

    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline ApplicationSummary& WithSpdxLicenseId(const Aws::String& value) { SetSpdxLicenseId(value); return *this;}

    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline ApplicationSummary& WithSpdxLicenseId(Aws::String&& value) { SetSpdxLicenseId(std::move(value)); return *this;}

    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline ApplicationSummary& WithSpdxLicenseId(const char* value) { SetSpdxLicenseId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_author;
    bool m_authorHasBeenSet;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_homePageUrl;
    bool m_homePageUrlHasBeenSet;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_spdxLicenseId;
    bool m_spdxLicenseIdHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
