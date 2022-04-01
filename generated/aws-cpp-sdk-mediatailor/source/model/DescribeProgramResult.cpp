﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/DescribeProgramResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProgramResult::DescribeProgramResult()
{
}

DescribeProgramResult::DescribeProgramResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProgramResult& DescribeProgramResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdBreaks"))
  {
    Array<JsonView> adBreaksJsonList = jsonValue.GetArray("AdBreaks");
    for(unsigned adBreaksIndex = 0; adBreaksIndex < adBreaksJsonList.GetLength(); ++adBreaksIndex)
    {
      m_adBreaks.push_back(adBreaksJsonList[adBreaksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("ProgramName"))
  {
    m_programName = jsonValue.GetString("ProgramName");

  }

  if(jsonValue.ValueExists("ScheduledStartTime"))
  {
    m_scheduledStartTime = jsonValue.GetDouble("ScheduledStartTime");

  }

  if(jsonValue.ValueExists("SourceLocationName"))
  {
    m_sourceLocationName = jsonValue.GetString("SourceLocationName");

  }

  if(jsonValue.ValueExists("VodSourceName"))
  {
    m_vodSourceName = jsonValue.GetString("VodSourceName");

  }



  return *this;
}
