/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/Repository.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

Repository::Repository() : 
    m_codeCommitHasBeenSet(false),
    m_bitbucketHasBeenSet(false),
    m_gitHubEnterpriseServerHasBeenSet(false)
{
}

Repository::Repository(JsonView jsonValue) : 
    m_codeCommitHasBeenSet(false),
    m_bitbucketHasBeenSet(false),
    m_gitHubEnterpriseServerHasBeenSet(false)
{
  *this = jsonValue;
}

Repository& Repository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CodeCommit"))
  {
    m_codeCommit = jsonValue.GetObject("CodeCommit");

    m_codeCommitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Bitbucket"))
  {
    m_bitbucket = jsonValue.GetObject("Bitbucket");

    m_bitbucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitHubEnterpriseServer"))
  {
    m_gitHubEnterpriseServer = jsonValue.GetObject("GitHubEnterpriseServer");

    m_gitHubEnterpriseServerHasBeenSet = true;
  }

  return *this;
}

JsonValue Repository::Jsonize() const
{
  JsonValue payload;

  if(m_codeCommitHasBeenSet)
  {
   payload.WithObject("CodeCommit", m_codeCommit.Jsonize());

  }

  if(m_bitbucketHasBeenSet)
  {
   payload.WithObject("Bitbucket", m_bitbucket.Jsonize());

  }

  if(m_gitHubEnterpriseServerHasBeenSet)
  {
   payload.WithObject("GitHubEnterpriseServer", m_gitHubEnterpriseServer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
