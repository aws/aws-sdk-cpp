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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The details about the developer that published the skill.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeveloperInfo">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API DeveloperInfo
  {
  public:
    DeveloperInfo();
    DeveloperInfo(Aws::Utils::Json::JsonView jsonValue);
    DeveloperInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the developer.</p>
     */
    inline const Aws::String& GetDeveloperName() const{ return m_developerName; }

    /**
     * <p>The name of the developer.</p>
     */
    inline bool DeveloperNameHasBeenSet() const { return m_developerNameHasBeenSet; }

    /**
     * <p>The name of the developer.</p>
     */
    inline void SetDeveloperName(const Aws::String& value) { m_developerNameHasBeenSet = true; m_developerName = value; }

    /**
     * <p>The name of the developer.</p>
     */
    inline void SetDeveloperName(Aws::String&& value) { m_developerNameHasBeenSet = true; m_developerName = std::move(value); }

    /**
     * <p>The name of the developer.</p>
     */
    inline void SetDeveloperName(const char* value) { m_developerNameHasBeenSet = true; m_developerName.assign(value); }

    /**
     * <p>The name of the developer.</p>
     */
    inline DeveloperInfo& WithDeveloperName(const Aws::String& value) { SetDeveloperName(value); return *this;}

    /**
     * <p>The name of the developer.</p>
     */
    inline DeveloperInfo& WithDeveloperName(Aws::String&& value) { SetDeveloperName(std::move(value)); return *this;}

    /**
     * <p>The name of the developer.</p>
     */
    inline DeveloperInfo& WithDeveloperName(const char* value) { SetDeveloperName(value); return *this;}


    /**
     * <p>The URL of the privacy policy.</p>
     */
    inline const Aws::String& GetPrivacyPolicy() const{ return m_privacyPolicy; }

    /**
     * <p>The URL of the privacy policy.</p>
     */
    inline bool PrivacyPolicyHasBeenSet() const { return m_privacyPolicyHasBeenSet; }

    /**
     * <p>The URL of the privacy policy.</p>
     */
    inline void SetPrivacyPolicy(const Aws::String& value) { m_privacyPolicyHasBeenSet = true; m_privacyPolicy = value; }

    /**
     * <p>The URL of the privacy policy.</p>
     */
    inline void SetPrivacyPolicy(Aws::String&& value) { m_privacyPolicyHasBeenSet = true; m_privacyPolicy = std::move(value); }

    /**
     * <p>The URL of the privacy policy.</p>
     */
    inline void SetPrivacyPolicy(const char* value) { m_privacyPolicyHasBeenSet = true; m_privacyPolicy.assign(value); }

    /**
     * <p>The URL of the privacy policy.</p>
     */
    inline DeveloperInfo& WithPrivacyPolicy(const Aws::String& value) { SetPrivacyPolicy(value); return *this;}

    /**
     * <p>The URL of the privacy policy.</p>
     */
    inline DeveloperInfo& WithPrivacyPolicy(Aws::String&& value) { SetPrivacyPolicy(std::move(value)); return *this;}

    /**
     * <p>The URL of the privacy policy.</p>
     */
    inline DeveloperInfo& WithPrivacyPolicy(const char* value) { SetPrivacyPolicy(value); return *this;}


    /**
     * <p>The email of the developer.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email of the developer.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email of the developer.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email of the developer.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email of the developer.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email of the developer.</p>
     */
    inline DeveloperInfo& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email of the developer.</p>
     */
    inline DeveloperInfo& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email of the developer.</p>
     */
    inline DeveloperInfo& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The website of the developer.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The website of the developer.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The website of the developer.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The website of the developer.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The website of the developer.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The website of the developer.</p>
     */
    inline DeveloperInfo& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The website of the developer.</p>
     */
    inline DeveloperInfo& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The website of the developer.</p>
     */
    inline DeveloperInfo& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_developerName;
    bool m_developerNameHasBeenSet;

    Aws::String m_privacyPolicy;
    bool m_privacyPolicyHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
