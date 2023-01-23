/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ElasticsearchVersionStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

ElasticsearchVersionStatus::ElasticsearchVersionStatus() : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ElasticsearchVersionStatus::ElasticsearchVersionStatus(JsonView jsonValue) : 
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticsearchVersionStatus& ElasticsearchVersionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Options"))
  {
    m_options = jsonValue.GetString("Options");

    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticsearchVersionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   payload.WithString("Options", m_options);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
