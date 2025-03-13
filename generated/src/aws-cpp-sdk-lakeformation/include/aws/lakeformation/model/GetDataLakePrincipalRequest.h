/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class GetDataLakePrincipalRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API GetDataLakePrincipalRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataLakePrincipal"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
