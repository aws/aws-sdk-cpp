/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class GetAccessPreviewRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API GetAccessPreviewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccessPreview"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;

    AWS_ACCESSANALYZER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline const Aws::String& GetAccessPreviewId() const { return m_accessPreviewId; }
    inline bool AccessPreviewIdHasBeenSet() const { return m_accessPreviewIdHasBeenSet; }
    template<typename AccessPreviewIdT = Aws::String>
    void SetAccessPreviewId(AccessPreviewIdT&& value) { m_accessPreviewIdHasBeenSet = true; m_accessPreviewId = std::forward<AccessPreviewIdT>(value); }
    template<typename AccessPreviewIdT = Aws::String>
    GetAccessPreviewRequest& WithAccessPreviewId(AccessPreviewIdT&& value) { SetAccessPreviewId(std::forward<AccessPreviewIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access preview.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const { return m_analyzerArn; }
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }
    template<typename AnalyzerArnT = Aws::String>
    void SetAnalyzerArn(AnalyzerArnT&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::forward<AnalyzerArnT>(value); }
    template<typename AnalyzerArnT = Aws::String>
    GetAccessPreviewRequest& WithAnalyzerArn(AnalyzerArnT&& value) { SetAnalyzerArn(std::forward<AnalyzerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessPreviewId;
    bool m_accessPreviewIdHasBeenSet = false;

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
