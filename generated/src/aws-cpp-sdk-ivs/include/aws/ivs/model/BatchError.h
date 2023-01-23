/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Error related to a specific channel, specified by its ARN.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchError">AWS API
   * Reference</a></p>
   */
  class BatchError
  {
  public:
    AWS_IVS_API BatchError();
    AWS_IVS_API BatchError(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API BatchError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Channel ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Channel ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Channel ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Channel ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Channel ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Channel ARN.</p>
     */
    inline BatchError& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Channel ARN.</p>
     */
    inline BatchError& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Channel ARN.</p>
     */
    inline BatchError& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Error code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>Error code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>Error code.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Error code.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Error code.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>Error code.</p>
     */
    inline BatchError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>Error code.</p>
     */
    inline BatchError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>Error code.</p>
     */
    inline BatchError& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Error message, determined by the application.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline BatchError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline BatchError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Error message, determined by the application.</p>
     */
    inline BatchError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
