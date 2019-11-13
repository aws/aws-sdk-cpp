/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/dataexchange/model/JobError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

JobError::JobError() : 
    m_code(Code::NOT_SET),
    m_codeHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_limitName(JobErrorLimitName::NOT_SET),
    m_limitNameHasBeenSet(false),
    m_limitValue(0.0),
    m_limitValueHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(JobErrorResourceTypes::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

JobError::JobError(JsonView jsonValue) : 
    m_code(Code::NOT_SET),
    m_codeHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_limitName(JobErrorLimitName::NOT_SET),
    m_limitNameHasBeenSet(false),
    m_limitValue(0.0),
    m_limitValueHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(JobErrorResourceTypes::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

JobError& JobError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = CodeMapper::GetCodeForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetObject("Details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LimitName"))
  {
    m_limitName = JobErrorLimitNameMapper::GetJobErrorLimitNameForName(jsonValue.GetString("LimitName"));

    m_limitNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LimitValue"))
  {
    m_limitValue = jsonValue.GetDouble("LimitValue");

    m_limitValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = JobErrorResourceTypesMapper::GetJobErrorResourceTypesForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue JobError::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", CodeMapper::GetNameForCode(m_code));
  }

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("Details", m_details.Jsonize());

  }

  if(m_limitNameHasBeenSet)
  {
   payload.WithString("LimitName", JobErrorLimitNameMapper::GetNameForJobErrorLimitName(m_limitName));
  }

  if(m_limitValueHasBeenSet)
  {
   payload.WithDouble("LimitValue", m_limitValue);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", JobErrorResourceTypesMapper::GetNameForJobErrorResourceTypes(m_resourceType));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
