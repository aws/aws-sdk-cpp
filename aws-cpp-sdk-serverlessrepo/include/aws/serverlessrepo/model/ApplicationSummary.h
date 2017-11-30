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
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * Summary of details about the application.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ApplicationSummary
  {
  public:
    ApplicationSummary();
    ApplicationSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    ApplicationSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The application ARN.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The application ARN.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The application ARN.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The application ARN.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The application ARN.
     */
    inline ApplicationSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The application ARN.
     */
    inline ApplicationSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The application ARN.
     */
    inline ApplicationSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The name of the author publishing the app\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }

    /**
     * The name of the author publishing the app\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(const Aws::String& value) { m_authorHasBeenSet = true; m_author = value; }

    /**
     * The name of the author publishing the app\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(Aws::String&& value) { m_authorHasBeenSet = true; m_author = std::move(value); }

    /**
     * The name of the author publishing the app\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(const char* value) { m_authorHasBeenSet = true; m_author.assign(value); }

    /**
     * The name of the author publishing the app\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline ApplicationSummary& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * The name of the author publishing the app\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline ApplicationSummary& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * The name of the author publishing the app\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline ApplicationSummary& WithAuthor(const char* value) { SetAuthor(value); return *this;}


    /**
     * The date/time this resource was created.
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * The date/time this resource was created.
     */
    inline ApplicationSummary& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * The date/time this resource was created.
     */
    inline ApplicationSummary& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * The date/time this resource was created.
     */
    inline ApplicationSummary& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline ApplicationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline ApplicationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline ApplicationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline ApplicationSummary& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline ApplicationSummary& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline ApplicationSummary& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline ApplicationSummary& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline ApplicationSummary& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline ApplicationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline ApplicationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline ApplicationSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline const Aws::String& GetSpdxLicenseId() const{ return m_spdxLicenseId; }

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline void SetSpdxLicenseId(const Aws::String& value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId = value; }

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline void SetSpdxLicenseId(Aws::String&& value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId = std::move(value); }

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline void SetSpdxLicenseId(const char* value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId.assign(value); }

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline ApplicationSummary& WithSpdxLicenseId(const Aws::String& value) { SetSpdxLicenseId(value); return *this;}

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline ApplicationSummary& WithSpdxLicenseId(Aws::String&& value) { SetSpdxLicenseId(std::move(value)); return *this;}

    /**
     * A valid identifier from https://spdx.org/licenses/ .
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
