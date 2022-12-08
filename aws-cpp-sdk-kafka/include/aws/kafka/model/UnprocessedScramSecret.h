/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Error info for scram secret associate/disassociate failure.</p>

   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UnprocessedScramSecret">AWS
   * API Reference</a></p>
   */
  class UnprocessedScramSecret
  {
  public:
    AWS_KAFKA_API UnprocessedScramSecret();
    AWS_KAFKA_API UnprocessedScramSecret(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API UnprocessedScramSecret& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Error code for associate/disassociate failure.</p>
         
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * 
            <p>Error code for associate/disassociate failure.</p>
         
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * 
            <p>Error code for associate/disassociate failure.</p>
         
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * 
            <p>Error code for associate/disassociate failure.</p>
         
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * 
            <p>Error code for associate/disassociate failure.</p>
         
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * 
            <p>Error code for associate/disassociate failure.</p>
         
     */
    inline UnprocessedScramSecret& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * 
            <p>Error code for associate/disassociate failure.</p>
         
     */
    inline UnprocessedScramSecret& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * 
            <p>Error code for associate/disassociate failure.</p>
         
     */
    inline UnprocessedScramSecret& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * 
            <p>Error message for associate/disassociate failure.</p>
         
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * 
            <p>Error message for associate/disassociate failure.</p>
         
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * 
            <p>Error message for associate/disassociate failure.</p>
         
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * 
            <p>Error message for associate/disassociate failure.</p>
         
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * 
            <p>Error message for associate/disassociate failure.</p>
         
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * 
            <p>Error message for associate/disassociate failure.</p>
         
     */
    inline UnprocessedScramSecret& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * 
            <p>Error message for associate/disassociate failure.</p>
         
     */
    inline UnprocessedScramSecret& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * 
            <p>Error message for associate/disassociate failure.</p>
         
     */
    inline UnprocessedScramSecret& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * 
            <p>AWS Secrets Manager secret ARN.</p>
         
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * 
            <p>AWS Secrets Manager secret ARN.</p>
         
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * 
            <p>AWS Secrets Manager secret ARN.</p>
         
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * 
            <p>AWS Secrets Manager secret ARN.</p>
         
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * 
            <p>AWS Secrets Manager secret ARN.</p>
         
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * 
            <p>AWS Secrets Manager secret ARN.</p>
         
     */
    inline UnprocessedScramSecret& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * 
            <p>AWS Secrets Manager secret ARN.</p>
         
     */
    inline UnprocessedScramSecret& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * 
            <p>AWS Secrets Manager secret ARN.</p>
         
     */
    inline UnprocessedScramSecret& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
