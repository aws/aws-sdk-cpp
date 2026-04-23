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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/alexaforbusiness/model/DeveloperInfo.h>
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
   * <p>Granular information about the skill.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SkillDetails">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API SkillDetails
  {
  public:
    SkillDetails();
    SkillDetails(Aws::Utils::Json::JsonView jsonValue);
    SkillDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the product.</p>
     */
    inline const Aws::String& GetProductDescription() const{ return m_productDescription; }

    /**
     * <p>The description of the product.</p>
     */
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }

    /**
     * <p>The description of the product.</p>
     */
    inline void SetProductDescription(const Aws::String& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The description of the product.</p>
     */
    inline void SetProductDescription(Aws::String&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }

    /**
     * <p>The description of the product.</p>
     */
    inline void SetProductDescription(const char* value) { m_productDescriptionHasBeenSet = true; m_productDescription.assign(value); }

    /**
     * <p>The description of the product.</p>
     */
    inline SkillDetails& WithProductDescription(const Aws::String& value) { SetProductDescription(value); return *this;}

    /**
     * <p>The description of the product.</p>
     */
    inline SkillDetails& WithProductDescription(Aws::String&& value) { SetProductDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the product.</p>
     */
    inline SkillDetails& WithProductDescription(const char* value) { SetProductDescription(value); return *this;}


    /**
     * <p>The phrase used to trigger the skill.</p>
     */
    inline const Aws::String& GetInvocationPhrase() const{ return m_invocationPhrase; }

    /**
     * <p>The phrase used to trigger the skill.</p>
     */
    inline bool InvocationPhraseHasBeenSet() const { return m_invocationPhraseHasBeenSet; }

    /**
     * <p>The phrase used to trigger the skill.</p>
     */
    inline void SetInvocationPhrase(const Aws::String& value) { m_invocationPhraseHasBeenSet = true; m_invocationPhrase = value; }

    /**
     * <p>The phrase used to trigger the skill.</p>
     */
    inline void SetInvocationPhrase(Aws::String&& value) { m_invocationPhraseHasBeenSet = true; m_invocationPhrase = std::move(value); }

    /**
     * <p>The phrase used to trigger the skill.</p>
     */
    inline void SetInvocationPhrase(const char* value) { m_invocationPhraseHasBeenSet = true; m_invocationPhrase.assign(value); }

    /**
     * <p>The phrase used to trigger the skill.</p>
     */
    inline SkillDetails& WithInvocationPhrase(const Aws::String& value) { SetInvocationPhrase(value); return *this;}

    /**
     * <p>The phrase used to trigger the skill.</p>
     */
    inline SkillDetails& WithInvocationPhrase(Aws::String&& value) { SetInvocationPhrase(std::move(value)); return *this;}

    /**
     * <p>The phrase used to trigger the skill.</p>
     */
    inline SkillDetails& WithInvocationPhrase(const char* value) { SetInvocationPhrase(value); return *this;}


    /**
     * <p>The date when the skill was released.</p>
     */
    inline const Aws::String& GetReleaseDate() const{ return m_releaseDate; }

    /**
     * <p>The date when the skill was released.</p>
     */
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }

    /**
     * <p>The date when the skill was released.</p>
     */
    inline void SetReleaseDate(const Aws::String& value) { m_releaseDateHasBeenSet = true; m_releaseDate = value; }

    /**
     * <p>The date when the skill was released.</p>
     */
    inline void SetReleaseDate(Aws::String&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::move(value); }

    /**
     * <p>The date when the skill was released.</p>
     */
    inline void SetReleaseDate(const char* value) { m_releaseDateHasBeenSet = true; m_releaseDate.assign(value); }

    /**
     * <p>The date when the skill was released.</p>
     */
    inline SkillDetails& WithReleaseDate(const Aws::String& value) { SetReleaseDate(value); return *this;}

    /**
     * <p>The date when the skill was released.</p>
     */
    inline SkillDetails& WithReleaseDate(Aws::String&& value) { SetReleaseDate(std::move(value)); return *this;}

    /**
     * <p>The date when the skill was released.</p>
     */
    inline SkillDetails& WithReleaseDate(const char* value) { SetReleaseDate(value); return *this;}


    /**
     * <p>The URL of the end user license agreement.</p>
     */
    inline const Aws::String& GetEndUserLicenseAgreement() const{ return m_endUserLicenseAgreement; }

    /**
     * <p>The URL of the end user license agreement.</p>
     */
    inline bool EndUserLicenseAgreementHasBeenSet() const { return m_endUserLicenseAgreementHasBeenSet; }

    /**
     * <p>The URL of the end user license agreement.</p>
     */
    inline void SetEndUserLicenseAgreement(const Aws::String& value) { m_endUserLicenseAgreementHasBeenSet = true; m_endUserLicenseAgreement = value; }

    /**
     * <p>The URL of the end user license agreement.</p>
     */
    inline void SetEndUserLicenseAgreement(Aws::String&& value) { m_endUserLicenseAgreementHasBeenSet = true; m_endUserLicenseAgreement = std::move(value); }

    /**
     * <p>The URL of the end user license agreement.</p>
     */
    inline void SetEndUserLicenseAgreement(const char* value) { m_endUserLicenseAgreementHasBeenSet = true; m_endUserLicenseAgreement.assign(value); }

    /**
     * <p>The URL of the end user license agreement.</p>
     */
    inline SkillDetails& WithEndUserLicenseAgreement(const Aws::String& value) { SetEndUserLicenseAgreement(value); return *this;}

    /**
     * <p>The URL of the end user license agreement.</p>
     */
    inline SkillDetails& WithEndUserLicenseAgreement(Aws::String&& value) { SetEndUserLicenseAgreement(std::move(value)); return *this;}

    /**
     * <p>The URL of the end user license agreement.</p>
     */
    inline SkillDetails& WithEndUserLicenseAgreement(const char* value) { SetEndUserLicenseAgreement(value); return *this;}


    /**
     * <p>The generic keywords associated with the skill that can be used to find a
     * skill.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGenericKeywords() const{ return m_genericKeywords; }

    /**
     * <p>The generic keywords associated with the skill that can be used to find a
     * skill.</p>
     */
    inline bool GenericKeywordsHasBeenSet() const { return m_genericKeywordsHasBeenSet; }

    /**
     * <p>The generic keywords associated with the skill that can be used to find a
     * skill.</p>
     */
    inline void SetGenericKeywords(const Aws::Vector<Aws::String>& value) { m_genericKeywordsHasBeenSet = true; m_genericKeywords = value; }

    /**
     * <p>The generic keywords associated with the skill that can be used to find a
     * skill.</p>
     */
    inline void SetGenericKeywords(Aws::Vector<Aws::String>&& value) { m_genericKeywordsHasBeenSet = true; m_genericKeywords = std::move(value); }

    /**
     * <p>The generic keywords associated with the skill that can be used to find a
     * skill.</p>
     */
    inline SkillDetails& WithGenericKeywords(const Aws::Vector<Aws::String>& value) { SetGenericKeywords(value); return *this;}

    /**
     * <p>The generic keywords associated with the skill that can be used to find a
     * skill.</p>
     */
    inline SkillDetails& WithGenericKeywords(Aws::Vector<Aws::String>&& value) { SetGenericKeywords(std::move(value)); return *this;}

    /**
     * <p>The generic keywords associated with the skill that can be used to find a
     * skill.</p>
     */
    inline SkillDetails& AddGenericKeywords(const Aws::String& value) { m_genericKeywordsHasBeenSet = true; m_genericKeywords.push_back(value); return *this; }

    /**
     * <p>The generic keywords associated with the skill that can be used to find a
     * skill.</p>
     */
    inline SkillDetails& AddGenericKeywords(Aws::String&& value) { m_genericKeywordsHasBeenSet = true; m_genericKeywords.push_back(std::move(value)); return *this; }

    /**
     * <p>The generic keywords associated with the skill that can be used to find a
     * skill.</p>
     */
    inline SkillDetails& AddGenericKeywords(const char* value) { m_genericKeywordsHasBeenSet = true; m_genericKeywords.push_back(value); return *this; }


    /**
     * <p>The details about what the skill supports organized as bullet points.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBulletPoints() const{ return m_bulletPoints; }

    /**
     * <p>The details about what the skill supports organized as bullet points.</p>
     */
    inline bool BulletPointsHasBeenSet() const { return m_bulletPointsHasBeenSet; }

    /**
     * <p>The details about what the skill supports organized as bullet points.</p>
     */
    inline void SetBulletPoints(const Aws::Vector<Aws::String>& value) { m_bulletPointsHasBeenSet = true; m_bulletPoints = value; }

    /**
     * <p>The details about what the skill supports organized as bullet points.</p>
     */
    inline void SetBulletPoints(Aws::Vector<Aws::String>&& value) { m_bulletPointsHasBeenSet = true; m_bulletPoints = std::move(value); }

    /**
     * <p>The details about what the skill supports organized as bullet points.</p>
     */
    inline SkillDetails& WithBulletPoints(const Aws::Vector<Aws::String>& value) { SetBulletPoints(value); return *this;}

    /**
     * <p>The details about what the skill supports organized as bullet points.</p>
     */
    inline SkillDetails& WithBulletPoints(Aws::Vector<Aws::String>&& value) { SetBulletPoints(std::move(value)); return *this;}

    /**
     * <p>The details about what the skill supports organized as bullet points.</p>
     */
    inline SkillDetails& AddBulletPoints(const Aws::String& value) { m_bulletPointsHasBeenSet = true; m_bulletPoints.push_back(value); return *this; }

    /**
     * <p>The details about what the skill supports organized as bullet points.</p>
     */
    inline SkillDetails& AddBulletPoints(Aws::String&& value) { m_bulletPointsHasBeenSet = true; m_bulletPoints.push_back(std::move(value)); return *this; }

    /**
     * <p>The details about what the skill supports organized as bullet points.</p>
     */
    inline SkillDetails& AddBulletPoints(const char* value) { m_bulletPointsHasBeenSet = true; m_bulletPoints.push_back(value); return *this; }


    /**
     * <p>The updates added in bullet points.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNewInThisVersionBulletPoints() const{ return m_newInThisVersionBulletPoints; }

    /**
     * <p>The updates added in bullet points.</p>
     */
    inline bool NewInThisVersionBulletPointsHasBeenSet() const { return m_newInThisVersionBulletPointsHasBeenSet; }

    /**
     * <p>The updates added in bullet points.</p>
     */
    inline void SetNewInThisVersionBulletPoints(const Aws::Vector<Aws::String>& value) { m_newInThisVersionBulletPointsHasBeenSet = true; m_newInThisVersionBulletPoints = value; }

    /**
     * <p>The updates added in bullet points.</p>
     */
    inline void SetNewInThisVersionBulletPoints(Aws::Vector<Aws::String>&& value) { m_newInThisVersionBulletPointsHasBeenSet = true; m_newInThisVersionBulletPoints = std::move(value); }

    /**
     * <p>The updates added in bullet points.</p>
     */
    inline SkillDetails& WithNewInThisVersionBulletPoints(const Aws::Vector<Aws::String>& value) { SetNewInThisVersionBulletPoints(value); return *this;}

    /**
     * <p>The updates added in bullet points.</p>
     */
    inline SkillDetails& WithNewInThisVersionBulletPoints(Aws::Vector<Aws::String>&& value) { SetNewInThisVersionBulletPoints(std::move(value)); return *this;}

    /**
     * <p>The updates added in bullet points.</p>
     */
    inline SkillDetails& AddNewInThisVersionBulletPoints(const Aws::String& value) { m_newInThisVersionBulletPointsHasBeenSet = true; m_newInThisVersionBulletPoints.push_back(value); return *this; }

    /**
     * <p>The updates added in bullet points.</p>
     */
    inline SkillDetails& AddNewInThisVersionBulletPoints(Aws::String&& value) { m_newInThisVersionBulletPointsHasBeenSet = true; m_newInThisVersionBulletPoints.push_back(std::move(value)); return *this; }

    /**
     * <p>The updates added in bullet points.</p>
     */
    inline SkillDetails& AddNewInThisVersionBulletPoints(const char* value) { m_newInThisVersionBulletPointsHasBeenSet = true; m_newInThisVersionBulletPoints.push_back(value); return *this; }


    /**
     * <p>The types of skills.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSkillTypes() const{ return m_skillTypes; }

    /**
     * <p>The types of skills.</p>
     */
    inline bool SkillTypesHasBeenSet() const { return m_skillTypesHasBeenSet; }

    /**
     * <p>The types of skills.</p>
     */
    inline void SetSkillTypes(const Aws::Vector<Aws::String>& value) { m_skillTypesHasBeenSet = true; m_skillTypes = value; }

    /**
     * <p>The types of skills.</p>
     */
    inline void SetSkillTypes(Aws::Vector<Aws::String>&& value) { m_skillTypesHasBeenSet = true; m_skillTypes = std::move(value); }

    /**
     * <p>The types of skills.</p>
     */
    inline SkillDetails& WithSkillTypes(const Aws::Vector<Aws::String>& value) { SetSkillTypes(value); return *this;}

    /**
     * <p>The types of skills.</p>
     */
    inline SkillDetails& WithSkillTypes(Aws::Vector<Aws::String>&& value) { SetSkillTypes(std::move(value)); return *this;}

    /**
     * <p>The types of skills.</p>
     */
    inline SkillDetails& AddSkillTypes(const Aws::String& value) { m_skillTypesHasBeenSet = true; m_skillTypes.push_back(value); return *this; }

    /**
     * <p>The types of skills.</p>
     */
    inline SkillDetails& AddSkillTypes(Aws::String&& value) { m_skillTypesHasBeenSet = true; m_skillTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The types of skills.</p>
     */
    inline SkillDetails& AddSkillTypes(const char* value) { m_skillTypesHasBeenSet = true; m_skillTypes.push_back(value); return *this; }


    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetReviews() const{ return m_reviews; }

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline bool ReviewsHasBeenSet() const { return m_reviewsHasBeenSet; }

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline void SetReviews(const Aws::Map<Aws::String, Aws::String>& value) { m_reviewsHasBeenSet = true; m_reviews = value; }

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline void SetReviews(Aws::Map<Aws::String, Aws::String>&& value) { m_reviewsHasBeenSet = true; m_reviews = std::move(value); }

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline SkillDetails& WithReviews(const Aws::Map<Aws::String, Aws::String>& value) { SetReviews(value); return *this;}

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline SkillDetails& WithReviews(Aws::Map<Aws::String, Aws::String>&& value) { SetReviews(std::move(value)); return *this;}

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline SkillDetails& AddReviews(const Aws::String& key, const Aws::String& value) { m_reviewsHasBeenSet = true; m_reviews.emplace(key, value); return *this; }

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline SkillDetails& AddReviews(Aws::String&& key, const Aws::String& value) { m_reviewsHasBeenSet = true; m_reviews.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline SkillDetails& AddReviews(const Aws::String& key, Aws::String&& value) { m_reviewsHasBeenSet = true; m_reviews.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline SkillDetails& AddReviews(Aws::String&& key, Aws::String&& value) { m_reviewsHasBeenSet = true; m_reviews.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline SkillDetails& AddReviews(const char* key, Aws::String&& value) { m_reviewsHasBeenSet = true; m_reviews.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline SkillDetails& AddReviews(Aws::String&& key, const char* value) { m_reviewsHasBeenSet = true; m_reviews.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of reviews for the skill, including Key and Value pair.</p>
     */
    inline SkillDetails& AddReviews(const char* key, const char* value) { m_reviewsHasBeenSet = true; m_reviews.emplace(key, value); return *this; }


    /**
     * <p>The details about the developer that published the skill.</p>
     */
    inline const DeveloperInfo& GetDeveloperInfo() const{ return m_developerInfo; }

    /**
     * <p>The details about the developer that published the skill.</p>
     */
    inline bool DeveloperInfoHasBeenSet() const { return m_developerInfoHasBeenSet; }

    /**
     * <p>The details about the developer that published the skill.</p>
     */
    inline void SetDeveloperInfo(const DeveloperInfo& value) { m_developerInfoHasBeenSet = true; m_developerInfo = value; }

    /**
     * <p>The details about the developer that published the skill.</p>
     */
    inline void SetDeveloperInfo(DeveloperInfo&& value) { m_developerInfoHasBeenSet = true; m_developerInfo = std::move(value); }

    /**
     * <p>The details about the developer that published the skill.</p>
     */
    inline SkillDetails& WithDeveloperInfo(const DeveloperInfo& value) { SetDeveloperInfo(value); return *this;}

    /**
     * <p>The details about the developer that published the skill.</p>
     */
    inline SkillDetails& WithDeveloperInfo(DeveloperInfo&& value) { SetDeveloperInfo(std::move(value)); return *this;}

  private:

    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet;

    Aws::String m_invocationPhrase;
    bool m_invocationPhraseHasBeenSet;

    Aws::String m_releaseDate;
    bool m_releaseDateHasBeenSet;

    Aws::String m_endUserLicenseAgreement;
    bool m_endUserLicenseAgreementHasBeenSet;

    Aws::Vector<Aws::String> m_genericKeywords;
    bool m_genericKeywordsHasBeenSet;

    Aws::Vector<Aws::String> m_bulletPoints;
    bool m_bulletPointsHasBeenSet;

    Aws::Vector<Aws::String> m_newInThisVersionBulletPoints;
    bool m_newInThisVersionBulletPointsHasBeenSet;

    Aws::Vector<Aws::String> m_skillTypes;
    bool m_skillTypesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_reviews;
    bool m_reviewsHasBeenSet;

    DeveloperInfo m_developerInfo;
    bool m_developerInfoHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
