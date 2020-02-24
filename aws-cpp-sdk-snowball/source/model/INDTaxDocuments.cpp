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

#include <aws/snowball/model/INDTaxDocuments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

INDTaxDocuments::INDTaxDocuments() : 
    m_gSTINHasBeenSet(false)
{
}

INDTaxDocuments::INDTaxDocuments(JsonView jsonValue) : 
    m_gSTINHasBeenSet(false)
{
  *this = jsonValue;
}

INDTaxDocuments& INDTaxDocuments::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GSTIN"))
  {
    m_gSTIN = jsonValue.GetString("GSTIN");

    m_gSTINHasBeenSet = true;
  }

  return *this;
}

JsonValue INDTaxDocuments::Jsonize() const
{
  JsonValue payload;

  if(m_gSTINHasBeenSet)
  {
   payload.WithString("GSTIN", m_gSTIN);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
