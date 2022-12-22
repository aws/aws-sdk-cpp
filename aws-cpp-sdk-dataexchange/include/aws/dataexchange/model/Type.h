/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    IMPORT_ASSETS_FROM_S3,
    IMPORT_ASSET_FROM_SIGNED_URL,
    EXPORT_ASSETS_TO_S3,
    EXPORT_ASSET_TO_SIGNED_URL,
    EXPORT_REVISIONS_TO_S3,
    IMPORT_ASSETS_FROM_REDSHIFT_DATA_SHARES,
    IMPORT_ASSET_FROM_API_GATEWAY_API,
    CREATE_S3_DATA_ACCESS_FROM_S3_BUCKET,
    IMPORT_ASSETS_FROM_LAKE_FORMATION_TAG_POLICY
  };

namespace TypeMapper
{
AWS_DATAEXCHANGE_API Type GetTypeForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
