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
  enum class StatementStatusString
  {
    NOT_SET,
    SUBMITTED,
    PICKED,
    STARTED,
    FINISHED,
    ABORTED,
    FAILED
  };

namespace StatementStatusStringMapper
{
AWS_REDSHIFTDATAAPISERVICE_API StatementStatusString GetStatementStatusStringForName(const Aws::String& name);

AWS_REDSHIFTDATAAPISERVICE_API Aws::String GetNameForStatementStatusString(StatementStatusString value);
} // namespace StatementStatusStringMapper
} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
