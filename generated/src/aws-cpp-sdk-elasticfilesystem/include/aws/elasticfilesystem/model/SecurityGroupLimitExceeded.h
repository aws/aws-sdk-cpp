/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Returned if the number of <code>SecurityGroups</code> specified in the
   * request is greater than the limit, which is based on account quota. Either
   * delete some security groups or request that the account quota be raised. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html">Amazon
   * VPC Quotas</a> in the <i>Amazon VPC User Guide</i> (see the <b>Security
   * Groups</b> table). </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/SecurityGroupLimitExceeded">AWS
   * API Reference</a></p>
   */
  class SecurityGroupLimitExceeded
  {
  public:
    AWS_EFS_API SecurityGroupLimitExceeded() = default;
    AWS_EFS_API SecurityGroupLimitExceeded(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API SecurityGroupLimitExceeded& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    SecurityGroupLimitExceeded& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    SecurityGroupLimitExceeded& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
