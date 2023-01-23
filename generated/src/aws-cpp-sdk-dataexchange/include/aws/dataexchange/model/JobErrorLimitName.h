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
  enum class JobErrorLimitName
  {
    NOT_SET,
    Assets_per_revision,
    Asset_size_in_GB,
    Amazon_Redshift_datashare_assets_per_revision,
    AWS_Lake_Formation_data_permission_assets_per_revision,
    Amazon_S3_data_access_assets_per_revision
  };

namespace JobErrorLimitNameMapper
{
AWS_DATAEXCHANGE_API JobErrorLimitName GetJobErrorLimitNameForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForJobErrorLimitName(JobErrorLimitName value);
} // namespace JobErrorLimitNameMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
