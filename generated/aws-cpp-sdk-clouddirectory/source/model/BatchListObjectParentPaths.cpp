/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchListObjectParentPaths.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchListObjectParentPaths::BatchListObjectParentPaths() : 
    m_objectReferenceHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

BatchListObjectParentPaths::BatchListObjectParentPaths(JsonView jsonValue) : 
    m_objectReferenceHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListObjectParentPaths& BatchListObjectParentPaths::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectReference"))
  {
    m_objectReference = jsonValue.GetObject("ObjectReference");

    m_objectReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

    m_maxResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListObjectParentPaths::Jsonize() const
{
  JsonValue payload;

  if(m_objectReferenceHasBeenSet)
  {
   payload.WithObject("ObjectReference", m_objectReference.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
