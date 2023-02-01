/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/Commit.h>
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

Commit::Commit() : 
    m_commitIdHasBeenSet(false),
    m_treeIdHasBeenSet(false),
    m_parentsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_committerHasBeenSet(false),
    m_additionalDataHasBeenSet(false)
{
}

Commit::Commit(JsonView jsonValue) : 
    m_commitIdHasBeenSet(false),
    m_treeIdHasBeenSet(false),
    m_parentsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_committerHasBeenSet(false),
    m_additionalDataHasBeenSet(false)
{
  *this = jsonValue;
}

Commit& Commit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");

    m_commitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("treeId"))
  {
    m_treeId = jsonValue.GetString("treeId");

    m_treeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parents"))
  {
    Aws::Utils::Array<JsonView> parentsJsonList = jsonValue.GetArray("parents");
    for(unsigned parentsIndex = 0; parentsIndex < parentsJsonList.GetLength(); ++parentsIndex)
    {
      m_parents.push_back(parentsJsonList[parentsIndex].AsString());
    }
    m_parentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("author"))
  {
    m_author = jsonValue.GetObject("author");

    m_authorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("committer"))
  {
    m_committer = jsonValue.GetObject("committer");

    m_committerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalData"))
  {
    m_additionalData = jsonValue.GetString("additionalData");

    m_additionalDataHasBeenSet = true;
  }

  return *this;
}

JsonValue Commit::Jsonize() const
{
  JsonValue payload;

  if(m_commitIdHasBeenSet)
  {
   payload.WithString("commitId", m_commitId);

  }

  if(m_treeIdHasBeenSet)
  {
   payload.WithString("treeId", m_treeId);

  }

  if(m_parentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parentsJsonList(m_parents.size());
   for(unsigned parentsIndex = 0; parentsIndex < parentsJsonList.GetLength(); ++parentsIndex)
   {
     parentsJsonList[parentsIndex].AsString(m_parents[parentsIndex]);
   }
   payload.WithArray("parents", std::move(parentsJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_authorHasBeenSet)
  {
   payload.WithObject("author", m_author.Jsonize());

  }

  if(m_committerHasBeenSet)
  {
   payload.WithObject("committer", m_committer.Jsonize());

  }

  if(m_additionalDataHasBeenSet)
  {
   payload.WithString("additionalData", m_additionalData);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
