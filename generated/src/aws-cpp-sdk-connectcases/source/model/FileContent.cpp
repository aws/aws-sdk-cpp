/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/FileContent.h>
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

FileContent::FileContent() : 
    m_fileArnHasBeenSet(false)
{
}

FileContent::FileContent(JsonView jsonValue) : 
    m_fileArnHasBeenSet(false)
{
  *this = jsonValue;
}

FileContent& FileContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileArn"))
  {
    m_fileArn = jsonValue.GetString("fileArn");

    m_fileArnHasBeenSet = true;
  }

  return *this;
}

JsonValue FileContent::Jsonize() const
{
  JsonValue payload;

  if(m_fileArnHasBeenSet)
  {
   payload.WithString("fileArn", m_fileArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
