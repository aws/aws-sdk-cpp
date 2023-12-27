/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/NewAsoDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

NewAsoDetail::NewAsoDetail() : 
    m_asoHasBeenSet(false),
    m_isNewForEntireAccount(false),
    m_isNewForEntireAccountHasBeenSet(false)
{
}

NewAsoDetail::NewAsoDetail(JsonView jsonValue) : 
    m_asoHasBeenSet(false),
    m_isNewForEntireAccount(false),
    m_isNewForEntireAccountHasBeenSet(false)
{
  *this = jsonValue;
}

NewAsoDetail& NewAsoDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Aso"))
  {
    m_aso = jsonValue.GetString("Aso");

    m_asoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsNewForEntireAccount"))
  {
    m_isNewForEntireAccount = jsonValue.GetBool("IsNewForEntireAccount");

    m_isNewForEntireAccountHasBeenSet = true;
  }

  return *this;
}

JsonValue NewAsoDetail::Jsonize() const
{
  JsonValue payload;

  if(m_asoHasBeenSet)
  {
   payload.WithString("Aso", m_aso);

  }

  if(m_isNewForEntireAccountHasBeenSet)
  {
   payload.WithBool("IsNewForEntireAccount", m_isNewForEntireAccount);

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
