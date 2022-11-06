/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ProposedSegmentChange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

ProposedSegmentChange::ProposedSegmentChange() : 
    m_tagsHasBeenSet(false),
    m_attachmentPolicyRuleNumber(0),
    m_attachmentPolicyRuleNumberHasBeenSet(false),
    m_segmentNameHasBeenSet(false)
{
}

ProposedSegmentChange::ProposedSegmentChange(JsonView jsonValue) : 
    m_tagsHasBeenSet(false),
    m_attachmentPolicyRuleNumber(0),
    m_attachmentPolicyRuleNumberHasBeenSet(false),
    m_segmentNameHasBeenSet(false)
{
  *this = jsonValue;
}

ProposedSegmentChange& ProposedSegmentChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentPolicyRuleNumber"))
  {
    m_attachmentPolicyRuleNumber = jsonValue.GetInteger("AttachmentPolicyRuleNumber");

    m_attachmentPolicyRuleNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentName"))
  {
    m_segmentName = jsonValue.GetString("SegmentName");

    m_segmentNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ProposedSegmentChange::Jsonize() const
{
  JsonValue payload;

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_attachmentPolicyRuleNumberHasBeenSet)
  {
   payload.WithInteger("AttachmentPolicyRuleNumber", m_attachmentPolicyRuleNumber);

  }

  if(m_segmentNameHasBeenSet)
  {
   payload.WithString("SegmentName", m_segmentName);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
