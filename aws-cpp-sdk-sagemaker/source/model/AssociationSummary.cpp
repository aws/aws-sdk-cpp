/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AssociationSummary.h>
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

AssociationSummary::AssociationSummary() : 
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_destinationTypeHasBeenSet(false),
    m_associationType(AssociationEdgeType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_destinationNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
}

AssociationSummary::AssociationSummary(JsonView jsonValue) : 
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_destinationTypeHasBeenSet(false),
    m_associationType(AssociationEdgeType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_destinationNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationSummary& AssociationSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationType"))
  {
    m_destinationType = jsonValue.GetString("DestinationType");

    m_destinationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationType"))
  {
    m_associationType = AssociationEdgeTypeMapper::GetAssociationEdgeTypeForName(jsonValue.GetString("AssociationType"));

    m_associationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceName"))
  {
    m_sourceName = jsonValue.GetString("SourceName");

    m_sourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationName"))
  {
    m_destinationName = jsonValue.GetString("DestinationName");

    m_destinationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationSummary::Jsonize() const
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

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_destinationTypeHasBeenSet)
  {
   payload.WithString("DestinationType", m_destinationType);

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("AssociationType", AssociationEdgeTypeMapper::GetNameForAssociationEdgeType(m_associationType));
  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("SourceName", m_sourceName);

  }

  if(m_destinationNameHasBeenSet)
  {
   payload.WithString("DestinationName", m_destinationName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
