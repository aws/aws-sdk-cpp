/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class ContactField { NOT_SET, CUSTOMER_ENDPOINT, ADDITIONAL_EMAIL_RECIPIENTS, EMAIL_SUBJECT };

namespace ContactFieldMapper {
AWS_CONNECT_API ContactField GetContactFieldForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactField(ContactField value);
}  // namespace ContactFieldMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
