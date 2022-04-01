/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/GetSiteAddressRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSiteAddressRequest::GetSiteAddressRequest() : 
    m_siteIdHasBeenSet(false),
    m_addressType(AddressType::NOT_SET),
    m_addressTypeHasBeenSet(false)
{
}

Aws::String GetSiteAddressRequest::SerializePayload() const
{
  return {};
}

void GetSiteAddressRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_addressTypeHasBeenSet)
    {
      ss << AddressTypeMapper::GetNameForAddressType(m_addressType);
      uri.AddQueryStringParameter("AddressType", ss.str());
      ss.str("");
    }

}



