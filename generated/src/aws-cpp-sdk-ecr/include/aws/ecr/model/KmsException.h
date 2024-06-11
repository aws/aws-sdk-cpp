/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The operation failed due to a KMS exception.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/KmsException">AWS
   * API Reference</a></p>
   */
  class KmsException
  {
  public:
    AWS_ECR_API KmsException();
    AWS_ECR_API KmsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API KmsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline KmsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline KmsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline KmsException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code returned by KMS.</p>
     */
    inline const Aws::String& GetKmsError() const{ return m_kmsError; }
    inline bool KmsErrorHasBeenSet() const { return m_kmsErrorHasBeenSet; }
    inline void SetKmsError(const Aws::String& value) { m_kmsErrorHasBeenSet = true; m_kmsError = value; }
    inline void SetKmsError(Aws::String&& value) { m_kmsErrorHasBeenSet = true; m_kmsError = std::move(value); }
    inline void SetKmsError(const char* value) { m_kmsErrorHasBeenSet = true; m_kmsError.assign(value); }
    inline KmsException& WithKmsError(const Aws::String& value) { SetKmsError(value); return *this;}
    inline KmsException& WithKmsError(Aws::String&& value) { SetKmsError(std::move(value)); return *this;}
    inline KmsException& WithKmsError(const char* value) { SetKmsError(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_kmsError;
    bool m_kmsErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
