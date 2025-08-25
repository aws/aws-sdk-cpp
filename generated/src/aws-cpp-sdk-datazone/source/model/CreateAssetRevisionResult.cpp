/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateAssetRevisionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAssetRevisionResult::CreateAssetRevisionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateAssetRevisionResult& CreateAssetRevisionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalIdentifier"))
  {
    m_externalIdentifier = jsonValue.GetString("externalIdentifier");
    m_externalIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("firstRevisionCreatedAt"))
  {
    m_firstRevisionCreatedAt = jsonValue.GetDouble("firstRevisionCreatedAt");
    m_firstRevisionCreatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("firstRevisionCreatedBy"))
  {
    m_firstRevisionCreatedBy = jsonValue.GetString("firstRevisionCreatedBy");
    m_firstRevisionCreatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("formsOutput"))
  {
    Aws::Utils::Array<JsonView> formsOutputJsonList = jsonValue.GetArray("formsOutput");
    for(unsigned formsOutputIndex = 0; formsOutputIndex < formsOutputJsonList.GetLength(); ++formsOutputIndex)
    {
      m_formsOutput.push_back(formsOutputJsonList[formsOutputIndex].AsObject());
    }
    m_formsOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("glossaryTerms"))
  {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("glossaryTerms");
    for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
    {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsString());
    }
    m_glossaryTermsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("governedGlossaryTerms"))
  {
    Aws::Utils::Array<JsonView> governedGlossaryTermsJsonList = jsonValue.GetArray("governedGlossaryTerms");
    for(unsigned governedGlossaryTermsIndex = 0; governedGlossaryTermsIndex < governedGlossaryTermsJsonList.GetLength(); ++governedGlossaryTermsIndex)
    {
      m_governedGlossaryTerms.push_back(governedGlossaryTermsJsonList[governedGlossaryTermsIndex].AsString());
    }
    m_governedGlossaryTermsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestTimeSeriesDataPointFormsOutput"))
  {
    Aws::Utils::Array<JsonView> latestTimeSeriesDataPointFormsOutputJsonList = jsonValue.GetArray("latestTimeSeriesDataPointFormsOutput");
    for(unsigned latestTimeSeriesDataPointFormsOutputIndex = 0; latestTimeSeriesDataPointFormsOutputIndex < latestTimeSeriesDataPointFormsOutputJsonList.GetLength(); ++latestTimeSeriesDataPointFormsOutputIndex)
    {
      m_latestTimeSeriesDataPointFormsOutput.push_back(latestTimeSeriesDataPointFormsOutputJsonList[latestTimeSeriesDataPointFormsOutputIndex].AsObject());
    }
    m_latestTimeSeriesDataPointFormsOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listing"))
  {
    m_listing = jsonValue.GetObject("listing");
    m_listingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owningProjectId"))
  {
    m_owningProjectId = jsonValue.GetString("owningProjectId");
    m_owningProjectIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("predictionConfiguration"))
  {
    m_predictionConfiguration = jsonValue.GetObject("predictionConfiguration");
    m_predictionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("readOnlyFormsOutput"))
  {
    Aws::Utils::Array<JsonView> readOnlyFormsOutputJsonList = jsonValue.GetArray("readOnlyFormsOutput");
    for(unsigned readOnlyFormsOutputIndex = 0; readOnlyFormsOutputIndex < readOnlyFormsOutputJsonList.GetLength(); ++readOnlyFormsOutputIndex)
    {
      m_readOnlyFormsOutput.push_back(readOnlyFormsOutputJsonList[readOnlyFormsOutputIndex].AsObject());
    }
    m_readOnlyFormsOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");
    m_revisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("typeIdentifier"))
  {
    m_typeIdentifier = jsonValue.GetString("typeIdentifier");
    m_typeIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("typeRevision"))
  {
    m_typeRevision = jsonValue.GetString("typeRevision");
    m_typeRevisionHasBeenSet = true;
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
