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
  enum class DeliveryMethod
  {
    NOT_SET,
    EMAIL,
    SMS
  };

namespace DeliveryMethodMapper
{
AWS_AMPLIFYBACKEND_API DeliveryMethod GetDeliveryMethodForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForDeliveryMethod(DeliveryMethod value);
} // namespace DeliveryMethodMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
