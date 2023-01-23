/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CancelLegalHoldRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CancelLegalHoldRequest::CancelLegalHoldRequest() : 
    m_legalHoldIdHasBeenSet(false),
    m_cancelDescriptionHasBeenSet(false),
    m_retainRecordInDays(0),
    m_retainRecordInDaysHasBeenSet(false)
{
}

Aws::String CancelLegalHoldRequest::SerializePayload() const
{
  return {};
}

void CancelLegalHoldRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_cancelDescriptionHasBeenSet)
    {
      ss << m_cancelDescription;
      uri.AddQueryStringParameter("cancelDescription", ss.str());
      ss.str("");
    }

    if(m_retainRecordInDaysHasBeenSet)
    {
      ss << m_retainRecordInDays;
      uri.AddQueryStringParameter("retainRecordInDays", ss.str());
      ss.str("");
    }

}



