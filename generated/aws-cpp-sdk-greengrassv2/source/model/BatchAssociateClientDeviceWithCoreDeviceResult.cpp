﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/BatchAssociateClientDeviceWithCoreDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchAssociateClientDeviceWithCoreDeviceResult::BatchAssociateClientDeviceWithCoreDeviceResult()
{
}

BatchAssociateClientDeviceWithCoreDeviceResult::BatchAssociateClientDeviceWithCoreDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchAssociateClientDeviceWithCoreDeviceResult& BatchAssociateClientDeviceWithCoreDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("errorEntries"))
  {
    Array<JsonView> errorEntriesJsonList = jsonValue.GetArray("errorEntries");
    for(unsigned errorEntriesIndex = 0; errorEntriesIndex < errorEntriesJsonList.GetLength(); ++errorEntriesIndex)
    {
      m_errorEntries.push_back(errorEntriesJsonList[errorEntriesIndex].AsObject());
    }
  }



  return *this;
}
