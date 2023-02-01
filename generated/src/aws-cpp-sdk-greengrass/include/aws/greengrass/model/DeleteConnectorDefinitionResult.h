/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{
  class DeleteConnectorDefinitionResult
  {
  public:
    AWS_GREENGRASS_API DeleteConnectorDefinitionResult();
    AWS_GREENGRASS_API DeleteConnectorDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API DeleteConnectorDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
