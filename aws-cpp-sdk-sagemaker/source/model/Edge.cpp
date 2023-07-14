/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Edge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Edge::Edge() : 
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_associationType(AssociationEdgeType::NOT_SET),
    m_associationTypeHasBeenSet(false)
{
}

Edge::Edge(JsonView jsonValue) : 
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_associationType(AssociationEdgeType::NOT_SET),
    m_associationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Edge& Edge::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationArn"))
  {
    m_destinationArn = jsonValue.GetString("DestinationArn");

    m_destinationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationType"))
  {
    m_associationType = AssociationEdgeTypeMapper::GetAssociationEdgeTypeForName(jsonValue.GetString("AssociationType"));

    m_associationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Edge::Jsonize() const
{
  JsonValue payload;

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("DestinationArn", m_destinationArn);

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("AssociationType", AssociationEdgeTypeMapper::GetNameForAssociationEdgeType(m_associationType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
