/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/CreateDataCellsFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataCellsFilterRequest::CreateDataCellsFilterRequest() : 
    m_tableDataHasBeenSet(false)
{
}

Aws::String CreateDataCellsFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableDataHasBeenSet)
  {
   payload.WithObject("TableData", m_tableData.Jsonize());

  }

  return payload.View().WriteReadable();
}




