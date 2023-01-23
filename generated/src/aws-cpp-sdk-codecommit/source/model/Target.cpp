/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/Target.h>
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

Target::Target() : 
    m_repositoryNameHasBeenSet(false),
    m_sourceReferenceHasBeenSet(false),
    m_destinationReferenceHasBeenSet(false)
{
}

Target::Target(JsonView jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_sourceReferenceHasBeenSet(false),
    m_destinationReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

Target& Target::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceReference"))
  {
    m_sourceReference = jsonValue.GetString("sourceReference");

    m_sourceReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationReference"))
  {
    m_destinationReference = jsonValue.GetString("destinationReference");

    m_destinationReferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue Target::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_sourceReferenceHasBeenSet)
  {
   payload.WithString("sourceReference", m_sourceReference);

  }

  if(m_destinationReferenceHasBeenSet)
  {
   payload.WithString("destinationReference", m_destinationReference);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
