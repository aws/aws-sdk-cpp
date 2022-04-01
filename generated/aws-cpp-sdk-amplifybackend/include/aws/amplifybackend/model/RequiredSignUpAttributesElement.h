/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{
  enum class RequiredSignUpAttributesElement
  {
    NOT_SET,
    ADDRESS,
    BIRTHDATE,
    EMAIL,
    FAMILY_NAME,
    GENDER,
    GIVEN_NAME,
    LOCALE,
    MIDDLE_NAME,
    NAME,
    NICKNAME,
    PHONE_NUMBER,
    PICTURE,
    PREFERRED_USERNAME,
    PROFILE,
    UPDATED_AT,
    WEBSITE,
    ZONE_INFO
  };

namespace RequiredSignUpAttributesElementMapper
{
AWS_AMPLIFYBACKEND_API RequiredSignUpAttributesElement GetRequiredSignUpAttributesElementForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForRequiredSignUpAttributesElement(RequiredSignUpAttributesElement value);
} // namespace RequiredSignUpAttributesElementMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
