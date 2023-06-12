/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenJobAsset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

CodegenJobAsset::CodegenJobAsset() : 
    m_downloadUrlHasBeenSet(false)
{
}

CodegenJobAsset::CodegenJobAsset(JsonView jsonValue) : 
    m_downloadUrlHasBeenSet(false)
{
  *this = jsonValue;
}

CodegenJobAsset& CodegenJobAsset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("downloadUrl"))
  {
    m_downloadUrl = jsonValue.GetString("downloadUrl");

    m_downloadUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue CodegenJobAsset::Jsonize() const
{
  JsonValue payload;

  if(m_downloadUrlHasBeenSet)
  {
   payload.WithString("downloadUrl", m_downloadUrl);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
