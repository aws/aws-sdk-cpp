/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/SourceApiAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

SourceApiAssociationSummary::SourceApiAssociationSummary() : 
    m_associationIdHasBeenSet(false),
    m_associationArnHasBeenSet(false),
    m_sourceApiIdHasBeenSet(false),
    m_sourceApiArnHasBeenSet(false),
    m_mergedApiIdHasBeenSet(false),
    m_mergedApiArnHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

SourceApiAssociationSummary::SourceApiAssociationSummary(JsonView jsonValue) : 
    m_associationIdHasBeenSet(false),
    m_associationArnHasBeenSet(false),
    m_sourceApiIdHasBeenSet(false),
    m_sourceApiArnHasBeenSet(false),
    m_mergedApiIdHasBeenSet(false),
    m_mergedApiArnHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

SourceApiAssociationSummary& SourceApiAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associationId"))
  {
    m_associationId = jsonValue.GetString("associationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationArn"))
  {
    m_associationArn = jsonValue.GetString("associationArn");

    m_associationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceApiId"))
  {
    m_sourceApiId = jsonValue.GetString("sourceApiId");

    m_sourceApiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceApiArn"))
  {
    m_sourceApiArn = jsonValue.GetString("sourceApiArn");

    m_sourceApiArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergedApiId"))
  {
    m_mergedApiId = jsonValue.GetString("mergedApiId");

    m_mergedApiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergedApiArn"))
  {
    m_mergedApiArn = jsonValue.GetString("mergedApiArn");

    m_mergedApiArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceApiAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("associationId", m_associationId);

  }

  if(m_associationArnHasBeenSet)
  {
   payload.WithString("associationArn", m_associationArn);

  }

  if(m_sourceApiIdHasBeenSet)
  {
   payload.WithString("sourceApiId", m_sourceApiId);

  }

  if(m_sourceApiArnHasBeenSet)
  {
   payload.WithString("sourceApiArn", m_sourceApiArn);

  }

  if(m_mergedApiIdHasBeenSet)
  {
   payload.WithString("mergedApiId", m_mergedApiId);

  }

  if(m_mergedApiArnHasBeenSet)
  {
   payload.WithString("mergedApiArn", m_mergedApiArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
