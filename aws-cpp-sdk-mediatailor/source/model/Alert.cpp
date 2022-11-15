/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/Alert.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

Alert::Alert() : 
    m_alertCodeHasBeenSet(false),
    m_alertMessageHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_relatedResourceArnsHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

Alert::Alert(JsonView jsonValue) : 
    m_alertCodeHasBeenSet(false),
    m_alertMessageHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_relatedResourceArnsHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

Alert& Alert::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlertCode"))
  {
    m_alertCode = jsonValue.GetString("AlertCode");

    m_alertCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlertMessage"))
  {
    m_alertMessage = jsonValue.GetString("AlertMessage");

    m_alertMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedResourceArns"))
  {
    Aws::Utils::Array<JsonView> relatedResourceArnsJsonList = jsonValue.GetArray("RelatedResourceArns");
    for(unsigned relatedResourceArnsIndex = 0; relatedResourceArnsIndex < relatedResourceArnsJsonList.GetLength(); ++relatedResourceArnsIndex)
    {
      m_relatedResourceArns.push_back(relatedResourceArnsJsonList[relatedResourceArnsIndex].AsString());
    }
    m_relatedResourceArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Alert::Jsonize() const
{
  JsonValue payload;

  if(m_alertCodeHasBeenSet)
  {
   payload.WithString("AlertCode", m_alertCode);

  }

  if(m_alertMessageHasBeenSet)
  {
   payload.WithString("AlertMessage", m_alertMessage);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_relatedResourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedResourceArnsJsonList(m_relatedResourceArns.size());
   for(unsigned relatedResourceArnsIndex = 0; relatedResourceArnsIndex < relatedResourceArnsJsonList.GetLength(); ++relatedResourceArnsIndex)
   {
     relatedResourceArnsJsonList[relatedResourceArnsIndex].AsString(m_relatedResourceArns[relatedResourceArnsIndex]);
   }
   payload.WithArray("RelatedResourceArns", std::move(relatedResourceArnsJsonList));

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
