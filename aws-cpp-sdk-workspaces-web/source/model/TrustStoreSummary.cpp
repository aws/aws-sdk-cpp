/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/TrustStoreSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

TrustStoreSummary::TrustStoreSummary() : 
    m_trustStoreArnHasBeenSet(false)
{
}

TrustStoreSummary::TrustStoreSummary(JsonView jsonValue) : 
    m_trustStoreArnHasBeenSet(false)
{
  *this = jsonValue;
}

TrustStoreSummary& TrustStoreSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trustStoreArn"))
  {
    m_trustStoreArn = jsonValue.GetString("trustStoreArn");

    m_trustStoreArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustStoreSummary::Jsonize() const
{
  JsonValue payload;

  if(m_trustStoreArnHasBeenSet)
  {
   payload.WithString("trustStoreArn", m_trustStoreArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
