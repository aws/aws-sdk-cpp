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
  enum class LimitName
  {
    NOT_SET,
    Products_per_account,
    Data_sets_per_account,
    Data_sets_per_product,
    Revisions_per_data_set,
    Assets_per_revision,
    Assets_per_import_job_from_Amazon_S3,
    Asset_per_export_job_from_Amazon_S3,
    Asset_size_in_GB,
    Concurrent_in_progress_jobs_to_import_assets_from_Amazon_S3,
    Concurrent_in_progress_jobs_to_import_assets_from_a_signed_URL,
    Concurrent_in_progress_jobs_to_export_assets_to_Amazon_S3,
    Concurrent_in_progress_jobs_to_export_assets_to_a_signed_URL
  };

namespace LimitNameMapper
{
AWS_DATAEXCHANGE_API LimitName GetLimitNameForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForLimitName(LimitName value);
} // namespace LimitNameMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
