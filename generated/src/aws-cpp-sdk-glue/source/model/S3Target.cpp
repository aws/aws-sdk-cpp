/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3Target.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

S3Target::S3Target() : 
    m_pathHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_sampleSize(0),
    m_sampleSizeHasBeenSet(false),
    m_eventQueueArnHasBeenSet(false),
    m_dlqEventQueueArnHasBeenSet(false)
{
}

S3Target::S3Target(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_sampleSize(0),
    m_sampleSizeHasBeenSet(false),
    m_eventQueueArnHasBeenSet(false),
    m_dlqEventQueueArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3Target& S3Target::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exclusions"))
  {
    Aws::Utils::Array<JsonView> exclusionsJsonList = jsonValue.GetArray("Exclusions");
    for(unsigned exclusionsIndex = 0; exclusionsIndex < exclusionsJsonList.GetLength(); ++exclusionsIndex)
    {
      m_exclusions.push_back(exclusionsJsonList[exclusionsIndex].AsString());
    }
    m_exclusionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampleSize"))
  {
    m_sampleSize = jsonValue.GetInteger("SampleSize");

    m_sampleSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventQueueArn"))
  {
    m_eventQueueArn = jsonValue.GetString("EventQueueArn");

    m_eventQueueArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DlqEventQueueArn"))
  {
    m_dlqEventQueueArn = jsonValue.GetString("DlqEventQueueArn");

    m_dlqEventQueueArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Target::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_exclusionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionsJsonList(m_exclusions.size());
   for(unsigned exclusionsIndex = 0; exclusionsIndex < exclusionsJsonList.GetLength(); ++exclusionsIndex)
   {
     exclusionsJsonList[exclusionsIndex].AsString(m_exclusions[exclusionsIndex]);
   }
   payload.WithArray("Exclusions", std::move(exclusionsJsonList));

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_sampleSizeHasBeenSet)
  {
   payload.WithInteger("SampleSize", m_sampleSize);

  }

  if(m_eventQueueArnHasBeenSet)
  {
   payload.WithString("EventQueueArn", m_eventQueueArn);

  }

  if(m_dlqEventQueueArnHasBeenSet)
  {
   payload.WithString("DlqEventQueueArn", m_dlqEventQueueArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
