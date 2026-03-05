/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/StartMedicalScribeListeningSessionRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectHealth::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

std::shared_ptr<Aws::IOStream> StartMedicalScribeListeningSessionRequest::GetBody() const { return m_inputStream; }

Aws::Http::HeaderValueCollection StartMedicalScribeListeningSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_EVENTSTREAM_CONTENT_TYPE);
  Aws::StringStream ss;
  if (m_sessionIdHasBeenSet) {
    ss << m_sessionId;
    headers.emplace("x-amzn-medscribe-session-id", ss.str());
    ss.str("");
  }

  if (m_domainIdHasBeenSet) {
    ss << m_domainId;
    headers.emplace("x-amzn-medscribe-domain-id", ss.str());
    ss.str("");
  }

  if (m_subscriptionIdHasBeenSet) {
    ss << m_subscriptionId;
    headers.emplace("x-amzn-medscribe-subscription-id", ss.str());
    ss.str("");
  }

  if (m_languageCodeHasBeenSet && m_languageCode != MedicalScribeLanguageCode::NOT_SET) {
    headers.emplace("x-amzn-medscribe-language-code", MedicalScribeLanguageCodeMapper::GetNameForMedicalScribeLanguageCode(m_languageCode));
  }

  if (m_mediaSampleRateHertzHasBeenSet) {
    ss << m_mediaSampleRateHertz;
    headers.emplace("x-amzn-medscribe-sample-rate", ss.str());
    ss.str("");
  }

  if (m_mediaEncodingHasBeenSet && m_mediaEncoding != MedicalScribeMediaEncoding::NOT_SET) {
    headers.emplace("x-amzn-medscribe-media-encoding",
                    MedicalScribeMediaEncodingMapper::GetNameForMedicalScribeMediaEncoding(m_mediaEncoding));
  }

  return headers;
}
