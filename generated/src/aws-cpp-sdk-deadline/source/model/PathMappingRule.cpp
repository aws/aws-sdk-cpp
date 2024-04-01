/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/PathMappingRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

PathMappingRule::PathMappingRule() : 
    m_destinationPathHasBeenSet(false),
    m_sourcePathHasBeenSet(false),
    m_sourcePathFormat(PathFormat::NOT_SET),
    m_sourcePathFormatHasBeenSet(false)
{
}

PathMappingRule::PathMappingRule(JsonView jsonValue) : 
    m_destinationPathHasBeenSet(false),
    m_sourcePathHasBeenSet(false),
    m_sourcePathFormat(PathFormat::NOT_SET),
    m_sourcePathFormatHasBeenSet(false)
{
  *this = jsonValue;
}

PathMappingRule& PathMappingRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationPath"))
  {
    m_destinationPath = jsonValue.GetString("destinationPath");

    m_destinationPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourcePath"))
  {
    m_sourcePath = jsonValue.GetString("sourcePath");

    m_sourcePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourcePathFormat"))
  {
    m_sourcePathFormat = PathFormatMapper::GetPathFormatForName(jsonValue.GetString("sourcePathFormat"));

    m_sourcePathFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue PathMappingRule::Jsonize() const
{
  JsonValue payload;

  if(m_destinationPathHasBeenSet)
  {
   payload.WithString("destinationPath", m_destinationPath);

  }

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("sourcePath", m_sourcePath);

  }

  if(m_sourcePathFormatHasBeenSet)
  {
   payload.WithString("sourcePathFormat", PathFormatMapper::GetNameForPathFormat(m_sourcePathFormat));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
