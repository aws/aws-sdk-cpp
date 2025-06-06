﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class DescribeImportRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DescribeImportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImport"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the import to describe.</p>
     */
    inline const Aws::String& GetImportId() const { return m_importId; }
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }
    template<typename ImportIdT = Aws::String>
    void SetImportId(ImportIdT&& value) { m_importIdHasBeenSet = true; m_importId = std::forward<ImportIdT>(value); }
    template<typename ImportIdT = Aws::String>
    DescribeImportRequest& WithImportId(ImportIdT&& value) { SetImportId(std::forward<ImportIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
