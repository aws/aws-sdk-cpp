/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_treeIdHasBeenSet(false),
    m_parentsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_committerHasBeenSet(false),
    m_additionalDataHasBeenSet(false)
{
}

Commit::Commit(const JsonValue& jsonValue) : 
    m_treeIdHasBeenSet(false),
    m_parentsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_committerHasBeenSet(false),
    m_additionalDataHasBeenSet(false)
{
  *this = jsonValue;
}

Commit& Commit::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("treeId"))
  {
    m_treeId = jsonValue.GetString("treeId");

    m_treeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parents"))
  {
    Array<JsonValue> parentsJsonList = jsonValue.GetArray("parents");
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

  if(m_treeIdHasBeenSet)
  {
   payload.WithString("treeId", m_treeId);

  }

  if(m_parentsHasBeenSet)
  {
   Array<JsonValue> parentsJsonList(m_parents.size());
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