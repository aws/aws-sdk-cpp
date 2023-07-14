/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CreateLanguageModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateLanguageModelResult::CreateLanguageModelResult() : 
    m_languageCode(CLMLanguageCode::NOT_SET),
    m_baseModelName(BaseModelName::NOT_SET),
    m_modelStatus(ModelStatus::NOT_SET)
{
}

CreateLanguageModelResult::CreateLanguageModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_languageCode(CLMLanguageCode::NOT_SET),
    m_baseModelName(BaseModelName::NOT_SET),
    m_modelStatus(ModelStatus::NOT_SET)
{
  *this = result;
}

CreateLanguageModelResult& CreateLanguageModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = CLMLanguageCodeMapper::GetCLMLanguageCodeForName(jsonValue.GetString("LanguageCode"));

  }

  if(jsonValue.ValueExists("BaseModelName"))
  {
    m_baseModelName = BaseModelNameMapper::GetBaseModelNameForName(jsonValue.GetString("BaseModelName"));

  }

  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    m_inputDataConfig = jsonValue.GetObject("InputDataConfig");

  }

  if(jsonValue.ValueExists("ModelStatus"))
  {
    m_modelStatus = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("ModelStatus"));

  }



  return *this;
}
