/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class SalesforceDataTransferApi
  {
    NOT_SET,
    AUTOMATIC,
    BULKV2,
    REST_SYNC
  };

namespace SalesforceDataTransferApiMapper
{
AWS_APPFLOW_API SalesforceDataTransferApi GetSalesforceDataTransferApiForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForSalesforceDataTransferApi(SalesforceDataTransferApi value);
} // namespace SalesforceDataTransferApiMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
