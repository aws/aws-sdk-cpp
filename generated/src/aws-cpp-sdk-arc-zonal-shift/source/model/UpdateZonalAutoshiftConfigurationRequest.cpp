/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/UpdateZonalAutoshiftConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateZonalAutoshiftConfigurationRequest::UpdateZonalAutoshiftConfigurationRequest() : 
    m_resourceIdentifierHasBeenSet(false),
    m_zonalAutoshiftStatus(ZonalAutoshiftStatus::NOT_SET),
    m_zonalAutoshiftStatusHasBeenSet(false)
{
}

Aws::String UpdateZonalAutoshiftConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_zonalAutoshiftStatusHasBeenSet)
  {
   payload.WithString("zonalAutoshiftStatus", ZonalAutoshiftStatusMapper::GetNameForZonalAutoshiftStatus(m_zonalAutoshiftStatus));
  }

  return payload.View().WriteReadable();
}




