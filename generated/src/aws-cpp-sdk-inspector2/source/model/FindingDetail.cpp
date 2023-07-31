/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FindingDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

FindingDetail::FindingDetail() : 
    m_cisaDataHasBeenSet(false),
    m_cwesHasBeenSet(false),
    m_epssScore(0.0),
    m_epssScoreHasBeenSet(false),
    m_evidencesHasBeenSet(false),
    m_exploitObservedHasBeenSet(false),
    m_findingArnHasBeenSet(false),
    m_referenceUrlsHasBeenSet(false),
    m_riskScore(0),
    m_riskScoreHasBeenSet(false),
    m_toolsHasBeenSet(false),
    m_ttpsHasBeenSet(false)
{
}

FindingDetail::FindingDetail(JsonView jsonValue) : 
    m_cisaDataHasBeenSet(false),
    m_cwesHasBeenSet(false),
    m_epssScore(0.0),
    m_epssScoreHasBeenSet(false),
    m_evidencesHasBeenSet(false),
    m_exploitObservedHasBeenSet(false),
    m_findingArnHasBeenSet(false),
    m_referenceUrlsHasBeenSet(false),
    m_riskScore(0),
    m_riskScoreHasBeenSet(false),
    m_toolsHasBeenSet(false),
    m_ttpsHasBeenSet(false)
{
  *this = jsonValue;
}

FindingDetail& FindingDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cisaData"))
  {
    m_cisaData = jsonValue.GetObject("cisaData");

    m_cisaDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cwes"))
  {
    Aws::Utils::Array<JsonView> cwesJsonList = jsonValue.GetArray("cwes");
    for(unsigned cwesIndex = 0; cwesIndex < cwesJsonList.GetLength(); ++cwesIndex)
    {
      m_cwes.push_back(cwesJsonList[cwesIndex].AsString());
    }
    m_cwesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("epssScore"))
  {
    m_epssScore = jsonValue.GetDouble("epssScore");

    m_epssScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidences"))
  {
    Aws::Utils::Array<JsonView> evidencesJsonList = jsonValue.GetArray("evidences");
    for(unsigned evidencesIndex = 0; evidencesIndex < evidencesJsonList.GetLength(); ++evidencesIndex)
    {
      m_evidences.push_back(evidencesJsonList[evidencesIndex].AsObject());
    }
    m_evidencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exploitObserved"))
  {
    m_exploitObserved = jsonValue.GetObject("exploitObserved");

    m_exploitObservedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingArn"))
  {
    m_findingArn = jsonValue.GetString("findingArn");

    m_findingArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceUrls"))
  {
    Aws::Utils::Array<JsonView> referenceUrlsJsonList = jsonValue.GetArray("referenceUrls");
    for(unsigned referenceUrlsIndex = 0; referenceUrlsIndex < referenceUrlsJsonList.GetLength(); ++referenceUrlsIndex)
    {
      m_referenceUrls.push_back(referenceUrlsJsonList[referenceUrlsIndex].AsString());
    }
    m_referenceUrlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("riskScore"))
  {
    m_riskScore = jsonValue.GetInteger("riskScore");

    m_riskScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tools"))
  {
    Aws::Utils::Array<JsonView> toolsJsonList = jsonValue.GetArray("tools");
    for(unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex)
    {
      m_tools.push_back(toolsJsonList[toolsIndex].AsString());
    }
    m_toolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ttps"))
  {
    Aws::Utils::Array<JsonView> ttpsJsonList = jsonValue.GetArray("ttps");
    for(unsigned ttpsIndex = 0; ttpsIndex < ttpsJsonList.GetLength(); ++ttpsIndex)
    {
      m_ttps.push_back(ttpsJsonList[ttpsIndex].AsString());
    }
    m_ttpsHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingDetail::Jsonize() const
{
  JsonValue payload;

  if(m_cisaDataHasBeenSet)
  {
   payload.WithObject("cisaData", m_cisaData.Jsonize());

  }

  if(m_cwesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cwesJsonList(m_cwes.size());
   for(unsigned cwesIndex = 0; cwesIndex < cwesJsonList.GetLength(); ++cwesIndex)
   {
     cwesJsonList[cwesIndex].AsString(m_cwes[cwesIndex]);
   }
   payload.WithArray("cwes", std::move(cwesJsonList));

  }

  if(m_epssScoreHasBeenSet)
  {
   payload.WithDouble("epssScore", m_epssScore);

  }

  if(m_evidencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> evidencesJsonList(m_evidences.size());
   for(unsigned evidencesIndex = 0; evidencesIndex < evidencesJsonList.GetLength(); ++evidencesIndex)
   {
     evidencesJsonList[evidencesIndex].AsObject(m_evidences[evidencesIndex].Jsonize());
   }
   payload.WithArray("evidences", std::move(evidencesJsonList));

  }

  if(m_exploitObservedHasBeenSet)
  {
   payload.WithObject("exploitObserved", m_exploitObserved.Jsonize());

  }

  if(m_findingArnHasBeenSet)
  {
   payload.WithString("findingArn", m_findingArn);

  }

  if(m_referenceUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referenceUrlsJsonList(m_referenceUrls.size());
   for(unsigned referenceUrlsIndex = 0; referenceUrlsIndex < referenceUrlsJsonList.GetLength(); ++referenceUrlsIndex)
   {
     referenceUrlsJsonList[referenceUrlsIndex].AsString(m_referenceUrls[referenceUrlsIndex]);
   }
   payload.WithArray("referenceUrls", std::move(referenceUrlsJsonList));

  }

  if(m_riskScoreHasBeenSet)
  {
   payload.WithInteger("riskScore", m_riskScore);

  }

  if(m_toolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> toolsJsonList(m_tools.size());
   for(unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex)
   {
     toolsJsonList[toolsIndex].AsString(m_tools[toolsIndex]);
   }
   payload.WithArray("tools", std::move(toolsJsonList));

  }

  if(m_ttpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ttpsJsonList(m_ttps.size());
   for(unsigned ttpsIndex = 0; ttpsIndex < ttpsJsonList.GetLength(); ++ttpsIndex)
   {
     ttpsJsonList[ttpsIndex].AsString(m_ttps[ttpsIndex]);
   }
   payload.WithArray("ttps", std::move(ttpsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
