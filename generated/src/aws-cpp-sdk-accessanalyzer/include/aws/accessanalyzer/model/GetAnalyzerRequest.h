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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Retrieves an analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzerRequest">AWS
   * API Reference</a></p>
   */
  class GetAnalyzerRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API GetAnalyzerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAnalyzer"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the analyzer retrieved.</p>
     */
    inline const Aws::String& GetAnalyzerName() const{ return m_analyzerName; }

    /**
     * <p>The name of the analyzer retrieved.</p>
     */
    inline bool AnalyzerNameHasBeenSet() const { return m_analyzerNameHasBeenSet; }

    /**
     * <p>The name of the analyzer retrieved.</p>
     */
    inline void SetAnalyzerName(const Aws::String& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = value; }

    /**
     * <p>The name of the analyzer retrieved.</p>
     */
    inline void SetAnalyzerName(Aws::String&& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = std::move(value); }

    /**
     * <p>The name of the analyzer retrieved.</p>
     */
    inline void SetAnalyzerName(const char* value) { m_analyzerNameHasBeenSet = true; m_analyzerName.assign(value); }

    /**
     * <p>The name of the analyzer retrieved.</p>
     */
    inline GetAnalyzerRequest& WithAnalyzerName(const Aws::String& value) { SetAnalyzerName(value); return *this;}

    /**
     * <p>The name of the analyzer retrieved.</p>
     */
    inline GetAnalyzerRequest& WithAnalyzerName(Aws::String&& value) { SetAnalyzerName(std::move(value)); return *this;}

    /**
     * <p>The name of the analyzer retrieved.</p>
     */
    inline GetAnalyzerRequest& WithAnalyzerName(const char* value) { SetAnalyzerName(value); return *this;}

  private:

    Aws::String m_analyzerName;
    bool m_analyzerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
