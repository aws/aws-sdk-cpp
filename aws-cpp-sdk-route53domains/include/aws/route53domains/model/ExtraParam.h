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
#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/ExtraParamName.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>ExtraParam includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API ExtraParam
  {
  public:
    ExtraParam();
    ExtraParam(const Aws::Utils::Json::JsonValue& jsonValue);
    ExtraParam& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Name of the additional parameter required by the top-level domain.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Valid values:
     * <code>DUNS_NUMBER</code> | <code>BRAND_NUMBER</code> |
     * <code>BIRTH_DEPARTMENT</code> | <code>BIRTH_DATE_IN_YYYY_MM_DD</code> |
     * <code>BIRTH_COUNTRY</code> | <code>BIRTH_CITY</code> |
     * <code>DOCUMENT_NUMBER</code> | <code>AU_ID_NUMBER</code> |
     * <code>AU_ID_TYPE</code> | <code>CA_LEGAL_TYPE</code> |
     * <code>CA_BUSINESS_ENTITY_TYPE</code> |<code>ES_IDENTIFICATION</code> |
     * <code>ES_IDENTIFICATION_TYPE</code> | <code>ES_LEGAL_FORM</code> |
     * <code>FI_BUSINESS_NUMBER</code> | <code>FI_ID_NUMBER</code> |
     * <code>IT_PIN</code> | <code>RU_PASSPORT_DATA</code> | <code>SE_ID_NUMBER</code>
     * | <code>SG_ID_NUMBER</code> | <code>VAT_NUMBER</code></p> <p>Parent:
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline const ExtraParamName& GetName() const{ return m_name; }

    /**
     * <p>Name of the additional parameter required by the top-level domain.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Valid values:
     * <code>DUNS_NUMBER</code> | <code>BRAND_NUMBER</code> |
     * <code>BIRTH_DEPARTMENT</code> | <code>BIRTH_DATE_IN_YYYY_MM_DD</code> |
     * <code>BIRTH_COUNTRY</code> | <code>BIRTH_CITY</code> |
     * <code>DOCUMENT_NUMBER</code> | <code>AU_ID_NUMBER</code> |
     * <code>AU_ID_TYPE</code> | <code>CA_LEGAL_TYPE</code> |
     * <code>CA_BUSINESS_ENTITY_TYPE</code> |<code>ES_IDENTIFICATION</code> |
     * <code>ES_IDENTIFICATION_TYPE</code> | <code>ES_LEGAL_FORM</code> |
     * <code>FI_BUSINESS_NUMBER</code> | <code>FI_ID_NUMBER</code> |
     * <code>IT_PIN</code> | <code>RU_PASSPORT_DATA</code> | <code>SE_ID_NUMBER</code>
     * | <code>SG_ID_NUMBER</code> | <code>VAT_NUMBER</code></p> <p>Parent:
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline void SetName(const ExtraParamName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the additional parameter required by the top-level domain.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Valid values:
     * <code>DUNS_NUMBER</code> | <code>BRAND_NUMBER</code> |
     * <code>BIRTH_DEPARTMENT</code> | <code>BIRTH_DATE_IN_YYYY_MM_DD</code> |
     * <code>BIRTH_COUNTRY</code> | <code>BIRTH_CITY</code> |
     * <code>DOCUMENT_NUMBER</code> | <code>AU_ID_NUMBER</code> |
     * <code>AU_ID_TYPE</code> | <code>CA_LEGAL_TYPE</code> |
     * <code>CA_BUSINESS_ENTITY_TYPE</code> |<code>ES_IDENTIFICATION</code> |
     * <code>ES_IDENTIFICATION_TYPE</code> | <code>ES_LEGAL_FORM</code> |
     * <code>FI_BUSINESS_NUMBER</code> | <code>FI_ID_NUMBER</code> |
     * <code>IT_PIN</code> | <code>RU_PASSPORT_DATA</code> | <code>SE_ID_NUMBER</code>
     * | <code>SG_ID_NUMBER</code> | <code>VAT_NUMBER</code></p> <p>Parent:
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline void SetName(ExtraParamName&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the additional parameter required by the top-level domain.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Valid values:
     * <code>DUNS_NUMBER</code> | <code>BRAND_NUMBER</code> |
     * <code>BIRTH_DEPARTMENT</code> | <code>BIRTH_DATE_IN_YYYY_MM_DD</code> |
     * <code>BIRTH_COUNTRY</code> | <code>BIRTH_CITY</code> |
     * <code>DOCUMENT_NUMBER</code> | <code>AU_ID_NUMBER</code> |
     * <code>AU_ID_TYPE</code> | <code>CA_LEGAL_TYPE</code> |
     * <code>CA_BUSINESS_ENTITY_TYPE</code> |<code>ES_IDENTIFICATION</code> |
     * <code>ES_IDENTIFICATION_TYPE</code> | <code>ES_LEGAL_FORM</code> |
     * <code>FI_BUSINESS_NUMBER</code> | <code>FI_ID_NUMBER</code> |
     * <code>IT_PIN</code> | <code>RU_PASSPORT_DATA</code> | <code>SE_ID_NUMBER</code>
     * | <code>SG_ID_NUMBER</code> | <code>VAT_NUMBER</code></p> <p>Parent:
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline ExtraParam& WithName(const ExtraParamName& value) { SetName(value); return *this;}

    /**
     * <p>Name of the additional parameter required by the top-level domain.</p>
     * <p>Type: String</p> <p>Default: None</p> <p>Valid values:
     * <code>DUNS_NUMBER</code> | <code>BRAND_NUMBER</code> |
     * <code>BIRTH_DEPARTMENT</code> | <code>BIRTH_DATE_IN_YYYY_MM_DD</code> |
     * <code>BIRTH_COUNTRY</code> | <code>BIRTH_CITY</code> |
     * <code>DOCUMENT_NUMBER</code> | <code>AU_ID_NUMBER</code> |
     * <code>AU_ID_TYPE</code> | <code>CA_LEGAL_TYPE</code> |
     * <code>CA_BUSINESS_ENTITY_TYPE</code> |<code>ES_IDENTIFICATION</code> |
     * <code>ES_IDENTIFICATION_TYPE</code> | <code>ES_LEGAL_FORM</code> |
     * <code>FI_BUSINESS_NUMBER</code> | <code>FI_ID_NUMBER</code> |
     * <code>IT_PIN</code> | <code>RU_PASSPORT_DATA</code> | <code>SE_ID_NUMBER</code>
     * | <code>SG_ID_NUMBER</code> | <code>VAT_NUMBER</code></p> <p>Parent:
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline ExtraParam& WithName(ExtraParamName&& value) { SetName(value); return *this;}

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints:
     * Maximum 2048 characters.</p> <p>Parent: <code>ExtraParams</code></p>
     * <p>Required: Yes</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints:
     * Maximum 2048 characters.</p> <p>Parent: <code>ExtraParams</code></p>
     * <p>Required: Yes</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints:
     * Maximum 2048 characters.</p> <p>Parent: <code>ExtraParams</code></p>
     * <p>Required: Yes</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints:
     * Maximum 2048 characters.</p> <p>Parent: <code>ExtraParams</code></p>
     * <p>Required: Yes</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints:
     * Maximum 2048 characters.</p> <p>Parent: <code>ExtraParams</code></p>
     * <p>Required: Yes</p>
     */
    inline ExtraParam& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints:
     * Maximum 2048 characters.</p> <p>Parent: <code>ExtraParams</code></p>
     * <p>Required: Yes</p>
     */
    inline ExtraParam& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p> <p>Type: String</p> <p>Default: None</p> <p>Constraints:
     * Maximum 2048 characters.</p> <p>Parent: <code>ExtraParams</code></p>
     * <p>Required: Yes</p>
     */
    inline ExtraParam& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    ExtraParamName m_name;
    bool m_nameHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
