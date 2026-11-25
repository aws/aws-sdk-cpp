/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>

namespace Aws {
namespace ELBProxy {
namespace Model {
enum class CertificateAssociationStatusCode {
  NOT_SET,
  associate_in_progress,
  active,
  associate_failed,
  disassociate_in_progress,
  disassociated
};

namespace CertificateAssociationStatusCodeMapper {
AWS_ELBPROXY_API CertificateAssociationStatusCode GetCertificateAssociationStatusCodeForName(const Aws::String& name);

AWS_ELBPROXY_API Aws::String GetNameForCertificateAssociationStatusCode(CertificateAssociationStatusCode value);
}  // namespace CertificateAssociationStatusCodeMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
