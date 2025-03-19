/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/TargetContainerRepository.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

TargetContainerRepository::TargetContainerRepository(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetContainerRepository& TargetContainerRepository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("service"))
  {
    m_service = ContainerRepositoryServiceMapper::GetContainerRepositoryServiceForName(jsonValue.GetString("service"));
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");
    m_repositoryNameHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetContainerRepository::Jsonize() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", ContainerRepositoryServiceMapper::GetNameForContainerRepositoryService(m_service));
  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
