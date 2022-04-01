/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/HttpPackageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

HttpPackageConfiguration::HttpPackageConfiguration() : 
    m_pathHasBeenSet(false),
    m_sourceGroupHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

HttpPackageConfiguration::HttpPackageConfiguration(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_sourceGroupHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

HttpPackageConfiguration& HttpPackageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceGroup"))
  {
    m_sourceGroup = jsonValue.GetString("SourceGroup");

    m_sourceGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpPackageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_sourceGroupHasBeenSet)
  {
   payload.WithString("SourceGroup", m_sourceGroup);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
