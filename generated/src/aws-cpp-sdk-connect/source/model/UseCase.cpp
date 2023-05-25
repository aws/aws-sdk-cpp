/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UseCase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

UseCase::UseCase() : 
    m_useCaseIdHasBeenSet(false),
    m_useCaseArnHasBeenSet(false),
    m_useCaseType(UseCaseType::NOT_SET),
    m_useCaseTypeHasBeenSet(false)
{
}

UseCase::UseCase(JsonView jsonValue) : 
    m_useCaseIdHasBeenSet(false),
    m_useCaseArnHasBeenSet(false),
    m_useCaseType(UseCaseType::NOT_SET),
    m_useCaseTypeHasBeenSet(false)
{
  *this = jsonValue;
}

UseCase& UseCase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UseCaseId"))
  {
    m_useCaseId = jsonValue.GetString("UseCaseId");

    m_useCaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseCaseArn"))
  {
    m_useCaseArn = jsonValue.GetString("UseCaseArn");

    m_useCaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseCaseType"))
  {
    m_useCaseType = UseCaseTypeMapper::GetUseCaseTypeForName(jsonValue.GetString("UseCaseType"));

    m_useCaseTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue UseCase::Jsonize() const
{
  JsonValue payload;

  if(m_useCaseIdHasBeenSet)
  {
   payload.WithString("UseCaseId", m_useCaseId);

  }

  if(m_useCaseArnHasBeenSet)
  {
   payload.WithString("UseCaseArn", m_useCaseArn);

  }

  if(m_useCaseTypeHasBeenSet)
  {
   payload.WithString("UseCaseType", UseCaseTypeMapper::GetNameForUseCaseType(m_useCaseType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
