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
  enum class UnAuthenticatedElement
  {
    NOT_SET,
    READ,
    CREATE_AND_UPDATE,
    DELETE_
  };

namespace UnAuthenticatedElementMapper
{
AWS_AMPLIFYBACKEND_API UnAuthenticatedElement GetUnAuthenticatedElementForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForUnAuthenticatedElement(UnAuthenticatedElement value);
} // namespace UnAuthenticatedElementMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
