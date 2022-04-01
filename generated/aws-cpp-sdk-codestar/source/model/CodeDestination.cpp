/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/CodeDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStar
{
namespace Model
{

CodeDestination::CodeDestination() : 
    m_codeCommitHasBeenSet(false),
    m_gitHubHasBeenSet(false)
{
}

CodeDestination::CodeDestination(JsonView jsonValue) : 
    m_codeCommitHasBeenSet(false),
    m_gitHubHasBeenSet(false)
{
  *this = jsonValue;
}

CodeDestination& CodeDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("codeCommit"))
  {
    m_codeCommit = jsonValue.GetObject("codeCommit");

    m_codeCommitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gitHub"))
  {
    m_gitHub = jsonValue.GetObject("gitHub");

    m_gitHubHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeDestination::Jsonize() const
{
  JsonValue payload;

  if(m_codeCommitHasBeenSet)
  {
   payload.WithObject("codeCommit", m_codeCommit.Jsonize());

  }

  if(m_gitHubHasBeenSet)
  {
   payload.WithObject("gitHub", m_gitHub.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeStar
} // namespace Aws
