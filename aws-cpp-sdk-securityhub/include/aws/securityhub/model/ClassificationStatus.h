/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about the current status of the sensitive data
   * detection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ClassificationStatus">AWS
   * API Reference</a></p>
   */
  class ClassificationStatus
  {
  public:
    AWS_SECURITYHUB_API ClassificationStatus();
    AWS_SECURITYHUB_API ClassificationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ClassificationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The code that represents the status of the sensitive data detection.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The code that represents the status of the sensitive data detection.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The code that represents the status of the sensitive data detection.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code that represents the status of the sensitive data detection.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The code that represents the status of the sensitive data detection.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The code that represents the status of the sensitive data detection.</p>
     */
    inline ClassificationStatus& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The code that represents the status of the sensitive data detection.</p>
     */
    inline ClassificationStatus& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The code that represents the status of the sensitive data detection.</p>
     */
    inline ClassificationStatus& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A longer description of the current status of the sensitive data
     * detection.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A longer description of the current status of the sensitive data
     * detection.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A longer description of the current status of the sensitive data
     * detection.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A longer description of the current status of the sensitive data
     * detection.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A longer description of the current status of the sensitive data
     * detection.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A longer description of the current status of the sensitive data
     * detection.</p>
     */
    inline ClassificationStatus& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A longer description of the current status of the sensitive data
     * detection.</p>
     */
    inline ClassificationStatus& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A longer description of the current status of the sensitive data
     * detection.</p>
     */
    inline ClassificationStatus& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
