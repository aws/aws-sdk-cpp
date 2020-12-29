/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/EdiPartyName.h>
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

EdiPartyName::EdiPartyName() : 
    m_partyNameHasBeenSet(false),
    m_nameAssignerHasBeenSet(false)
{
}

EdiPartyName::EdiPartyName(JsonView jsonValue) : 
    m_partyNameHasBeenSet(false),
    m_nameAssignerHasBeenSet(false)
{
  *this = jsonValue;
}

EdiPartyName& EdiPartyName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PartyName"))
  {
    m_partyName = jsonValue.GetString("PartyName");

    m_partyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NameAssigner"))
  {
    m_nameAssigner = jsonValue.GetString("NameAssigner");

    m_nameAssignerHasBeenSet = true;
  }

  return *this;
}

JsonValue EdiPartyName::Jsonize() const
{
  JsonValue payload;

  if(m_partyNameHasBeenSet)
  {
   payload.WithString("PartyName", m_partyName);

  }

  if(m_nameAssignerHasBeenSet)
  {
   payload.WithString("NameAssigner", m_nameAssigner);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
