/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeFeaturedResultsSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFeaturedResultsSetResult::DescribeFeaturedResultsSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFeaturedResultsSetResult& DescribeFeaturedResultsSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FeaturedResultsSetId"))
  {
    m_featuredResultsSetId = jsonValue.GetString("FeaturedResultsSetId");
    m_featuredResultsSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeaturedResultsSetName"))
  {
    m_featuredResultsSetName = jsonValue.GetString("FeaturedResultsSetName");
    m_featuredResultsSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = FeaturedResultsSetStatusMapper::GetFeaturedResultsSetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryTexts"))
  {
    Aws::Utils::Array<JsonView> queryTextsJsonList = jsonValue.GetArray("QueryTexts");
    for(unsigned queryTextsIndex = 0; queryTextsIndex < queryTextsJsonList.GetLength(); ++queryTextsIndex)
    {
      m_queryTexts.push_back(queryTextsJsonList[queryTextsIndex].AsString());
    }
    m_queryTextsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeaturedDocumentsWithMetadata"))
  {
    Aws::Utils::Array<JsonView> featuredDocumentsWithMetadataJsonList = jsonValue.GetArray("FeaturedDocumentsWithMetadata");
    for(unsigned featuredDocumentsWithMetadataIndex = 0; featuredDocumentsWithMetadataIndex < featuredDocumentsWithMetadataJsonList.GetLength(); ++featuredDocumentsWithMetadataIndex)
    {
      m_featuredDocumentsWithMetadata.push_back(featuredDocumentsWithMetadataJsonList[featuredDocumentsWithMetadataIndex].AsObject());
    }
    m_featuredDocumentsWithMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeaturedDocumentsMissing"))
  {
    Aws::Utils::Array<JsonView> featuredDocumentsMissingJsonList = jsonValue.GetArray("FeaturedDocumentsMissing");
    for(unsigned featuredDocumentsMissingIndex = 0; featuredDocumentsMissingIndex < featuredDocumentsMissingJsonList.GetLength(); ++featuredDocumentsMissingIndex)
    {
      m_featuredDocumentsMissing.push_back(featuredDocumentsMissingJsonList[featuredDocumentsMissingIndex].AsObject());
    }
    m_featuredDocumentsMissingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetInt64("LastUpdatedTimestamp");
    m_lastUpdatedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetInt64("CreationTimestamp");
    m_creationTimestampHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
