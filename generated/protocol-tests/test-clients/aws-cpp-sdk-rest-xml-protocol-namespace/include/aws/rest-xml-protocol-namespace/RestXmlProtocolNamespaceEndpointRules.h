/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespace_EXPORTS.h>

namespace Aws
{
namespace RestXmlProtocolNamespace
{
class RestXmlProtocolNamespaceEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace RestXmlProtocolNamespace
} // namespace Aws
