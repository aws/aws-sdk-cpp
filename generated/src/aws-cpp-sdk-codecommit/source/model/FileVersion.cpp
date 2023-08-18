/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/FileVersion.h>
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

FileVersion::FileVersion() : 
    m_commitHasBeenSet(false),
    m_blobIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_revisionChildrenHasBeenSet(false)
{
}

FileVersion::FileVersion(JsonView jsonValue) : 
    m_commitHasBeenSet(false),
    m_blobIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_revisionChildrenHasBeenSet(false)
{
  *this = jsonValue;
}

FileVersion& FileVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commit"))
  {
    m_commit = jsonValue.GetObject("commit");

    m_commitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blobId"))
  {
    m_blobId = jsonValue.GetString("blobId");

    m_blobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionChildren"))
  {
    Aws::Utils::Array<JsonView> revisionChildrenJsonList = jsonValue.GetArray("revisionChildren");
    for(unsigned revisionChildrenIndex = 0; revisionChildrenIndex < revisionChildrenJsonList.GetLength(); ++revisionChildrenIndex)
    {
      m_revisionChildren.push_back(revisionChildrenJsonList[revisionChildrenIndex].AsString());
    }
    m_revisionChildrenHasBeenSet = true;
  }

  return *this;
}

JsonValue FileVersion::Jsonize() const
{
  JsonValue payload;

  if(m_commitHasBeenSet)
  {
   payload.WithObject("commit", m_commit.Jsonize());

  }

  if(m_blobIdHasBeenSet)
  {
   payload.WithString("blobId", m_blobId);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_revisionChildrenHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> revisionChildrenJsonList(m_revisionChildren.size());
   for(unsigned revisionChildrenIndex = 0; revisionChildrenIndex < revisionChildrenJsonList.GetLength(); ++revisionChildrenIndex)
   {
     revisionChildrenJsonList[revisionChildrenIndex].AsString(m_revisionChildren[revisionChildrenIndex]);
   }
   payload.WithArray("revisionChildren", std::move(revisionChildrenJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
