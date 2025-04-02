/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeIntentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeIntentResult::DescribeIntentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeIntentResult& DescribeIntentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("intentId"))
  {
    m_intentId = jsonValue.GetString("intentId");
    m_intentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");
    m_intentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentIntentSignature"))
  {
    m_parentIntentSignature = jsonValue.GetString("parentIntentSignature");
    m_parentIntentSignatureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleUtterances"))
  {
    Aws::Utils::Array<JsonView> sampleUtterancesJsonList = jsonValue.GetArray("sampleUtterances");
    for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
    {
      m_sampleUtterances.push_back(sampleUtterancesJsonList[sampleUtterancesIndex].AsObject());
    }
    m_sampleUtterancesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dialogCodeHook"))
  {
    m_dialogCodeHook = jsonValue.GetObject("dialogCodeHook");
    m_dialogCodeHookHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fulfillmentCodeHook"))
  {
    m_fulfillmentCodeHook = jsonValue.GetObject("fulfillmentCodeHook");
    m_fulfillmentCodeHookHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotPriorities"))
  {
    Aws::Utils::Array<JsonView> slotPrioritiesJsonList = jsonValue.GetArray("slotPriorities");
    for(unsigned slotPrioritiesIndex = 0; slotPrioritiesIndex < slotPrioritiesJsonList.GetLength(); ++slotPrioritiesIndex)
    {
      m_slotPriorities.push_back(slotPrioritiesJsonList[slotPrioritiesIndex].AsObject());
    }
    m_slotPrioritiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("intentConfirmationSetting"))
  {
    m_intentConfirmationSetting = jsonValue.GetObject("intentConfirmationSetting");
    m_intentConfirmationSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("intentClosingSetting"))
  {
    m_intentClosingSetting = jsonValue.GetObject("intentClosingSetting");
    m_intentClosingSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputContexts"))
  {
    Aws::Utils::Array<JsonView> inputContextsJsonList = jsonValue.GetArray("inputContexts");
    for(unsigned inputContextsIndex = 0; inputContextsIndex < inputContextsJsonList.GetLength(); ++inputContextsIndex)
    {
      m_inputContexts.push_back(inputContextsJsonList[inputContextsIndex].AsObject());
    }
    m_inputContextsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputContexts"))
  {
    Aws::Utils::Array<JsonView> outputContextsJsonList = jsonValue.GetArray("outputContexts");
    for(unsigned outputContextsIndex = 0; outputContextsIndex < outputContextsJsonList.GetLength(); ++outputContextsIndex)
    {
      m_outputContexts.push_back(outputContextsJsonList[outputContextsIndex].AsObject());
    }
    m_outputContextsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kendraConfiguration"))
  {
    m_kendraConfiguration = jsonValue.GetObject("kendraConfiguration");
    m_kendraConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");
    m_botIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");
    m_botVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");
    m_localeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");
    m_lastUpdatedDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("initialResponseSetting"))
  {
    m_initialResponseSetting = jsonValue.GetObject("initialResponseSetting");
    m_initialResponseSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qnAIntentConfiguration"))
  {
    m_qnAIntentConfiguration = jsonValue.GetObject("qnAIntentConfiguration");
    m_qnAIntentConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qInConnectIntentConfiguration"))
  {
    m_qInConnectIntentConfiguration = jsonValue.GetObject("qInConnectIntentConfiguration");
    m_qInConnectIntentConfigurationHasBeenSet = true;
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
