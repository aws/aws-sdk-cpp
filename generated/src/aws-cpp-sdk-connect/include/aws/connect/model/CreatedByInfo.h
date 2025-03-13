/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information on the identity that created the file.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreatedByInfo">AWS
   * API Reference</a></p>
   */
  class CreatedByInfo
  {
  public:
    AWS_CONNECT_API CreatedByInfo() = default;
    AWS_CONNECT_API CreatedByInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CreatedByInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An agent ARN representing a <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonconnect.html#amazonconnect-resources-for-iam-policies">connect
     * user</a>.</p>
     */
    inline const Aws::String& GetConnectUserArn() const { return m_connectUserArn; }
    inline bool ConnectUserArnHasBeenSet() const { return m_connectUserArnHasBeenSet; }
    template<typename ConnectUserArnT = Aws::String>
    void SetConnectUserArn(ConnectUserArnT&& value) { m_connectUserArnHasBeenSet = true; m_connectUserArn = std::forward<ConnectUserArnT>(value); }
    template<typename ConnectUserArnT = Aws::String>
    CreatedByInfo& WithConnectUserArn(ConnectUserArnT&& value) { SetConnectUserArn(std::forward<ConnectUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>STS or IAM ARN representing the identity of API Caller. SDK users cannot
     * populate this and this value is calculated automatically if
     * <code>ConnectUserArn</code> is not provided.</p>
     */
    inline const Aws::String& GetAWSIdentityArn() const { return m_aWSIdentityArn; }
    inline bool AWSIdentityArnHasBeenSet() const { return m_aWSIdentityArnHasBeenSet; }
    template<typename AWSIdentityArnT = Aws::String>
    void SetAWSIdentityArn(AWSIdentityArnT&& value) { m_aWSIdentityArnHasBeenSet = true; m_aWSIdentityArn = std::forward<AWSIdentityArnT>(value); }
    template<typename AWSIdentityArnT = Aws::String>
    CreatedByInfo& WithAWSIdentityArn(AWSIdentityArnT&& value) { SetAWSIdentityArn(std::forward<AWSIdentityArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectUserArn;
    bool m_connectUserArnHasBeenSet = false;

    Aws::String m_aWSIdentityArn;
    bool m_aWSIdentityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
