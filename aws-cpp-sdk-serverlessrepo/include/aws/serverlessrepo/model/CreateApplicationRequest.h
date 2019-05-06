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
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateApplicationRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    Aws::String SerializePayload() const override;


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
    inline CreateApplicationRequest& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline CreateApplicationRequest& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline CreateApplicationRequest& WithAuthor(const char* value) { SetAuthor(value); return *this;}


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
    inline CreateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline CreateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline CreateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateApplicationRequest& WithHomePageUrl(const Aws::String& value) { SetHomePageUrl(value); return *this;}

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline CreateApplicationRequest& WithHomePageUrl(Aws::String&& value) { SetHomePageUrl(std::move(value)); return *this;}

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline CreateApplicationRequest& WithHomePageUrl(const char* value) { SetHomePageUrl(value); return *this;}


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
    inline CreateApplicationRequest& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline CreateApplicationRequest& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline CreateApplicationRequest& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline CreateApplicationRequest& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline CreateApplicationRequest& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * <p>A local text file that contains the license of the app that matches the
     * spdxLicenseID value of your application.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline const Aws::String& GetLicenseBody() const{ return m_licenseBody; }

    /**
     * <p>A local text file that contains the license of the app that matches the
     * spdxLicenseID value of your application.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline bool LicenseBodyHasBeenSet() const { return m_licenseBodyHasBeenSet; }

    /**
     * <p>A local text file that contains the license of the app that matches the
     * spdxLicenseID value of your application.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline void SetLicenseBody(const Aws::String& value) { m_licenseBodyHasBeenSet = true; m_licenseBody = value; }

    /**
     * <p>A local text file that contains the license of the app that matches the
     * spdxLicenseID value of your application.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline void SetLicenseBody(Aws::String&& value) { m_licenseBodyHasBeenSet = true; m_licenseBody = std::move(value); }

    /**
     * <p>A local text file that contains the license of the app that matches the
     * spdxLicenseID value of your application.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline void SetLicenseBody(const char* value) { m_licenseBodyHasBeenSet = true; m_licenseBody.assign(value); }

    /**
     * <p>A local text file that contains the license of the app that matches the
     * spdxLicenseID value of your application.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline CreateApplicationRequest& WithLicenseBody(const Aws::String& value) { SetLicenseBody(value); return *this;}

    /**
     * <p>A local text file that contains the license of the app that matches the
     * spdxLicenseID value of your application.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline CreateApplicationRequest& WithLicenseBody(Aws::String&& value) { SetLicenseBody(std::move(value)); return *this;}

    /**
     * <p>A local text file that contains the license of the app that matches the
     * spdxLicenseID value of your application.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline CreateApplicationRequest& WithLicenseBody(const char* value) { SetLicenseBody(value); return *this;}


    /**
     * <p>A link to the S3 object that contains the license of the app that matches the
     * spdxLicenseID value of your application.</p><p>Maximum size 5 MB</p><p>You can
     * specify only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline const Aws::String& GetLicenseUrl() const{ return m_licenseUrl; }

    /**
     * <p>A link to the S3 object that contains the license of the app that matches the
     * spdxLicenseID value of your application.</p><p>Maximum size 5 MB</p><p>You can
     * specify only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline bool LicenseUrlHasBeenSet() const { return m_licenseUrlHasBeenSet; }

    /**
     * <p>A link to the S3 object that contains the license of the app that matches the
     * spdxLicenseID value of your application.</p><p>Maximum size 5 MB</p><p>You can
     * specify only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline void SetLicenseUrl(const Aws::String& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = value; }

    /**
     * <p>A link to the S3 object that contains the license of the app that matches the
     * spdxLicenseID value of your application.</p><p>Maximum size 5 MB</p><p>You can
     * specify only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline void SetLicenseUrl(Aws::String&& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = std::move(value); }

    /**
     * <p>A link to the S3 object that contains the license of the app that matches the
     * spdxLicenseID value of your application.</p><p>Maximum size 5 MB</p><p>You can
     * specify only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline void SetLicenseUrl(const char* value) { m_licenseUrlHasBeenSet = true; m_licenseUrl.assign(value); }

    /**
     * <p>A link to the S3 object that contains the license of the app that matches the
     * spdxLicenseID value of your application.</p><p>Maximum size 5 MB</p><p>You can
     * specify only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline CreateApplicationRequest& WithLicenseUrl(const Aws::String& value) { SetLicenseUrl(value); return *this;}

    /**
     * <p>A link to the S3 object that contains the license of the app that matches the
     * spdxLicenseID value of your application.</p><p>Maximum size 5 MB</p><p>You can
     * specify only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline CreateApplicationRequest& WithLicenseUrl(Aws::String&& value) { SetLicenseUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the S3 object that contains the license of the app that matches the
     * spdxLicenseID value of your application.</p><p>Maximum size 5 MB</p><p>You can
     * specify only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline CreateApplicationRequest& WithLicenseUrl(const char* value) { SetLicenseUrl(value); return *this;}


    /**
     * <p>The name of the application that you want to publish.</p><p>Minimum length=1.
     * Maximum length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application that you want to publish.</p><p>Minimum length=1.
     * Maximum length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application that you want to publish.</p><p>Minimum length=1.
     * Maximum length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application that you want to publish.</p><p>Minimum length=1.
     * Maximum length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application that you want to publish.</p><p>Minimum length=1.
     * Maximum length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application that you want to publish.</p><p>Minimum length=1.
     * Maximum length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline CreateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application that you want to publish.</p><p>Minimum length=1.
     * Maximum length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline CreateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application that you want to publish.</p><p>Minimum length=1.
     * Maximum length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline CreateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A local text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of readmeBody and readmeUrl; otherwise, an error results.</p>
     */
    inline const Aws::String& GetReadmeBody() const{ return m_readmeBody; }

    /**
     * <p>A local text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of readmeBody and readmeUrl; otherwise, an error results.</p>
     */
    inline bool ReadmeBodyHasBeenSet() const { return m_readmeBodyHasBeenSet; }

    /**
     * <p>A local text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of readmeBody and readmeUrl; otherwise, an error results.</p>
     */
    inline void SetReadmeBody(const Aws::String& value) { m_readmeBodyHasBeenSet = true; m_readmeBody = value; }

    /**
     * <p>A local text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of readmeBody and readmeUrl; otherwise, an error results.</p>
     */
    inline void SetReadmeBody(Aws::String&& value) { m_readmeBodyHasBeenSet = true; m_readmeBody = std::move(value); }

    /**
     * <p>A local text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of readmeBody and readmeUrl; otherwise, an error results.</p>
     */
    inline void SetReadmeBody(const char* value) { m_readmeBodyHasBeenSet = true; m_readmeBody.assign(value); }

    /**
     * <p>A local text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of readmeBody and readmeUrl; otherwise, an error results.</p>
     */
    inline CreateApplicationRequest& WithReadmeBody(const Aws::String& value) { SetReadmeBody(value); return *this;}

    /**
     * <p>A local text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of readmeBody and readmeUrl; otherwise, an error results.</p>
     */
    inline CreateApplicationRequest& WithReadmeBody(Aws::String&& value) { SetReadmeBody(std::move(value)); return *this;}

    /**
     * <p>A local text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of readmeBody and readmeUrl; otherwise, an error results.</p>
     */
    inline CreateApplicationRequest& WithReadmeBody(const char* value) { SetReadmeBody(value); return *this;}


    /**
     * <p>A link to the S3 object in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5
     * MB</p><p>You can specify only one of readmeBody and readmeUrl; otherwise, an
     * error results.</p>
     */
    inline const Aws::String& GetReadmeUrl() const{ return m_readmeUrl; }

    /**
     * <p>A link to the S3 object in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5
     * MB</p><p>You can specify only one of readmeBody and readmeUrl; otherwise, an
     * error results.</p>
     */
    inline bool ReadmeUrlHasBeenSet() const { return m_readmeUrlHasBeenSet; }

    /**
     * <p>A link to the S3 object in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5
     * MB</p><p>You can specify only one of readmeBody and readmeUrl; otherwise, an
     * error results.</p>
     */
    inline void SetReadmeUrl(const Aws::String& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = value; }

    /**
     * <p>A link to the S3 object in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5
     * MB</p><p>You can specify only one of readmeBody and readmeUrl; otherwise, an
     * error results.</p>
     */
    inline void SetReadmeUrl(Aws::String&& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = std::move(value); }

    /**
     * <p>A link to the S3 object in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5
     * MB</p><p>You can specify only one of readmeBody and readmeUrl; otherwise, an
     * error results.</p>
     */
    inline void SetReadmeUrl(const char* value) { m_readmeUrlHasBeenSet = true; m_readmeUrl.assign(value); }

    /**
     * <p>A link to the S3 object in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5
     * MB</p><p>You can specify only one of readmeBody and readmeUrl; otherwise, an
     * error results.</p>
     */
    inline CreateApplicationRequest& WithReadmeUrl(const Aws::String& value) { SetReadmeUrl(value); return *this;}

    /**
     * <p>A link to the S3 object in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5
     * MB</p><p>You can specify only one of readmeBody and readmeUrl; otherwise, an
     * error results.</p>
     */
    inline CreateApplicationRequest& WithReadmeUrl(Aws::String&& value) { SetReadmeUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the S3 object in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5
     * MB</p><p>You can specify only one of readmeBody and readmeUrl; otherwise, an
     * error results.</p>
     */
    inline CreateApplicationRequest& WithReadmeUrl(const char* value) { SetReadmeUrl(value); return *this;}


    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline CreateApplicationRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline CreateApplicationRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline CreateApplicationRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline const Aws::String& GetSourceCodeArchiveUrl() const{ return m_sourceCodeArchiveUrl; }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline bool SourceCodeArchiveUrlHasBeenSet() const { return m_sourceCodeArchiveUrlHasBeenSet; }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline void SetSourceCodeArchiveUrl(const Aws::String& value) { m_sourceCodeArchiveUrlHasBeenSet = true; m_sourceCodeArchiveUrl = value; }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline void SetSourceCodeArchiveUrl(Aws::String&& value) { m_sourceCodeArchiveUrlHasBeenSet = true; m_sourceCodeArchiveUrl = std::move(value); }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline void SetSourceCodeArchiveUrl(const char* value) { m_sourceCodeArchiveUrlHasBeenSet = true; m_sourceCodeArchiveUrl.assign(value); }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline CreateApplicationRequest& WithSourceCodeArchiveUrl(const Aws::String& value) { SetSourceCodeArchiveUrl(value); return *this;}

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline CreateApplicationRequest& WithSourceCodeArchiveUrl(Aws::String&& value) { SetSourceCodeArchiveUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline CreateApplicationRequest& WithSourceCodeArchiveUrl(const char* value) { SetSourceCodeArchiveUrl(value); return *this;}


    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline const Aws::String& GetSourceCodeUrl() const{ return m_sourceCodeUrl; }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline bool SourceCodeUrlHasBeenSet() const { return m_sourceCodeUrlHasBeenSet; }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline void SetSourceCodeUrl(const Aws::String& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = value; }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline void SetSourceCodeUrl(Aws::String&& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = std::move(value); }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline void SetSourceCodeUrl(const char* value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl.assign(value); }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline CreateApplicationRequest& WithSourceCodeUrl(const Aws::String& value) { SetSourceCodeUrl(value); return *this;}

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline CreateApplicationRequest& WithSourceCodeUrl(Aws::String&& value) { SetSourceCodeUrl(std::move(value)); return *this;}

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline CreateApplicationRequest& WithSourceCodeUrl(const char* value) { SetSourceCodeUrl(value); return *this;}


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
    inline CreateApplicationRequest& WithSpdxLicenseId(const Aws::String& value) { SetSpdxLicenseId(value); return *this;}

    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline CreateApplicationRequest& WithSpdxLicenseId(Aws::String&& value) { SetSpdxLicenseId(std::move(value)); return *this;}

    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline CreateApplicationRequest& WithSpdxLicenseId(const char* value) { SetSpdxLicenseId(value); return *this;}


    /**
     * <p>The local raw packaged AWS SAM template file of your application.
 The file
     * has the format file://&lt;path>/&lt;filename>.</p><p>You can specify only one of
     * templateBody and templateUrl; otherwise an error results.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The local raw packaged AWS SAM template file of your application.
 The file
     * has the format file://&lt;path>/&lt;filename>.</p><p>You can specify only one of
     * templateBody and templateUrl; otherwise an error results.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>The local raw packaged AWS SAM template file of your application.
 The file
     * has the format file://&lt;path>/&lt;filename>.</p><p>You can specify only one of
     * templateBody and templateUrl; otherwise an error results.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>The local raw packaged AWS SAM template file of your application.
 The file
     * has the format file://&lt;path>/&lt;filename>.</p><p>You can specify only one of
     * templateBody and templateUrl; otherwise an error results.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>The local raw packaged AWS SAM template file of your application.
 The file
     * has the format file://&lt;path>/&lt;filename>.</p><p>You can specify only one of
     * templateBody and templateUrl; otherwise an error results.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>The local raw packaged AWS SAM template file of your application.
 The file
     * has the format file://&lt;path>/&lt;filename>.</p><p>You can specify only one of
     * templateBody and templateUrl; otherwise an error results.</p>
     */
    inline CreateApplicationRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The local raw packaged AWS SAM template file of your application.
 The file
     * has the format file://&lt;path>/&lt;filename>.</p><p>You can specify only one of
     * templateBody and templateUrl; otherwise an error results.</p>
     */
    inline CreateApplicationRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The local raw packaged AWS SAM template file of your application.
 The file
     * has the format file://&lt;path>/&lt;filename>.</p><p>You can specify only one of
     * templateBody and templateUrl; otherwise an error results.</p>
     */
    inline CreateApplicationRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>A link to the S3 object containing the packaged AWS SAM template of your
     * application.</p><p>You can specify only one of templateBody and templateUrl;
     * otherwise an error results.</p>
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }

    /**
     * <p>A link to the S3 object containing the packaged AWS SAM template of your
     * application.</p><p>You can specify only one of templateBody and templateUrl;
     * otherwise an error results.</p>
     */
    inline bool TemplateUrlHasBeenSet() const { return m_templateUrlHasBeenSet; }

    /**
     * <p>A link to the S3 object containing the packaged AWS SAM template of your
     * application.</p><p>You can specify only one of templateBody and templateUrl;
     * otherwise an error results.</p>
     */
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrlHasBeenSet = true; m_templateUrl = value; }

    /**
     * <p>A link to the S3 object containing the packaged AWS SAM template of your
     * application.</p><p>You can specify only one of templateBody and templateUrl;
     * otherwise an error results.</p>
     */
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrlHasBeenSet = true; m_templateUrl = std::move(value); }

    /**
     * <p>A link to the S3 object containing the packaged AWS SAM template of your
     * application.</p><p>You can specify only one of templateBody and templateUrl;
     * otherwise an error results.</p>
     */
    inline void SetTemplateUrl(const char* value) { m_templateUrlHasBeenSet = true; m_templateUrl.assign(value); }

    /**
     * <p>A link to the S3 object containing the packaged AWS SAM template of your
     * application.</p><p>You can specify only one of templateBody and templateUrl;
     * otherwise an error results.</p>
     */
    inline CreateApplicationRequest& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}

    /**
     * <p>A link to the S3 object containing the packaged AWS SAM template of your
     * application.</p><p>You can specify only one of templateBody and templateUrl;
     * otherwise an error results.</p>
     */
    inline CreateApplicationRequest& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the S3 object containing the packaged AWS SAM template of your
     * application.</p><p>You can specify only one of templateBody and templateUrl;
     * otherwise an error results.</p>
     */
    inline CreateApplicationRequest& WithTemplateUrl(const char* value) { SetTemplateUrl(value); return *this;}

  private:

    Aws::String m_author;
    bool m_authorHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_homePageUrl;
    bool m_homePageUrlHasBeenSet;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet;

    Aws::String m_licenseBody;
    bool m_licenseBodyHasBeenSet;

    Aws::String m_licenseUrl;
    bool m_licenseUrlHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_readmeBody;
    bool m_readmeBodyHasBeenSet;

    Aws::String m_readmeUrl;
    bool m_readmeUrlHasBeenSet;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet;

    Aws::String m_sourceCodeArchiveUrl;
    bool m_sourceCodeArchiveUrlHasBeenSet;

    Aws::String m_sourceCodeUrl;
    bool m_sourceCodeUrlHasBeenSet;

    Aws::String m_spdxLicenseId;
    bool m_spdxLicenseIdHasBeenSet;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;

    Aws::String m_templateUrl;
    bool m_templateUrlHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
