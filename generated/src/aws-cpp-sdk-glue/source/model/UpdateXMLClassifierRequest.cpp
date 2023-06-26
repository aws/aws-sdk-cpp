/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateXMLClassifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

UpdateXMLClassifierRequest::UpdateXMLClassifierRequest() : 
    m_nameHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_rowTagHasBeenSet(false)
{
}

UpdateXMLClassifierRequest::UpdateXMLClassifierRequest(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_rowTagHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateXMLClassifierRequest& UpdateXMLClassifierRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");

    m_classificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowTag"))
  {
    m_rowTag = jsonValue.GetString("RowTag");

    m_rowTagHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateXMLClassifierRequest::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_rowTagHasBeenSet)
  {
   payload.WithString("RowTag", m_rowTag);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
