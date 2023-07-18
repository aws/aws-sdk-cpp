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
  class AWS_ACCESSANALYZER_API GetAccessPreviewRequest : public AccessAnalyzerRequest
  {
  public:
    GetAccessPreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccessPreview"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline const Aws::String& GetAccessPreviewId() const{ return m_accessPreviewId; }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline bool AccessPreviewIdHasBeenSet() const { return m_accessPreviewIdHasBeenSet; }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline void SetAccessPreviewId(const Aws::String& value) { m_accessPreviewIdHasBeenSet = true; m_accessPreviewId = value; }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline void SetAccessPreviewId(Aws::String&& value) { m_accessPreviewIdHasBeenSet = true; m_accessPreviewId = std::move(value); }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline void SetAccessPreviewId(const char* value) { m_accessPreviewIdHasBeenSet = true; m_accessPreviewId.assign(value); }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline GetAccessPreviewRequest& WithAccessPreviewId(const Aws::String& value) { SetAccessPreviewId(value); return *this;}

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline GetAccessPreviewRequest& WithAccessPreviewId(Aws::String&& value) { SetAccessPreviewId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline GetAccessPreviewRequest& WithAccessPreviewId(const char* value) { SetAccessPreviewId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access preview.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const{ return m_analyzerArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access preview.</p>
     */
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access preview.</p>
     */
    inline void SetAnalyzerArn(const Aws::String& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access preview.</p>
     */
    inline void SetAnalyzerArn(Aws::String&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access preview.</p>
     */
    inline void SetAnalyzerArn(const char* value) { m_analyzerArnHasBeenSet = true; m_analyzerArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access preview.</p>
     */
    inline GetAccessPreviewRequest& WithAnalyzerArn(const Aws::String& value) { SetAnalyzerArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access preview.</p>
     */
    inline GetAccessPreviewRequest& WithAnalyzerArn(Aws::String&& value) { SetAnalyzerArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access preview.</p>
     */
    inline GetAccessPreviewRequest& WithAnalyzerArn(const char* value) { SetAnalyzerArn(value); return *this;}

  private:

    Aws::String m_accessPreviewId;
    bool m_accessPreviewIdHasBeenSet;

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
