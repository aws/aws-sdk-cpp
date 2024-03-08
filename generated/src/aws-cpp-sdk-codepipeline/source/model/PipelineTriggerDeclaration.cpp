/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineTriggerDeclaration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

PipelineTriggerDeclaration::PipelineTriggerDeclaration() : 
    m_providerType(PipelineTriggerProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_gitConfigurationHasBeenSet(false)
{
}

PipelineTriggerDeclaration::PipelineTriggerDeclaration(JsonView jsonValue) : 
    m_providerType(PipelineTriggerProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_gitConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineTriggerDeclaration& PipelineTriggerDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("providerType"))
  {
    m_providerType = PipelineTriggerProviderTypeMapper::GetPipelineTriggerProviderTypeForName(jsonValue.GetString("providerType"));

    m_providerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gitConfiguration"))
  {
    m_gitConfiguration = jsonValue.GetObject("gitConfiguration");

    m_gitConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineTriggerDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("providerType", PipelineTriggerProviderTypeMapper::GetNameForPipelineTriggerProviderType(m_providerType));
  }

  if(m_gitConfigurationHasBeenSet)
  {
   payload.WithObject("gitConfiguration", m_gitConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
