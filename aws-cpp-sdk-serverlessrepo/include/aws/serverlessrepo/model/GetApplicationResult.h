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
#include <aws/serverlessrepo/model/Version.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API GetApplicationResult
  {
  public:
    GetApplicationResult();
    GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline GetApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline GetApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline GetApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline void SetAuthor(const Aws::String& value) { m_author = value; }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline void SetAuthor(Aws::String&& value) { m_author = std::move(value); }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline void SetAuthor(const char* value) { m_author.assign(value); }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline GetApplicationResult& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline GetApplicationResult& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline GetApplicationResult& WithAuthor(const char* value) { SetAuthor(value); return *this;}


    /**
     * <p>The date and time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline GetApplicationResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline GetApplicationResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline GetApplicationResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline GetApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline GetApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline GetApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline const Aws::String& GetHomePageUrl() const{ return m_homePageUrl; }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline void SetHomePageUrl(const Aws::String& value) { m_homePageUrl = value; }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline void SetHomePageUrl(Aws::String&& value) { m_homePageUrl = std::move(value); }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline void SetHomePageUrl(const char* value) { m_homePageUrl.assign(value); }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline GetApplicationResult& WithHomePageUrl(const Aws::String& value) { SetHomePageUrl(value); return *this;}

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline GetApplicationResult& WithHomePageUrl(Aws::String&& value) { SetHomePageUrl(std::move(value)); return *this;}

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline GetApplicationResult& WithHomePageUrl(const char* value) { SetHomePageUrl(value); return *this;}


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
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labels = value; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labels = std::move(value); }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline GetApplicationResult& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline GetApplicationResult& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline GetApplicationResult& AddLabels(const Aws::String& value) { m_labels.push_back(value); return *this; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline GetApplicationResult& AddLabels(Aws::String&& value) { m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline GetApplicationResult& AddLabels(const char* value) { m_labels.push_back(value); return *this; }


    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline const Aws::String& GetLicenseUrl() const{ return m_licenseUrl; }

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline void SetLicenseUrl(const Aws::String& value) { m_licenseUrl = value; }

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline void SetLicenseUrl(Aws::String&& value) { m_licenseUrl = std::move(value); }

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline void SetLicenseUrl(const char* value) { m_licenseUrl.assign(value); }

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline GetApplicationResult& WithLicenseUrl(const Aws::String& value) { SetLicenseUrl(value); return *this;}

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline GetApplicationResult& WithLicenseUrl(Aws::String&& value) { SetLicenseUrl(std::move(value)); return *this;}

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline GetApplicationResult& WithLicenseUrl(const char* value) { SetLicenseUrl(value); return *this;}


    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline GetApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline GetApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline GetApplicationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline const Aws::String& GetReadmeUrl() const{ return m_readmeUrl; }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeUrl(const Aws::String& value) { m_readmeUrl = value; }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeUrl(Aws::String&& value) { m_readmeUrl = std::move(value); }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeUrl(const char* value) { m_readmeUrl.assign(value); }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline GetApplicationResult& WithReadmeUrl(const Aws::String& value) { SetReadmeUrl(value); return *this;}

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline GetApplicationResult& WithReadmeUrl(Aws::String&& value) { SetReadmeUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline GetApplicationResult& WithReadmeUrl(const char* value) { SetReadmeUrl(value); return *this;}


    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline const Aws::String& GetSpdxLicenseId() const{ return m_spdxLicenseId; }

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline void SetSpdxLicenseId(const Aws::String& value) { m_spdxLicenseId = value; }

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline void SetSpdxLicenseId(Aws::String&& value) { m_spdxLicenseId = std::move(value); }

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline void SetSpdxLicenseId(const char* value) { m_spdxLicenseId.assign(value); }

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline GetApplicationResult& WithSpdxLicenseId(const Aws::String& value) { SetSpdxLicenseId(value); return *this;}

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline GetApplicationResult& WithSpdxLicenseId(Aws::String&& value) { SetSpdxLicenseId(std::move(value)); return *this;}

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline GetApplicationResult& WithSpdxLicenseId(const char* value) { SetSpdxLicenseId(value); return *this;}


    /**
     * <p>Version information about the application.</p>
     */
    inline const Version& GetVersion() const{ return m_version; }

    /**
     * <p>Version information about the application.</p>
     */
    inline void SetVersion(const Version& value) { m_version = value; }

    /**
     * <p>Version information about the application.</p>
     */
    inline void SetVersion(Version&& value) { m_version = std::move(value); }

    /**
     * <p>Version information about the application.</p>
     */
    inline GetApplicationResult& WithVersion(const Version& value) { SetVersion(value); return *this;}

    /**
     * <p>Version information about the application.</p>
     */
    inline GetApplicationResult& WithVersion(Version&& value) { SetVersion(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_author;

    Aws::String m_creationTime;

    Aws::String m_description;

    Aws::String m_homePageUrl;

    Aws::Vector<Aws::String> m_labels;

    Aws::String m_licenseUrl;

    Aws::String m_name;

    Aws::String m_readmeUrl;

    Aws::String m_spdxLicenseId;

    Version m_version;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
