/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/Contact.h>
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

Contact::Contact() : 
    m_contactArnHasBeenSet(false)
{
}

Contact::Contact(JsonView jsonValue) : 
    m_contactArnHasBeenSet(false)
{
  *this = jsonValue;
}

Contact& Contact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contactArn"))
  {
    m_contactArn = jsonValue.GetString("contactArn");

    m_contactArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Contact::Jsonize() const
{
  JsonValue payload;

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("contactArn", m_contactArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
