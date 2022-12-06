/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/DeleteRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteRecordRequest::DeleteRecordRequest() : 
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifierValueAsStringHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_targetStoresHasBeenSet(false)
{
}

Aws::String DeleteRecordRequest::SerializePayload() const
{
  return {};
}

void DeleteRecordRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_recordIdentifierValueAsStringHasBeenSet)
    {
      ss << m_recordIdentifierValueAsString;
      uri.AddQueryStringParameter("RecordIdentifierValueAsString", ss.str());
      ss.str("");
    }

    if(m_eventTimeHasBeenSet)
    {
      ss << m_eventTime;
      uri.AddQueryStringParameter("EventTime", ss.str());
      ss.str("");
    }

    if(m_targetStoresHasBeenSet)
    {
      for(const auto& item : m_targetStores)
      {
        ss << TargetStoreMapper::GetNameForTargetStore(item);
        uri.AddQueryStringParameter("TargetStores", ss.str());
        ss.str("");
      }
    }

}



