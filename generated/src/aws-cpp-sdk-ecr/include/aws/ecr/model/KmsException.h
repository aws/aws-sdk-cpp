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
    AWS_ECR_API KmsException() = default;
    AWS_ECR_API KmsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API KmsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    KmsException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code returned by KMS.</p>
     */
    inline const Aws::String& GetKmsError() const { return m_kmsError; }
    inline bool KmsErrorHasBeenSet() const { return m_kmsErrorHasBeenSet; }
    template<typename KmsErrorT = Aws::String>
    void SetKmsError(KmsErrorT&& value) { m_kmsErrorHasBeenSet = true; m_kmsError = std::forward<KmsErrorT>(value); }
    template<typename KmsErrorT = Aws::String>
    KmsException& WithKmsError(KmsErrorT&& value) { SetKmsError(std::forward<KmsErrorT>(value)); return *this;}
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
