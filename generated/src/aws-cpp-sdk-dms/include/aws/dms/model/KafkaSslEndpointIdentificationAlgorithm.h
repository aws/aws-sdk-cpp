/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{
  enum class KafkaSslEndpointIdentificationAlgorithm
  {
    NOT_SET,
    none,
    https
  };

namespace KafkaSslEndpointIdentificationAlgorithmMapper
{
AWS_DATABASEMIGRATIONSERVICE_API KafkaSslEndpointIdentificationAlgorithm GetKafkaSslEndpointIdentificationAlgorithmForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForKafkaSslEndpointIdentificationAlgorithm(KafkaSslEndpointIdentificationAlgorithm value);
} // namespace KafkaSslEndpointIdentificationAlgorithmMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
