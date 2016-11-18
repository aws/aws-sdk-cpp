/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/iot/model/UpdateCACertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateCACertificateRequest::UpdateCACertificateRequest() : 
    m_certificateIdHasBeenSet(false),
    m_newStatus(CACertificateStatus::NOT_SET),
    m_newStatusHasBeenSet(false),
    m_newAutoRegistrationStatus(AutoRegistrationStatus::NOT_SET),
    m_newAutoRegistrationStatusHasBeenSet(false)
{
}

Aws::String UpdateCACertificateRequest::SerializePayload() const
{
  return "";
}

void UpdateCACertificateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_newStatusHasBeenSet)
    {
      ss << CACertificateStatusMapper::GetNameForCACertificateStatus(m_newStatus);
      uri.AddQueryStringParameter("newStatus", ss.str());
      ss.str("");
    }

    if(m_newAutoRegistrationStatusHasBeenSet)
    {
      ss << AutoRegistrationStatusMapper::GetNameForAutoRegistrationStatus(m_newAutoRegistrationStatus);
      uri.AddQueryStringParameter("newAutoRegistrationStatus", ss.str());
      ss.str("");
    }

}


