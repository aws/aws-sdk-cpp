/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/DescribeEphemerisResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEphemerisResult::DescribeEphemerisResult() : 
    m_enabled(false),
    m_invalidReason(EphemerisInvalidReason::NOT_SET),
    m_priority(0),
    m_status(EphemerisStatus::NOT_SET)
{
}

DescribeEphemerisResult::DescribeEphemerisResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_enabled(false),
    m_invalidReason(EphemerisInvalidReason::NOT_SET),
    m_priority(0),
    m_status(EphemerisStatus::NOT_SET)
{
  *this = result;
}

DescribeEphemerisResult& DescribeEphemerisResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

  }

  if(jsonValue.ValueExists("ephemerisId"))
  {
    m_ephemerisId = jsonValue.GetString("ephemerisId");

  }

  if(jsonValue.ValueExists("invalidReason"))
  {
    m_invalidReason = EphemerisInvalidReasonMapper::GetEphemerisInvalidReasonForName(jsonValue.GetString("invalidReason"));

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

  }

  if(jsonValue.ValueExists("satelliteId"))
  {
    m_satelliteId = jsonValue.GetString("satelliteId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EphemerisStatusMapper::GetEphemerisStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("suppliedData"))
  {
    m_suppliedData = jsonValue.GetObject("suppliedData");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
