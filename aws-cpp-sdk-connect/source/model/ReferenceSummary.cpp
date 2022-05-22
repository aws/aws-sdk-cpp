/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReferenceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ReferenceSummary::ReferenceSummary() : 
    m_urlHasBeenSet(false),
    m_attachmentHasBeenSet(false)
{
}

ReferenceSummary::ReferenceSummary(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_attachmentHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceSummary& ReferenceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetObject("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");

    m_attachmentHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithObject("Url", m_url.Jsonize());

  }

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("Attachment", m_attachment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
