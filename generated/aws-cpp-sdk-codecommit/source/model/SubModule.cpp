/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/SubModule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

SubModule::SubModule() : 
    m_commitIdHasBeenSet(false),
    m_absolutePathHasBeenSet(false),
    m_relativePathHasBeenSet(false)
{
}

SubModule::SubModule(JsonView jsonValue) : 
    m_commitIdHasBeenSet(false),
    m_absolutePathHasBeenSet(false),
    m_relativePathHasBeenSet(false)
{
  *this = jsonValue;
}

SubModule& SubModule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");

    m_commitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("absolutePath"))
  {
    m_absolutePath = jsonValue.GetString("absolutePath");

    m_absolutePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relativePath"))
  {
    m_relativePath = jsonValue.GetString("relativePath");

    m_relativePathHasBeenSet = true;
  }

  return *this;
}

JsonValue SubModule::Jsonize() const
{
  JsonValue payload;

  if(m_commitIdHasBeenSet)
  {
   payload.WithString("commitId", m_commitId);

  }

  if(m_absolutePathHasBeenSet)
  {
   payload.WithString("absolutePath", m_absolutePath);

  }

  if(m_relativePathHasBeenSet)
  {
   payload.WithString("relativePath", m_relativePath);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
