/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
