/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>

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
namespace MigrationHub
{
namespace Model
{
  class AssociateDiscoveredResourceResult
  {
  public:
    AWS_MIGRATIONHUB_API AssociateDiscoveredResourceResult();
    AWS_MIGRATIONHUB_API AssociateDiscoveredResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API AssociateDiscoveredResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
