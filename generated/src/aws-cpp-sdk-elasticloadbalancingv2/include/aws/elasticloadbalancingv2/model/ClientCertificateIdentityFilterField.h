/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {
enum class ClientCertificateIdentityFilterField { NOT_SET, subject_cn, subject_ou, san_dns, san_uri };

namespace ClientCertificateIdentityFilterFieldMapper {
AWS_ELASTICLOADBALANCINGV2_API ClientCertificateIdentityFilterField GetClientCertificateIdentityFilterFieldForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForClientCertificateIdentityFilterField(ClientCertificateIdentityFilterField value);
}  // namespace ClientCertificateIdentityFilterFieldMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
