/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespaceErrors.h>
#include <aws/core/utils/UnreferencedParam.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RestXmlProtocolNamespace;

namespace Aws
{
namespace RestXmlProtocolNamespace
{
namespace RestXmlProtocolNamespaceErrorMapper
{



AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  AWS_UNREFERENCED_PARAM(errorName);
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RestXmlProtocolNamespaceErrorMapper
} // namespace RestXmlProtocolNamespace
} // namespace Aws
