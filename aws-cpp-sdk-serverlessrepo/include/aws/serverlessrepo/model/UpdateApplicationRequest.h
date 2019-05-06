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
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API UpdateApplicationRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


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
    inline UpdateApplicationRequest& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline UpdateApplicationRequest& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline UpdateApplicationRequest& WithAuthor(const char* value) { SetAuthor(value); return *this;}


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
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateApplicationRequest& WithHomePageUrl(const Aws::String& value) { SetHomePageUrl(value); return *this;}

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline UpdateApplicationRequest& WithHomePageUrl(Aws::String&& value) { SetHomePageUrl(std::move(value)); return *this;}

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline UpdateApplicationRequest& WithHomePageUrl(const char* value) { SetHomePageUrl(value); return *this;}


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
    inline UpdateApplicationRequest& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline UpdateApplicationRequest& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline UpdateApplicationRequest& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline UpdateApplicationRequest& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline UpdateApplicationRequest& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * <p>A text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline const Aws::String& GetReadmeBody() const{ return m_readmeBody; }

    /**
     * <p>A text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline bool ReadmeBodyHasBeenSet() const { return m_readmeBodyHasBeenSet; }

    /**
     * <p>A text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeBody(const Aws::String& value) { m_readmeBodyHasBeenSet = true; m_readmeBody = value; }

    /**
     * <p>A text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeBody(Aws::String&& value) { m_readmeBodyHasBeenSet = true; m_readmeBody = std::move(value); }

    /**
     * <p>A text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeBody(const char* value) { m_readmeBodyHasBeenSet = true; m_readmeBody.assign(value); }

    /**
     * <p>A text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationRequest& WithReadmeBody(const Aws::String& value) { SetReadmeBody(value); return *this;}

    /**
     * <p>A text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationRequest& WithReadmeBody(Aws::String&& value) { SetReadmeBody(std::move(value)); return *this;}

    /**
     * <p>A text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationRequest& WithReadmeBody(const char* value) { SetReadmeBody(value); return *this;}


    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline const Aws::String& GetReadmeUrl() const{ return m_readmeUrl; }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline bool ReadmeUrlHasBeenSet() const { return m_readmeUrlHasBeenSet; }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeUrl(const Aws::String& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = value; }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeUrl(Aws::String&& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = std::move(value); }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeUrl(const char* value) { m_readmeUrlHasBeenSet = true; m_readmeUrl.assign(value); }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationRequest& WithReadmeUrl(const Aws::String& value) { SetReadmeUrl(value); return *this;}

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationRequest& WithReadmeUrl(Aws::String&& value) { SetReadmeUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationRequest& WithReadmeUrl(const char* value) { SetReadmeUrl(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_author;
    bool m_authorHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_homePageUrl;
    bool m_homePageUrlHasBeenSet;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet;

    Aws::String m_readmeBody;
    bool m_readmeBodyHasBeenSet;

    Aws::String m_readmeUrl;
    bool m_readmeUrlHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
