﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetPositionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPositionResult::GetPositionResult() : 
    m_solverType(PositionSolverType::NOT_SET),
    m_solverProvider(PositionSolverProvider::NOT_SET)
{
}

GetPositionResult::GetPositionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_solverType(PositionSolverType::NOT_SET),
    m_solverProvider(PositionSolverProvider::NOT_SET)
{
  *this = result;
}

GetPositionResult& GetPositionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
  }

  if(jsonValue.ValueExists("Accuracy"))
  {
    m_accuracy = jsonValue.GetObject("Accuracy");

  }

  if(jsonValue.ValueExists("SolverType"))
  {
    m_solverType = PositionSolverTypeMapper::GetPositionSolverTypeForName(jsonValue.GetString("SolverType"));

  }

  if(jsonValue.ValueExists("SolverProvider"))
  {
    m_solverProvider = PositionSolverProviderMapper::GetPositionSolverProviderForName(jsonValue.GetString("SolverProvider"));

  }

  if(jsonValue.ValueExists("SolverVersion"))
  {
    m_solverVersion = jsonValue.GetString("SolverVersion");

  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");

  }



  return *this;
}
