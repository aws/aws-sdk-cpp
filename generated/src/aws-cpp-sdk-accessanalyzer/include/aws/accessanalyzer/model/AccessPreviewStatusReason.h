/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/AccessPreviewStatusReasonCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Provides more details about the current status of the access preview. For
   * example, if the creation of the access preview fails, a <code>Failed</code>
   * status is returned. This failure can be due to an internal issue with the
   * analysis or due to an invalid proposed resource configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AccessPreviewStatusReason">AWS
   * API Reference</a></p>
   */
  class AccessPreviewStatusReason
  {
  public:
    AWS_ACCESSANALYZER_API AccessPreviewStatusReason() = default;
    AWS_ACCESSANALYZER_API AccessPreviewStatusReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AccessPreviewStatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason code for the current status of the access preview.</p>
     */
    inline AccessPreviewStatusReasonCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(AccessPreviewStatusReasonCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline AccessPreviewStatusReason& WithCode(AccessPreviewStatusReasonCode value) { SetCode(value); return *this;}
    ///@}
  private:

    AccessPreviewStatusReasonCode m_code{AccessPreviewStatusReasonCode::NOT_SET};
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
