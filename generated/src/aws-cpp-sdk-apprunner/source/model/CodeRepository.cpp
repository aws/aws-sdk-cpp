/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CodeRepository.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

CodeRepository::CodeRepository() : 
    m_repositoryUrlHasBeenSet(false),
    m_sourceCodeVersionHasBeenSet(false),
    m_codeConfigurationHasBeenSet(false),
    m_sourceDirectoryHasBeenSet(false)
{
}

CodeRepository::CodeRepository(JsonView jsonValue) : 
    m_repositoryUrlHasBeenSet(false),
    m_sourceCodeVersionHasBeenSet(false),
    m_codeConfigurationHasBeenSet(false),
    m_sourceDirectoryHasBeenSet(false)
{
  *this = jsonValue;
}

CodeRepository& CodeRepository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RepositoryUrl"))
  {
    m_repositoryUrl = jsonValue.GetString("RepositoryUrl");

    m_repositoryUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceCodeVersion"))
  {
    m_sourceCodeVersion = jsonValue.GetObject("SourceCodeVersion");

    m_sourceCodeVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeConfiguration"))
  {
    m_codeConfiguration = jsonValue.GetObject("CodeConfiguration");

    m_codeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDirectory"))
  {
    m_sourceDirectory = jsonValue.GetString("SourceDirectory");

    m_sourceDirectoryHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeRepository::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryUrlHasBeenSet)
  {
   payload.WithString("RepositoryUrl", m_repositoryUrl);

  }

  if(m_sourceCodeVersionHasBeenSet)
  {
   payload.WithObject("SourceCodeVersion", m_sourceCodeVersion.Jsonize());

  }

  if(m_codeConfigurationHasBeenSet)
  {
   payload.WithObject("CodeConfiguration", m_codeConfiguration.Jsonize());

  }

  if(m_sourceDirectoryHasBeenSet)
  {
   payload.WithString("SourceDirectory", m_sourceDirectory);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
