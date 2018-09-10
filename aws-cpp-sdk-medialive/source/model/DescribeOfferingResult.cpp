/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/medialive/model/DescribeOfferingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOfferingResult::DescribeOfferingResult() : 
    m_duration(0),
    m_durationUnits(OfferingDurationUnits::NOT_SET),
    m_fixedPrice(0.0),
    m_offeringType(OfferingType::NOT_SET),
    m_usagePrice(0.0)
{
}

DescribeOfferingResult::DescribeOfferingResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_duration(0),
    m_durationUnits(OfferingDurationUnits::NOT_SET),
    m_fixedPrice(0.0),
    m_offeringType(OfferingType::NOT_SET),
    m_usagePrice(0.0)
{
  *this = result;
}

DescribeOfferingResult& DescribeOfferingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

  }

  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInteger("duration");

  }

  if(jsonValue.ValueExists("durationUnits"))
  {
    m_durationUnits = OfferingDurationUnitsMapper::GetOfferingDurationUnitsForName(jsonValue.GetString("durationUnits"));

  }

  if(jsonValue.ValueExists("fixedPrice"))
  {
    m_fixedPrice = jsonValue.GetDouble("fixedPrice");

  }

  if(jsonValue.ValueExists("offeringDescription"))
  {
    m_offeringDescription = jsonValue.GetString("offeringDescription");

  }

  if(jsonValue.ValueExists("offeringId"))
  {
    m_offeringId = jsonValue.GetString("offeringId");

  }

  if(jsonValue.ValueExists("offeringType"))
  {
    m_offeringType = OfferingTypeMapper::GetOfferingTypeForName(jsonValue.GetString("offeringType"));

  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

  }

  if(jsonValue.ValueExists("resourceSpecification"))
  {
    m_resourceSpecification = jsonValue.GetObject("resourceSpecification");

  }

  if(jsonValue.ValueExists("usagePrice"))
  {
    m_usagePrice = jsonValue.GetDouble("usagePrice");

  }



  return *this;
}
