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
#include <aws/ssm/model/AssociationStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

AssociationStatus::AssociationStatus() : 
    m_dateHasBeenSet(false),
    m_name(AssociationStatusName::NOT_SET),
    m_nameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_additionalInfoHasBeenSet(false)
{
}

AssociationStatus::AssociationStatus(const JsonValue& jsonValue) : 
    m_dateHasBeenSet(false),
    m_name(AssociationStatusName::NOT_SET),
    m_nameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_additionalInfoHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationStatus& AssociationStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetDouble("Date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = AssociationStatusNameMapper::GetAssociationStatusNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalInfo"))
  {
    m_additionalInfo = jsonValue.GetString("AdditionalInfo");

    m_additionalInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("Date", m_date.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", AssociationStatusNameMapper::GetNameForAssociationStatusName(m_name));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_additionalInfoHasBeenSet)
  {
   payload.WithString("AdditionalInfo", m_additionalInfo);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws