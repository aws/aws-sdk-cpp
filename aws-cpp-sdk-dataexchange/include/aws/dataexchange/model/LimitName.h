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
    Concurrent_in_progress_jobs_to_export_assets_to_Amazon_S3,
    Concurrent_in_progress_jobs_to_export_assets_to_a_signed_URL,
    Concurrent_in_progress_jobs_to_import_assets_from_Amazon_S3,
    Concurrent_in_progress_jobs_to_import_assets_from_a_signed_URL,
    Concurrent_in_progress_jobs_to_export_revisions_to_Amazon_S3,
    Event_actions_per_account,
    Auto_export_event_actions_per_data_set,
    Amazon_Redshift_datashare_assets_per_import_job_from_Redshift,
    Concurrent_in_progress_jobs_to_import_assets_from_Amazon_Redshift_datashares,
    Revisions_per_Amazon_Redshift_datashare_data_set,
    Amazon_Redshift_datashare_assets_per_revision,
    Concurrent_in_progress_jobs_to_import_assets_from_an_API_Gateway_API,
    Amazon_API_Gateway_API_assets_per_revision,
    Revisions_per_Amazon_API_Gateway_API_data_set,
    Concurrent_in_progress_jobs_to_import_assets_from_an_AWS_Lake_Formation_tag_policy,
    AWS_Lake_Formation_data_permission_assets_per_revision,
    Revisions_per_AWS_Lake_Formation_data_permission_data_set,
    Revisions_per_Amazon_S3_data_access_data_set,
    Amazon_S3_data_access_assets_per_revision,
    Concurrent_in_progress_jobs_to_create_Amazon_S3_data_access_assets_from_S3_buckets
  };

namespace LimitNameMapper
{
AWS_DATAEXCHANGE_API LimitName GetLimitNameForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForLimitName(LimitName value);
} // namespace LimitNameMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
