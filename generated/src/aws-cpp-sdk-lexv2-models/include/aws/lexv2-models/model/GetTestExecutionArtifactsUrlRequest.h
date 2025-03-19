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
  class GetTestExecutionArtifactsUrlRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API GetTestExecutionArtifactsUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTestExecutionArtifactsUrl"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the completed test execution.</p>
     */
    inline const Aws::String& GetTestExecutionId() const { return m_testExecutionId; }
    inline bool TestExecutionIdHasBeenSet() const { return m_testExecutionIdHasBeenSet; }
    template<typename TestExecutionIdT = Aws::String>
    void SetTestExecutionId(TestExecutionIdT&& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = std::forward<TestExecutionIdT>(value); }
    template<typename TestExecutionIdT = Aws::String>
    GetTestExecutionArtifactsUrlRequest& WithTestExecutionId(TestExecutionIdT&& value) { SetTestExecutionId(std::forward<TestExecutionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testExecutionId;
    bool m_testExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
