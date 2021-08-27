/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Model
{
  enum class StatusString
  {
    NOT_SET,
    ABORTED,
    ALL,
    FAILED,
    FINISHED,
    PICKED,
    STARTED,
    SUBMITTED
  };

namespace StatusStringMapper
{
AWS_REDSHIFTDATAAPISERVICE_API StatusString GetStatusStringForName(const Aws::String& name);

AWS_REDSHIFTDATAAPISERVICE_API Aws::String GetNameForStatusString(StatusString value);
} // namespace StatusStringMapper
} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
