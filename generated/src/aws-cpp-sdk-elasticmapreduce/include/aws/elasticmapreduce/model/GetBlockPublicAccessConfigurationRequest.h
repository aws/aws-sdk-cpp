/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class GetBlockPublicAccessConfigurationRequest : public EMRRequest
  {
  public:
    AWS_EMR_API GetBlockPublicAccessConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlockPublicAccessConfiguration"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace EMR
} // namespace Aws
