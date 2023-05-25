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
  enum class KafkaSaslMechanism
  {
    NOT_SET,
    scram_sha_512,
    plain
  };

namespace KafkaSaslMechanismMapper
{
AWS_DATABASEMIGRATIONSERVICE_API KafkaSaslMechanism GetKafkaSaslMechanismForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForKafkaSaslMechanism(KafkaSaslMechanism value);
} // namespace KafkaSaslMechanismMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
