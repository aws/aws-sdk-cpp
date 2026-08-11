/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/internal/AgentRegistryEndpointRules.h>
#include <aws/core/utils/memory/stl/AWSArray.h>

namespace Aws {
namespace AgentRegistry {
const size_t AgentRegistryEndpointRules::RulesBlobStrLen = 346;
const size_t AgentRegistryEndpointRules::RulesBlobSize = 346;

using RulesBlobT = Aws::Array<const char, AgentRegistryEndpointRules::RulesBlobSize>;
static constexpr RulesBlobT RulesBlob = {
    {'\x52', '\x44', '\x50', '\x45', '\xce', '\x00', '\x00', '\x00', '\x31', '\x2e', '\x31', '\x24', '\x24', '\x52', '\x65', '\x67', '\x69',
     '\x6f', '\x6e', '\x24', '\x24', '\x41', '\x57', '\x53', '\x3a', '\x3a', '\x52', '\x65', '\x67', '\x69', '\x6f', '\x6e', '\x24', '\x24',
     '\x45', '\x6e', '\x64', '\x70', '\x6f', '\x69', '\x6e', '\x74', '\x24', '\x24', '\x53', '\x44', '\x4b', '\x3a', '\x3a', '\x45', '\x6e',
     '\x64', '\x70', '\x6f', '\x69', '\x6e', '\x74', '\x24', '\x24', '\x68', '\x74', '\x74', '\x70', '\x73', '\x3a', '\x2f', '\x2f', '\x61',
     '\x67', '\x65', '\x6e', '\x74', '\x2d', '\x72', '\x65', '\x67', '\x69', '\x73', '\x74', '\x72', '\x79', '\x2e', '\x7b', '\x52', '\x65',
     '\x67', '\x69', '\x6f', '\x6e', '\x7d', '\x2e', '\x61', '\x70', '\x69', '\x2e', '\x61', '\x77', '\x73', '\x24', '\x24', '\x55', '\x6e',
     '\x61', '\x62', '\x6c', '\x65', '\x20', '\x74', '\x6f', '\x20', '\x72', '\x65', '\x73', '\x6f', '\x6c', '\x76', '\x65', '\x20', '\x61',
     '\x6e', '\x20', '\x41', '\x67', '\x65', '\x6e', '\x74', '\x20', '\x52', '\x65', '\x67', '\x69', '\x73', '\x74', '\x72', '\x79', '\x20',
     '\x65', '\x6e', '\x64', '\x70', '\x6f', '\x69', '\x6e', '\x74', '\x3a', '\x20', '\x52', '\x65', '\x67', '\x69', '\x6f', '\x6e', '\x20',
     '\x77', '\x61', '\x73', '\x20', '\x6e', '\x6f', '\x74', '\x20', '\x73', '\x65', '\x74', '\x20', '\x61', '\x6e', '\x64', '\x20', '\x6e',
     '\x6f', '\x20', '\x65', '\x78', '\x70', '\x6c', '\x69', '\x63', '\x69', '\x74', '\x20', '\x45', '\x6e', '\x64', '\x70', '\x6f', '\x69',
     '\x6e', '\x74', '\x20', '\x6f', '\x76', '\x65', '\x72', '\x72', '\x69', '\x64', '\x65', '\x20', '\x77', '\x61', '\x73', '\x20', '\x70',
     '\x72', '\x6f', '\x76', '\x69', '\x64', '\x65', '\x64', '\x2e', '\x24', '\x24', '\x00', '\x00', '\x03', '\x00', '\x02', '\x00', '\x01',
     '\x05', '\x00', '\x06', '\x00', '\x00', '\x00', '\x01', '\x0d', '\x00', '\x0b', '\x00', '\x01', '\x1a', '\x00', '\x08', '\x00', '\x00',
     '\x00', '\x01', '\x24', '\x00', '\x0d', '\x00', '\x02', '\x00', '\x10', '\x00', '\x01', '\x00', '\x04', '\x1a', '\x00', '\x08', '\x00',
     '\x00', '\x10', '\x00', '\x01', '\x00', '\x04', '\x05', '\x00', '\x06', '\x00', '\x00', '\x03', '\x00', '\x20', '\x04', '\x1a', '\x00',
     '\x08', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x20', '\x01', '\x33', '\x00', '\x27', '\x00', '\x00', '\x00', '\x00',
     '\x00', '\x00', '\x00', '\x21', '\x01', '\x5c', '\x00', '\x70', '\x00', '\x02', '\x00', '\x00', '\x00', '\x03', '\x00', '\x00', '\x00',
     '\x24', '\x00', '\x01', '\x00', '\xff', '\xff', '\xff', '\xff', '\x01', '\x00', '\x00', '\x00', '\xff', '\xff', '\xff', '\xff', '\x00',
     '\x00', '\x00', '\x00', '\x01', '\xe1', '\xf5', '\x05', '\x03', '\x00', '\x00', '\x00', '\x01', '\x00', '\x00', '\x00', '\x02', '\xe1',
     '\xf5', '\x05', '\x03', '\xe1', '\xf5', '\x05'}};

const char* AgentRegistryEndpointRules::GetRulesBlob() { return RulesBlob.data(); }
}  // namespace AgentRegistry
}  // namespace Aws
