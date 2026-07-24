/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/PutComplianceInquiryFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Artifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutComplianceInquiryFeedbackRequest::SerializePayload() const {
  JsonValue payload;

  if (m_complianceInquiryIdHasBeenSet) {
    payload.WithString("complianceInquiryId", m_complianceInquiryId);
  }

  if (m_queryIdentifierHasBeenSet) {
    payload.WithInteger("queryIdentifier", m_queryIdentifier);
  }

  if (m_ratingHasBeenSet) {
    payload.WithString("rating", FeedbackRatingMapper::GetNameForFeedbackRating(m_rating));
  }

  if (m_responseRevisionIdHasBeenSet) {
    payload.WithInteger("responseRevisionId", m_responseRevisionId);
  }

  if (m_reasonCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> reasonCodesJsonList(m_reasonCodes.size());
    for (unsigned reasonCodesIndex = 0; reasonCodesIndex < reasonCodesJsonList.GetLength(); ++reasonCodesIndex) {
      reasonCodesJsonList[reasonCodesIndex].AsString(
          FeedbackReasonCodeMapper::GetNameForFeedbackReasonCode(m_reasonCodes[reasonCodesIndex]));
    }
    payload.WithArray("reasonCodes", std::move(reasonCodesJsonList));
  }

  if (m_commentHasBeenSet) {
    payload.WithString("comment", m_comment);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
