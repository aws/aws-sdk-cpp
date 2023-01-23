/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ListSupportedPhoneNumberCountriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSupportedPhoneNumberCountriesRequest::ListSupportedPhoneNumberCountriesRequest() : 
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false)
{
}

Aws::String ListSupportedPhoneNumberCountriesRequest::SerializePayload() const
{
  return {};
}

void ListSupportedPhoneNumberCountriesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_productTypeHasBeenSet)
    {
      ss << PhoneNumberProductTypeMapper::GetNameForPhoneNumberProductType(m_productType);
      uri.AddQueryStringParameter("product-type", ss.str());
      ss.str("");
    }

}



