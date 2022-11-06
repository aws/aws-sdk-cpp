/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CaseFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

CaseFilter::CaseFilter() : 
    m_andAllHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_notHasBeenSet(false)
{
}

CaseFilter::CaseFilter(JsonView jsonValue) : 
    m_andAllHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_notHasBeenSet(false)
{
  *this = jsonValue;
}

const CaseFilter& CaseFilter::GetNot() const{ return *m_not; }
bool CaseFilter::NotHasBeenSet() const { return m_notHasBeenSet; }
void CaseFilter::SetNot(const CaseFilter& value) { m_notHasBeenSet = true; m_not = Aws::MakeShared<CaseFilter>("CaseFilter", value); }
void CaseFilter::SetNot(CaseFilter&& value) { m_notHasBeenSet = true; m_not = Aws::MakeShared<CaseFilter>("CaseFilter", std::move(value)); }
CaseFilter& CaseFilter::WithNot(const CaseFilter& value) { SetNot(value); return *this;}
CaseFilter& CaseFilter::WithNot(CaseFilter&& value) { SetNot(std::move(value)); return *this;}

CaseFilter& CaseFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("andAll"))
  {
    Aws::Utils::Array<JsonView> andAllJsonList = jsonValue.GetArray("andAll");
    for(unsigned andAllIndex = 0; andAllIndex < andAllJsonList.GetLength(); ++andAllIndex)
    {
      m_andAll.push_back(andAllJsonList[andAllIndex].AsObject());
    }
    m_andAllHasBeenSet = true;
  }

  if(jsonValue.ValueExists("field"))
  {
    m_field = jsonValue.GetObject("field");

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("not"))
  {
    m_not = Aws::MakeShared<CaseFilter>("CaseFilter", jsonValue.GetObject("not"));

    m_notHasBeenSet = true;
  }

  return *this;
}

JsonValue CaseFilter::Jsonize() const
{
  JsonValue payload;

  if(m_andAllHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> andAllJsonList(m_andAll.size());
   for(unsigned andAllIndex = 0; andAllIndex < andAllJsonList.GetLength(); ++andAllIndex)
   {
     andAllJsonList[andAllIndex].AsObject(m_andAll[andAllIndex].Jsonize());
   }
   payload.WithArray("andAll", std::move(andAllJsonList));

  }

  if(m_fieldHasBeenSet)
  {
   payload.WithObject("field", m_field.Jsonize());

  }

  if(m_notHasBeenSet)
  {
   payload.WithObject("not", m_not->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
