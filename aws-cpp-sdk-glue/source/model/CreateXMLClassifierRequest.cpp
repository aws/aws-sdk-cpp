/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateXMLClassifierRequest.h>
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

CreateXMLClassifierRequest::CreateXMLClassifierRequest() : 
    m_classificationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rowTagHasBeenSet(false)
{
}

CreateXMLClassifierRequest::CreateXMLClassifierRequest(JsonView jsonValue) : 
    m_classificationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rowTagHasBeenSet(false)
{
  *this = jsonValue;
}

CreateXMLClassifierRequest& CreateXMLClassifierRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");

    m_classificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowTag"))
  {
    m_rowTag = jsonValue.GetString("RowTag");

    m_rowTagHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateXMLClassifierRequest::Jsonize() const
{
  JsonValue payload;

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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
