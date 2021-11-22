/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/DatasetOwnerInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

DatasetOwnerInfo::DatasetOwnerInfo() : 
    m_nameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

DatasetOwnerInfo::DatasetOwnerInfo(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetOwnerInfo& DatasetOwnerInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("phoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("phoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

    m_emailHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetOwnerInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("phoneNumber", m_phoneNumber);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
