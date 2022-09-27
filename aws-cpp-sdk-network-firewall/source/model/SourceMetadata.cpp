/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/SourceMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

SourceMetadata::SourceMetadata() : 
    m_sourceArnHasBeenSet(false),
    m_sourceUpdateTokenHasBeenSet(false)
{
}

SourceMetadata::SourceMetadata(JsonView jsonValue) : 
    m_sourceArnHasBeenSet(false),
    m_sourceUpdateTokenHasBeenSet(false)
{
  *this = jsonValue;
}

SourceMetadata& SourceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceUpdateToken"))
  {
    m_sourceUpdateToken = jsonValue.GetString("SourceUpdateToken");

    m_sourceUpdateTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_sourceUpdateTokenHasBeenSet)
  {
   payload.WithString("SourceUpdateToken", m_sourceUpdateToken);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
