/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SkillDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

SkillDetails::SkillDetails() : 
    m_productDescriptionHasBeenSet(false),
    m_invocationPhraseHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_endUserLicenseAgreementHasBeenSet(false),
    m_genericKeywordsHasBeenSet(false),
    m_bulletPointsHasBeenSet(false),
    m_newInThisVersionBulletPointsHasBeenSet(false),
    m_skillTypesHasBeenSet(false),
    m_reviewsHasBeenSet(false),
    m_developerInfoHasBeenSet(false)
{
}

SkillDetails::SkillDetails(JsonView jsonValue) : 
    m_productDescriptionHasBeenSet(false),
    m_invocationPhraseHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_endUserLicenseAgreementHasBeenSet(false),
    m_genericKeywordsHasBeenSet(false),
    m_bulletPointsHasBeenSet(false),
    m_newInThisVersionBulletPointsHasBeenSet(false),
    m_skillTypesHasBeenSet(false),
    m_reviewsHasBeenSet(false),
    m_developerInfoHasBeenSet(false)
{
  *this = jsonValue;
}

SkillDetails& SkillDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductDescription"))
  {
    m_productDescription = jsonValue.GetString("ProductDescription");

    m_productDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationPhrase"))
  {
    m_invocationPhrase = jsonValue.GetString("InvocationPhrase");

    m_invocationPhraseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseDate"))
  {
    m_releaseDate = jsonValue.GetString("ReleaseDate");

    m_releaseDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndUserLicenseAgreement"))
  {
    m_endUserLicenseAgreement = jsonValue.GetString("EndUserLicenseAgreement");

    m_endUserLicenseAgreementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenericKeywords"))
  {
    Aws::Utils::Array<JsonView> genericKeywordsJsonList = jsonValue.GetArray("GenericKeywords");
    for(unsigned genericKeywordsIndex = 0; genericKeywordsIndex < genericKeywordsJsonList.GetLength(); ++genericKeywordsIndex)
    {
      m_genericKeywords.push_back(genericKeywordsJsonList[genericKeywordsIndex].AsString());
    }
    m_genericKeywordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BulletPoints"))
  {
    Aws::Utils::Array<JsonView> bulletPointsJsonList = jsonValue.GetArray("BulletPoints");
    for(unsigned bulletPointsIndex = 0; bulletPointsIndex < bulletPointsJsonList.GetLength(); ++bulletPointsIndex)
    {
      m_bulletPoints.push_back(bulletPointsJsonList[bulletPointsIndex].AsString());
    }
    m_bulletPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewInThisVersionBulletPoints"))
  {
    Aws::Utils::Array<JsonView> newInThisVersionBulletPointsJsonList = jsonValue.GetArray("NewInThisVersionBulletPoints");
    for(unsigned newInThisVersionBulletPointsIndex = 0; newInThisVersionBulletPointsIndex < newInThisVersionBulletPointsJsonList.GetLength(); ++newInThisVersionBulletPointsIndex)
    {
      m_newInThisVersionBulletPoints.push_back(newInThisVersionBulletPointsJsonList[newInThisVersionBulletPointsIndex].AsString());
    }
    m_newInThisVersionBulletPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkillTypes"))
  {
    Aws::Utils::Array<JsonView> skillTypesJsonList = jsonValue.GetArray("SkillTypes");
    for(unsigned skillTypesIndex = 0; skillTypesIndex < skillTypesJsonList.GetLength(); ++skillTypesIndex)
    {
      m_skillTypes.push_back(skillTypesJsonList[skillTypesIndex].AsString());
    }
    m_skillTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reviews"))
  {
    Aws::Map<Aws::String, JsonView> reviewsJsonMap = jsonValue.GetObject("Reviews").GetAllObjects();
    for(auto& reviewsItem : reviewsJsonMap)
    {
      m_reviews[reviewsItem.first] = reviewsItem.second.AsString();
    }
    m_reviewsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeveloperInfo"))
  {
    m_developerInfo = jsonValue.GetObject("DeveloperInfo");

    m_developerInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue SkillDetails::Jsonize() const
{
  JsonValue payload;

  if(m_productDescriptionHasBeenSet)
  {
   payload.WithString("ProductDescription", m_productDescription);

  }

  if(m_invocationPhraseHasBeenSet)
  {
   payload.WithString("InvocationPhrase", m_invocationPhrase);

  }

  if(m_releaseDateHasBeenSet)
  {
   payload.WithString("ReleaseDate", m_releaseDate);

  }

  if(m_endUserLicenseAgreementHasBeenSet)
  {
   payload.WithString("EndUserLicenseAgreement", m_endUserLicenseAgreement);

  }

  if(m_genericKeywordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> genericKeywordsJsonList(m_genericKeywords.size());
   for(unsigned genericKeywordsIndex = 0; genericKeywordsIndex < genericKeywordsJsonList.GetLength(); ++genericKeywordsIndex)
   {
     genericKeywordsJsonList[genericKeywordsIndex].AsString(m_genericKeywords[genericKeywordsIndex]);
   }
   payload.WithArray("GenericKeywords", std::move(genericKeywordsJsonList));

  }

  if(m_bulletPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bulletPointsJsonList(m_bulletPoints.size());
   for(unsigned bulletPointsIndex = 0; bulletPointsIndex < bulletPointsJsonList.GetLength(); ++bulletPointsIndex)
   {
     bulletPointsJsonList[bulletPointsIndex].AsString(m_bulletPoints[bulletPointsIndex]);
   }
   payload.WithArray("BulletPoints", std::move(bulletPointsJsonList));

  }

  if(m_newInThisVersionBulletPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> newInThisVersionBulletPointsJsonList(m_newInThisVersionBulletPoints.size());
   for(unsigned newInThisVersionBulletPointsIndex = 0; newInThisVersionBulletPointsIndex < newInThisVersionBulletPointsJsonList.GetLength(); ++newInThisVersionBulletPointsIndex)
   {
     newInThisVersionBulletPointsJsonList[newInThisVersionBulletPointsIndex].AsString(m_newInThisVersionBulletPoints[newInThisVersionBulletPointsIndex]);
   }
   payload.WithArray("NewInThisVersionBulletPoints", std::move(newInThisVersionBulletPointsJsonList));

  }

  if(m_skillTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> skillTypesJsonList(m_skillTypes.size());
   for(unsigned skillTypesIndex = 0; skillTypesIndex < skillTypesJsonList.GetLength(); ++skillTypesIndex)
   {
     skillTypesJsonList[skillTypesIndex].AsString(m_skillTypes[skillTypesIndex]);
   }
   payload.WithArray("SkillTypes", std::move(skillTypesJsonList));

  }

  if(m_reviewsHasBeenSet)
  {
   JsonValue reviewsJsonMap;
   for(auto& reviewsItem : m_reviews)
   {
     reviewsJsonMap.WithString(reviewsItem.first, reviewsItem.second);
   }
   payload.WithObject("Reviews", std::move(reviewsJsonMap));

  }

  if(m_developerInfoHasBeenSet)
  {
   payload.WithObject("DeveloperInfo", m_developerInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
