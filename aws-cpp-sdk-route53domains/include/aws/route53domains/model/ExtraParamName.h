/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{
  enum class ExtraParamName
  {
    NOT_SET,
    DUNS_NUMBER,
    BRAND_NUMBER,
    BIRTH_DEPARTMENT,
    BIRTH_DATE_IN_YYYY_MM_DD,
    BIRTH_COUNTRY,
    BIRTH_CITY,
    DOCUMENT_NUMBER,
    AU_ID_NUMBER,
    AU_ID_TYPE,
    CA_LEGAL_TYPE,
    CA_BUSINESS_ENTITY_TYPE,
    ES_IDENTIFICATION,
    ES_IDENTIFICATION_TYPE,
    ES_LEGAL_FORM,
    FI_BUSINESS_NUMBER,
    FI_ID_NUMBER,
    FI_NATIONALITY,
    FI_ORGANIZATION_TYPE,
    IT_PIN,
    IT_REGISTRANT_ENTITY_TYPE,
    RU_PASSPORT_DATA,
    SE_ID_NUMBER,
    SG_ID_NUMBER,
    VAT_NUMBER,
    UK_CONTACT_TYPE,
    UK_COMPANY_NUMBER
  };

namespace ExtraParamNameMapper
{
AWS_ROUTE53DOMAINS_API ExtraParamName GetExtraParamNameForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForExtraParamName(ExtraParamName value);
} // namespace ExtraParamNameMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
