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
  class DisassociateCreatedArtifactResult
  {
  public:
    AWS_MIGRATIONHUB_API DisassociateCreatedArtifactResult();
    AWS_MIGRATIONHUB_API DisassociateCreatedArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API DisassociateCreatedArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
