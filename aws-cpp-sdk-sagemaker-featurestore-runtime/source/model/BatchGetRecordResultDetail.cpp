/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordResultDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

BatchGetRecordResultDetail::BatchGetRecordResultDetail() : 
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifierValueAsStringHasBeenSet(false),
    m_recordHasBeenSet(false)
{
}

BatchGetRecordResultDetail::BatchGetRecordResultDetail(JsonView jsonValue) : 
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifierValueAsStringHasBeenSet(false),
    m_recordHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetRecordResultDetail& BatchGetRecordResultDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureGroupName"))
  {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");

    m_featureGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordIdentifierValueAsString"))
  {
    m_recordIdentifierValueAsString = jsonValue.GetString("RecordIdentifierValueAsString");

    m_recordIdentifierValueAsStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Record"))
  {
    Aws::Utils::Array<JsonView> recordJsonList = jsonValue.GetArray("Record");
    for(unsigned recordIndex = 0; recordIndex < recordJsonList.GetLength(); ++recordIndex)
    {
      m_record.push_back(recordJsonList[recordIndex].AsObject());
    }
    m_recordHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetRecordResultDetail::Jsonize() const
{
  JsonValue payload;

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  if(m_recordIdentifierValueAsStringHasBeenSet)
  {
   payload.WithString("RecordIdentifierValueAsString", m_recordIdentifierValueAsString);

  }

  if(m_recordHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordJsonList(m_record.size());
   for(unsigned recordIndex = 0; recordIndex < recordJsonList.GetLength(); ++recordIndex)
   {
     recordJsonList[recordIndex].AsObject(m_record[recordIndex].Jsonize());
   }
   payload.WithArray("Record", std::move(recordJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
