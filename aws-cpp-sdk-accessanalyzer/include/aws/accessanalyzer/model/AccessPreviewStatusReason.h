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
  class AWS_ACCESSANALYZER_API AccessPreviewStatusReason
  {
  public:
    AccessPreviewStatusReason();
    AccessPreviewStatusReason(Aws::Utils::Json::JsonView jsonValue);
    AccessPreviewStatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reason code for the current status of the access preview.</p>
     */
    inline const AccessPreviewStatusReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>The reason code for the current status of the access preview.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The reason code for the current status of the access preview.</p>
     */
    inline void SetCode(const AccessPreviewStatusReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The reason code for the current status of the access preview.</p>
     */
    inline void SetCode(AccessPreviewStatusReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The reason code for the current status of the access preview.</p>
     */
    inline AccessPreviewStatusReason& WithCode(const AccessPreviewStatusReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>The reason code for the current status of the access preview.</p>
     */
    inline AccessPreviewStatusReason& WithCode(AccessPreviewStatusReasonCode&& value) { SetCode(std::move(value)); return *this;}

  private:

    AccessPreviewStatusReasonCode m_code;
    bool m_codeHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
