/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CsrExtensions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

CsrExtensions::CsrExtensions() : 
    m_keyUsageHasBeenSet(false),
    m_subjectInformationAccessHasBeenSet(false)
{
}

CsrExtensions::CsrExtensions(JsonView jsonValue) : 
    m_keyUsageHasBeenSet(false),
    m_subjectInformationAccessHasBeenSet(false)
{
  *this = jsonValue;
}

CsrExtensions& CsrExtensions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyUsage"))
  {
    m_keyUsage = jsonValue.GetObject("KeyUsage");

    m_keyUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubjectInformationAccess"))
  {
    Aws::Utils::Array<JsonView> subjectInformationAccessJsonList = jsonValue.GetArray("SubjectInformationAccess");
    for(unsigned subjectInformationAccessIndex = 0; subjectInformationAccessIndex < subjectInformationAccessJsonList.GetLength(); ++subjectInformationAccessIndex)
    {
      m_subjectInformationAccess.push_back(subjectInformationAccessJsonList[subjectInformationAccessIndex].AsObject());
    }
    m_subjectInformationAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue CsrExtensions::Jsonize() const
{
  JsonValue payload;

  if(m_keyUsageHasBeenSet)
  {
   payload.WithObject("KeyUsage", m_keyUsage.Jsonize());

  }

  if(m_subjectInformationAccessHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subjectInformationAccessJsonList(m_subjectInformationAccess.size());
   for(unsigned subjectInformationAccessIndex = 0; subjectInformationAccessIndex < subjectInformationAccessJsonList.GetLength(); ++subjectInformationAccessIndex)
   {
     subjectInformationAccessJsonList[subjectInformationAccessIndex].AsObject(m_subjectInformationAccess[subjectInformationAccessIndex].Jsonize());
   }
   payload.WithArray("SubjectInformationAccess", std::move(subjectInformationAccessJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
