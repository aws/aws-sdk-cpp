/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StatusDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/Table.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

StatusDetails::StatusDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

StatusDetails& StatusDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequestedChange"))
  {
    m_requestedChange = Aws::MakeShared<Table>("StatusDetails", jsonValue.GetObject("RequestedChange"));
    m_requestedChangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ViewValidations"))
  {
    Aws::Utils::Array<JsonView> viewValidationsJsonList = jsonValue.GetArray("ViewValidations");
    for(unsigned viewValidationsIndex = 0; viewValidationsIndex < viewValidationsJsonList.GetLength(); ++viewValidationsIndex)
    {
      m_viewValidations.push_back(viewValidationsJsonList[viewValidationsIndex].AsObject());
    }
    m_viewValidationsHasBeenSet = true;
  }
  return *this;
}

JsonValue StatusDetails::Jsonize() const
{
  JsonValue payload;

  if(m_requestedChangeHasBeenSet)
  {
   payload.WithObject("RequestedChange", m_requestedChange->Jsonize());

  }

  if(m_viewValidationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> viewValidationsJsonList(m_viewValidations.size());
   for(unsigned viewValidationsIndex = 0; viewValidationsIndex < viewValidationsJsonList.GetLength(); ++viewValidationsIndex)
   {
     viewValidationsJsonList[viewValidationsIndex].AsObject(m_viewValidations[viewValidationsIndex].Jsonize());
   }
   payload.WithArray("ViewValidations", std::move(viewValidationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
