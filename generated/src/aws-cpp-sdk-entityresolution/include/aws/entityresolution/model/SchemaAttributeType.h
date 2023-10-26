/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{
  enum class SchemaAttributeType
  {
    NOT_SET,
    NAME,
    NAME_FIRST,
    NAME_MIDDLE,
    NAME_LAST,
    ADDRESS,
    ADDRESS_STREET1,
    ADDRESS_STREET2,
    ADDRESS_STREET3,
    ADDRESS_CITY,
    ADDRESS_STATE,
    ADDRESS_COUNTRY,
    ADDRESS_POSTALCODE,
    PHONE,
    PHONE_NUMBER,
    PHONE_COUNTRYCODE,
    EMAIL_ADDRESS,
    UNIQUE_ID,
    DATE,
    STRING,
    PROVIDER_ID
  };

namespace SchemaAttributeTypeMapper
{
AWS_ENTITYRESOLUTION_API SchemaAttributeType GetSchemaAttributeTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForSchemaAttributeType(SchemaAttributeType value);
} // namespace SchemaAttributeTypeMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
