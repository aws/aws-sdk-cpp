/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mturk-requester/model/ReviewResultDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

ReviewResultDetail::ReviewResultDetail() : 
    m_actionIdHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_subjectTypeHasBeenSet(false),
    m_questionIdHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ReviewResultDetail::ReviewResultDetail(const JsonValue& jsonValue) : 
    m_actionIdHasBeenSet(false),
    m_subjectIdHasBeenSet(false),
    m_subjectTypeHasBeenSet(false),
    m_questionIdHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ReviewResultDetail& ReviewResultDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ActionId"))
  {
    m_actionId = jsonValue.GetString("ActionId");

    m_actionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubjectId"))
  {
    m_subjectId = jsonValue.GetString("SubjectId");

    m_subjectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubjectType"))
  {
    m_subjectType = jsonValue.GetString("SubjectType");

    m_subjectTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionId"))
  {
    m_questionId = jsonValue.GetString("QuestionId");

    m_questionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ReviewResultDetail::Jsonize() const
{
  JsonValue payload;

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("ActionId", m_actionId);

  }

  if(m_subjectIdHasBeenSet)
  {
   payload.WithString("SubjectId", m_subjectId);

  }

  if(m_subjectTypeHasBeenSet)
  {
   payload.WithString("SubjectType", m_subjectType);

  }

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws