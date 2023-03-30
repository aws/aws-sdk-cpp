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

DescribeFeaturedResultsSetResult::DescribeFeaturedResultsSetResult() : 
    m_status(FeaturedResultsSetStatus::NOT_SET),
    m_lastUpdatedTimestamp(0),
    m_creationTimestamp(0)
{
}

DescribeFeaturedResultsSetResult::DescribeFeaturedResultsSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(FeaturedResultsSetStatus::NOT_SET),
    m_lastUpdatedTimestamp(0),
    m_creationTimestamp(0)
{
  *this = result;
}

DescribeFeaturedResultsSetResult& DescribeFeaturedResultsSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FeaturedResultsSetId"))
  {
    m_featuredResultsSetId = jsonValue.GetString("FeaturedResultsSetId");

  }

  if(jsonValue.ValueExists("FeaturedResultsSetName"))
  {
    m_featuredResultsSetName = jsonValue.GetString("FeaturedResultsSetName");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FeaturedResultsSetStatusMapper::GetFeaturedResultsSetStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("QueryTexts"))
  {
    Aws::Utils::Array<JsonView> queryTextsJsonList = jsonValue.GetArray("QueryTexts");
    for(unsigned queryTextsIndex = 0; queryTextsIndex < queryTextsJsonList.GetLength(); ++queryTextsIndex)
    {
      m_queryTexts.push_back(queryTextsJsonList[queryTextsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("FeaturedDocumentsWithMetadata"))
  {
    Aws::Utils::Array<JsonView> featuredDocumentsWithMetadataJsonList = jsonValue.GetArray("FeaturedDocumentsWithMetadata");
    for(unsigned featuredDocumentsWithMetadataIndex = 0; featuredDocumentsWithMetadataIndex < featuredDocumentsWithMetadataJsonList.GetLength(); ++featuredDocumentsWithMetadataIndex)
    {
      m_featuredDocumentsWithMetadata.push_back(featuredDocumentsWithMetadataJsonList[featuredDocumentsWithMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("FeaturedDocumentsMissing"))
  {
    Aws::Utils::Array<JsonView> featuredDocumentsMissingJsonList = jsonValue.GetArray("FeaturedDocumentsMissing");
    for(unsigned featuredDocumentsMissingIndex = 0; featuredDocumentsMissingIndex < featuredDocumentsMissingJsonList.GetLength(); ++featuredDocumentsMissingIndex)
    {
      m_featuredDocumentsMissing.push_back(featuredDocumentsMissingJsonList[featuredDocumentsMissingIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetInt64("LastUpdatedTimestamp");

  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetInt64("CreationTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
