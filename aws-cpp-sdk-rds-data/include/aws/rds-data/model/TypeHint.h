/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDSDataService
{
namespace Model
{
  enum class TypeHint
  {
    NOT_SET,
    DATE,
    DECIMAL,
    TIME,
    TIMESTAMP
  };

namespace TypeHintMapper
{
AWS_RDSDATASERVICE_API TypeHint GetTypeHintForName(const Aws::String& name);

AWS_RDSDATASERVICE_API Aws::String GetNameForTypeHint(TypeHint value);
} // namespace TypeHintMapper
} // namespace Model
} // namespace RDSDataService
} // namespace Aws
