/**
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
  class DescribeTestSetGenerationRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DescribeTestSetGenerationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTestSetGeneration"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the test set generation.</p>
     */
    inline const Aws::String& GetTestSetGenerationId() const { return m_testSetGenerationId; }
    inline bool TestSetGenerationIdHasBeenSet() const { return m_testSetGenerationIdHasBeenSet; }
    template<typename TestSetGenerationIdT = Aws::String>
    void SetTestSetGenerationId(TestSetGenerationIdT&& value) { m_testSetGenerationIdHasBeenSet = true; m_testSetGenerationId = std::forward<TestSetGenerationIdT>(value); }
    template<typename TestSetGenerationIdT = Aws::String>
    DescribeTestSetGenerationRequest& WithTestSetGenerationId(TestSetGenerationIdT&& value) { SetTestSetGenerationId(std::forward<TestSetGenerationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testSetGenerationId;
    bool m_testSetGenerationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
