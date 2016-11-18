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
#include <aws/importexport/model/GetShippingLabelRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ImportExport::Model;
using namespace Aws::Utils;

GetShippingLabelRequest::GetShippingLabelRequest() : 
    m_jobIdsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_stateOrProvinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_street1HasBeenSet(false),
    m_street2HasBeenSet(false),
    m_street3HasBeenSet(false),
    m_aPIVersionHasBeenSet(false)
{
}

Aws::String GetShippingLabelRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetShippingLabel&";
  if(m_jobIdsHasBeenSet)
  {
    unsigned jobIdsCount = 1;
    for(auto& item : m_jobIds)
    {
      ss << "jobIds.member." << jobIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      jobIdsCount++;
    }
  }

  if(m_nameHasBeenSet)
  {
    ss << "name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_companyHasBeenSet)
  {
    ss << "company=" << StringUtils::URLEncode(m_company.c_str()) << "&";
  }

  if(m_phoneNumberHasBeenSet)
  {
    ss << "phoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }

  if(m_countryHasBeenSet)
  {
    ss << "country=" << StringUtils::URLEncode(m_country.c_str()) << "&";
  }

  if(m_stateOrProvinceHasBeenSet)
  {
    ss << "stateOrProvince=" << StringUtils::URLEncode(m_stateOrProvince.c_str()) << "&";
  }

  if(m_cityHasBeenSet)
  {
    ss << "city=" << StringUtils::URLEncode(m_city.c_str()) << "&";
  }

  if(m_postalCodeHasBeenSet)
  {
    ss << "postalCode=" << StringUtils::URLEncode(m_postalCode.c_str()) << "&";
  }

  if(m_street1HasBeenSet)
  {
    ss << "street1=" << StringUtils::URLEncode(m_street1.c_str()) << "&";
  }

  if(m_street2HasBeenSet)
  {
    ss << "street2=" << StringUtils::URLEncode(m_street2.c_str()) << "&";
  }

  if(m_street3HasBeenSet)
  {
    ss << "street3=" << StringUtils::URLEncode(m_street3.c_str()) << "&";
  }

  if(m_aPIVersionHasBeenSet)
  {
    ss << "APIVersion=" << StringUtils::URLEncode(m_aPIVersion.c_str()) << "&";
  }

  ss << "Version=2010-06-01";
  return ss.str();
}

