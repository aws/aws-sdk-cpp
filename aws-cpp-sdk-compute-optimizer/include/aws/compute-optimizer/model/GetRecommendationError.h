/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes an error experienced when getting recommendations.</p> <p>For
   * example, an error is returned if you request recommendations for an unsupported
   * Auto Scaling group, or if you request recommendations for an instance of an
   * unsupported instance family.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/GetRecommendationError">AWS
   * API Reference</a></p>
   */
  class GetRecommendationError
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRecommendationError();
    AWS_COMPUTEOPTIMIZER_API GetRecommendationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API GetRecommendationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the error.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The ID of the error.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The ID of the error.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The ID of the error.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The ID of the error.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The ID of the error.</p>
     */
    inline GetRecommendationError& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The ID of the error.</p>
     */
    inline GetRecommendationError& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the error.</p>
     */
    inline GetRecommendationError& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The error code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The error code.</p>
     */
    inline GetRecommendationError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline GetRecommendationError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline GetRecommendationError& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The message, or reason, for the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message, or reason, for the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message, or reason, for the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message, or reason, for the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message, or reason, for the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message, or reason, for the error.</p>
     */
    inline GetRecommendationError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message, or reason, for the error.</p>
     */
    inline GetRecommendationError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message, or reason, for the error.</p>
     */
    inline GetRecommendationError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
