/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConformancePackDetail::ConformancePackDetail() : 
    m_conformancePackNameHasBeenSet(false),
    m_conformancePackArnHasBeenSet(false),
    m_conformancePackIdHasBeenSet(false),
    m_deliveryS3BucketHasBeenSet(false),
    m_deliveryS3KeyPrefixHasBeenSet(false),
    m_conformancePackInputParametersHasBeenSet(false),
    m_lastUpdateRequestedTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_templateSSMDocumentDetailsHasBeenSet(false)
{
}

ConformancePackDetail::ConformancePackDetail(JsonView jsonValue) : 
    m_conformancePackNameHasBeenSet(false),
    m_conformancePackArnHasBeenSet(false),
    m_conformancePackIdHasBeenSet(false),
    m_deliveryS3BucketHasBeenSet(false),
    m_deliveryS3KeyPrefixHasBeenSet(false),
    m_conformancePackInputParametersHasBeenSet(false),
    m_lastUpdateRequestedTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_templateSSMDocumentDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ConformancePackDetail& ConformancePackDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConformancePackName"))
  {
    m_conformancePackName = jsonValue.GetString("ConformancePackName");

    m_conformancePackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConformancePackArn"))
  {
    m_conformancePackArn = jsonValue.GetString("ConformancePackArn");

    m_conformancePackArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConformancePackId"))
  {
    m_conformancePackId = jsonValue.GetString("ConformancePackId");

    m_conformancePackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryS3Bucket"))
  {
    m_deliveryS3Bucket = jsonValue.GetString("DeliveryS3Bucket");

    m_deliveryS3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryS3KeyPrefix"))
  {
    m_deliveryS3KeyPrefix = jsonValue.GetString("DeliveryS3KeyPrefix");

    m_deliveryS3KeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConformancePackInputParameters"))
  {
    Aws::Utils::Array<JsonView> conformancePackInputParametersJsonList = jsonValue.GetArray("ConformancePackInputParameters");
    for(unsigned conformancePackInputParametersIndex = 0; conformancePackInputParametersIndex < conformancePackInputParametersJsonList.GetLength(); ++conformancePackInputParametersIndex)
    {
      m_conformancePackInputParameters.push_back(conformancePackInputParametersJsonList[conformancePackInputParametersIndex].AsObject());
    }
    m_conformancePackInputParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateRequestedTime"))
  {
    m_lastUpdateRequestedTime = jsonValue.GetDouble("LastUpdateRequestedTime");

    m_lastUpdateRequestedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateSSMDocumentDetails"))
  {
    m_templateSSMDocumentDetails = jsonValue.GetObject("TemplateSSMDocumentDetails");

    m_templateSSMDocumentDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConformancePackDetail::Jsonize() const
{
  JsonValue payload;

  if(m_conformancePackNameHasBeenSet)
  {
   payload.WithString("ConformancePackName", m_conformancePackName);

  }

  if(m_conformancePackArnHasBeenSet)
  {
   payload.WithString("ConformancePackArn", m_conformancePackArn);

  }

  if(m_conformancePackIdHasBeenSet)
  {
   payload.WithString("ConformancePackId", m_conformancePackId);

  }

  if(m_deliveryS3BucketHasBeenSet)
  {
   payload.WithString("DeliveryS3Bucket", m_deliveryS3Bucket);

  }

  if(m_deliveryS3KeyPrefixHasBeenSet)
  {
   payload.WithString("DeliveryS3KeyPrefix", m_deliveryS3KeyPrefix);

  }

  if(m_conformancePackInputParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conformancePackInputParametersJsonList(m_conformancePackInputParameters.size());
   for(unsigned conformancePackInputParametersIndex = 0; conformancePackInputParametersIndex < conformancePackInputParametersJsonList.GetLength(); ++conformancePackInputParametersIndex)
   {
     conformancePackInputParametersJsonList[conformancePackInputParametersIndex].AsObject(m_conformancePackInputParameters[conformancePackInputParametersIndex].Jsonize());
   }
   payload.WithArray("ConformancePackInputParameters", std::move(conformancePackInputParametersJsonList));

  }

  if(m_lastUpdateRequestedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateRequestedTime", m_lastUpdateRequestedTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_templateSSMDocumentDetailsHasBeenSet)
  {
   payload.WithObject("TemplateSSMDocumentDetails", m_templateSSMDocumentDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
