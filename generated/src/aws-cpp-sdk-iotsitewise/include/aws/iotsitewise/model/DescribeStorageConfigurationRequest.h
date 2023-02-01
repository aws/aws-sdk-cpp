/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class DescribeStorageConfigurationRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeStorageConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStorageConfiguration"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
