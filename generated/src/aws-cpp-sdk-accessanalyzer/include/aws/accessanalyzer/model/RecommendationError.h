/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about the reason that the retrieval of a recommendation
   * for a finding failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/RecommendationError">AWS
   * API Reference</a></p>
   */
  class RecommendationError
  {
  public:
    AWS_ACCESSANALYZER_API RecommendationError();
    AWS_ACCESSANALYZER_API RecommendationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API RecommendationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code for a failed retrieval of a recommendation for a finding.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The error code for a failed retrieval of a recommendation for a finding.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code for a failed retrieval of a recommendation for a finding.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code for a failed retrieval of a recommendation for a finding.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code for a failed retrieval of a recommendation for a finding.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The error code for a failed retrieval of a recommendation for a finding.</p>
     */
    inline RecommendationError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The error code for a failed retrieval of a recommendation for a finding.</p>
     */
    inline RecommendationError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The error code for a failed retrieval of a recommendation for a finding.</p>
     */
    inline RecommendationError& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The error message for a failed retrieval of a recommendation for a
     * finding.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message for a failed retrieval of a recommendation for a
     * finding.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message for a failed retrieval of a recommendation for a
     * finding.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message for a failed retrieval of a recommendation for a
     * finding.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message for a failed retrieval of a recommendation for a
     * finding.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message for a failed retrieval of a recommendation for a
     * finding.</p>
     */
    inline RecommendationError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message for a failed retrieval of a recommendation for a
     * finding.</p>
     */
    inline RecommendationError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message for a failed retrieval of a recommendation for a
     * finding.</p>
     */
    inline RecommendationError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
