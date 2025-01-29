/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/SimpleScalarPropertiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SimpleScalarPropertiesResult::SimpleScalarPropertiesResult() : 
    m_trueBooleanValue(false),
    m_falseBooleanValue(false),
    m_byteValue(0),
    m_shortValue(0),
    m_integerValue(0),
    m_longValue(0),
    m_floatValue(0.0),
    m_doubleValue(0.0)
{
}

SimpleScalarPropertiesResult::SimpleScalarPropertiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : SimpleScalarPropertiesResult()
{
  *this = result;
}

SimpleScalarPropertiesResult& SimpleScalarPropertiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

  }

  if(jsonValue.ValueExists("trueBooleanValue"))
  {
    m_trueBooleanValue = jsonValue.GetBool("trueBooleanValue");

  }

  if(jsonValue.ValueExists("falseBooleanValue"))
  {
    m_falseBooleanValue = jsonValue.GetBool("falseBooleanValue");

  }

  if(jsonValue.ValueExists("byteValue"))
  {
    m_byteValue = jsonValue.GetInteger("byteValue");

  }

  if(jsonValue.ValueExists("shortValue"))
  {
    m_shortValue = jsonValue.GetInteger("shortValue");

  }

  if(jsonValue.ValueExists("integerValue"))
  {
    m_integerValue = jsonValue.GetInteger("integerValue");

  }

  if(jsonValue.ValueExists("longValue"))
  {
    m_longValue = jsonValue.GetInt64("longValue");

  }

  if(jsonValue.ValueExists("floatValue"))
  {
    m_floatValue = jsonValue.GetDouble("floatValue");

  }

  if(jsonValue.ValueExists("DoubleDribble"))
  {
    m_doubleValue = jsonValue.GetDouble("DoubleDribble");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& fooIter = headers.find("x-foo");
  if(fooIter != headers.end())
  {
    m_foo = fooIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
