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
  enum class AuthenticatedElement
  {
    NOT_SET,
    READ,
    CREATE_AND_UPDATE,
    DELETE_
  };

namespace AuthenticatedElementMapper
{
AWS_AMPLIFYBACKEND_API AuthenticatedElement GetAuthenticatedElementForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForAuthenticatedElement(AuthenticatedElement value);
} // namespace AuthenticatedElementMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
