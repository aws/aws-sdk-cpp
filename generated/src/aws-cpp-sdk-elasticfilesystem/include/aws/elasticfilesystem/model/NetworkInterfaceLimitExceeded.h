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
   * <p>The calling account has reached the limit for elastic network interfaces for
   * the specific Amazon Web Services Region. Either delete some network interfaces
   * or request that the account quota be raised. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Appendix_Limits.html">Amazon
   * VPC Quotas</a> in the <i>Amazon VPC User Guide</i> (see the <b>Network
   * interfaces per Region</b> entry in the <b>Network interfaces</b> table).
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/NetworkInterfaceLimitExceeded">AWS
   * API Reference</a></p>
   */
  class NetworkInterfaceLimitExceeded
  {
  public:
    AWS_EFS_API NetworkInterfaceLimitExceeded();
    AWS_EFS_API NetworkInterfaceLimitExceeded(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API NetworkInterfaceLimitExceeded& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    
    inline NetworkInterfaceLimitExceeded& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    
    inline NetworkInterfaceLimitExceeded& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    
    inline NetworkInterfaceLimitExceeded& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline NetworkInterfaceLimitExceeded& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline NetworkInterfaceLimitExceeded& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline NetworkInterfaceLimitExceeded& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
