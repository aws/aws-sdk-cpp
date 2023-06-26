/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatastoreActivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DatastoreActivity::DatastoreActivity() : 
    m_nameHasBeenSet(false),
    m_datastoreNameHasBeenSet(false)
{
}

DatastoreActivity::DatastoreActivity(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_datastoreNameHasBeenSet(false)
{
  *this = jsonValue;
}

DatastoreActivity& DatastoreActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datastoreName"))
  {
    m_datastoreName = jsonValue.GetString("datastoreName");

    m_datastoreNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DatastoreActivity::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_datastoreNameHasBeenSet)
  {
   payload.WithString("datastoreName", m_datastoreName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
