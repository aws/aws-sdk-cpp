/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AddAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddAssociationRequest::AddAssociationRequest() : 
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_associationType(AssociationEdgeType::NOT_SET),
    m_associationTypeHasBeenSet(false)
{
}

Aws::String AddAssociationRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.AddAssociation"));
  return headers;

}




