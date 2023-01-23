/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class CreateUploadUrlRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateUploadUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUploadUrl"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
