﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisaData.h>
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

CisaData::CisaData(JsonView jsonValue)
{
  *this = jsonValue;
}

CisaData& CisaData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dateAdded"))
  {
    m_dateAdded = jsonValue.GetDouble("dateAdded");
    m_dateAddedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dateDue"))
  {
    m_dateDue = jsonValue.GetDouble("dateDue");
    m_dateDueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue CisaData::Jsonize() const
{
  JsonValue payload;

  if(m_dateAddedHasBeenSet)
  {
   payload.WithDouble("dateAdded", m_dateAdded.SecondsWithMSPrecision());
  }

  if(m_dateDueHasBeenSet)
  {
   payload.WithDouble("dateDue", m_dateDue.SecondsWithMSPrecision());
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
