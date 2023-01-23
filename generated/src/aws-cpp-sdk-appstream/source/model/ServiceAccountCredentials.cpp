/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ServiceAccountCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ServiceAccountCredentials::ServiceAccountCredentials() : 
    m_accountNameHasBeenSet(false),
    m_accountPasswordHasBeenSet(false)
{
}

ServiceAccountCredentials::ServiceAccountCredentials(JsonView jsonValue) : 
    m_accountNameHasBeenSet(false),
    m_accountPasswordHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceAccountCredentials& ServiceAccountCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountName"))
  {
    m_accountName = jsonValue.GetString("AccountName");

    m_accountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountPassword"))
  {
    m_accountPassword = jsonValue.GetString("AccountPassword");

    m_accountPasswordHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceAccountCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("AccountName", m_accountName);

  }

  if(m_accountPasswordHasBeenSet)
  {
   payload.WithString("AccountPassword", m_accountPassword);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
