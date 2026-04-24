/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>

namespace Aws {
namespace MailManager {
namespace Model {
enum class RuleClientCertificateAttribute {
  NOT_SET,
  CN,
  SAN_RFC822_NAME,
  SAN_DNS_NAME,
  SAN_DIRECTORY_NAME,
  SAN_UNIFORM_RESOURCE_IDENTIFIER,
  SAN_IP_ADDRESS,
  SAN_REGISTERED_ID,
  SERIAL_NUMBER
};

namespace RuleClientCertificateAttributeMapper {
AWS_MAILMANAGER_API RuleClientCertificateAttribute GetRuleClientCertificateAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleClientCertificateAttribute(RuleClientCertificateAttribute value);
}  // namespace RuleClientCertificateAttributeMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
