/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DescribeJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeJobResult::DescribeJobResult() : 
    m_encryptionMode(EncryptionMode::NOT_SET),
    m_type(JobType::NOT_SET),
    m_logSubscription(LogSubscription::NOT_SET),
    m_maxCapacity(0),
    m_maxRetries(0),
    m_timeout(0)
{
}

DescribeJobResult::DescribeJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_encryptionMode(EncryptionMode::NOT_SET),
    m_type(JobType::NOT_SET),
    m_logSubscription(LogSubscription::NOT_SET),
    m_maxCapacity(0),
    m_maxRetries(0),
    m_timeout(0)
{
  *this = result;
}

DescribeJobResult& DescribeJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetDouble("CreateDate");

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

  }

  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

  }

  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");

  }

  if(jsonValue.ValueExists("EncryptionMode"))
  {
    m_encryptionMode = EncryptionModeMapper::GetEncryptionModeForName(jsonValue.GetString("EncryptionMode"));

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");

  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

  }

  if(jsonValue.ValueExists("LogSubscription"))
  {
    m_logSubscription = LogSubscriptionMapper::GetLogSubscriptionForName(jsonValue.GetString("LogSubscription"));

  }

  if(jsonValue.ValueExists("MaxCapacity"))
  {
    m_maxCapacity = jsonValue.GetInteger("MaxCapacity");

  }

  if(jsonValue.ValueExists("MaxRetries"))
  {
    m_maxRetries = jsonValue.GetInteger("MaxRetries");

  }

  if(jsonValue.ValueExists("Outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("Outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DataCatalogOutputs"))
  {
    Aws::Utils::Array<JsonView> dataCatalogOutputsJsonList = jsonValue.GetArray("DataCatalogOutputs");
    for(unsigned dataCatalogOutputsIndex = 0; dataCatalogOutputsIndex < dataCatalogOutputsJsonList.GetLength(); ++dataCatalogOutputsIndex)
    {
      m_dataCatalogOutputs.push_back(dataCatalogOutputsJsonList[dataCatalogOutputsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DatabaseOutputs"))
  {
    Aws::Utils::Array<JsonView> databaseOutputsJsonList = jsonValue.GetArray("DatabaseOutputs");
    for(unsigned databaseOutputsIndex = 0; databaseOutputsIndex < databaseOutputsJsonList.GetLength(); ++databaseOutputsIndex)
    {
      m_databaseOutputs.push_back(databaseOutputsJsonList[databaseOutputsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");

  }

  if(jsonValue.ValueExists("ProfileConfiguration"))
  {
    m_profileConfiguration = jsonValue.GetObject("ProfileConfiguration");

  }

  if(jsonValue.ValueExists("ValidationConfigurations"))
  {
    Aws::Utils::Array<JsonView> validationConfigurationsJsonList = jsonValue.GetArray("ValidationConfigurations");
    for(unsigned validationConfigurationsIndex = 0; validationConfigurationsIndex < validationConfigurationsJsonList.GetLength(); ++validationConfigurationsIndex)
    {
      m_validationConfigurations.push_back(validationConfigurationsJsonList[validationConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("RecipeReference"))
  {
    m_recipeReference = jsonValue.GetObject("RecipeReference");

  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

  }

  if(jsonValue.ValueExists("JobSample"))
  {
    m_jobSample = jsonValue.GetObject("JobSample");

  }



  return *this;
}
