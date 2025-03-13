/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AuthenticationType.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class DescribeSessionsRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DescribeSessionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSessions"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the stack. This value is case-sensitive.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    DescribeSessionsRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet. This value is case-sensitive.</p>
     */
    inline const Aws::String& GetFleetName() const { return m_fleetName; }
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }
    template<typename FleetNameT = Aws::String>
    void SetFleetName(FleetNameT&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::forward<FleetNameT>(value); }
    template<typename FleetNameT = Aws::String>
    DescribeSessionsRequest& WithFleetName(FleetNameT&& value) { SetFleetName(std::forward<FleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user identifier (ID). If you specify a user ID, you must also specify the
     * authentication type.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    DescribeSessionsRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSessionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of each page of results. The default value is 20 and the maximum
     * value is 50.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeSessionsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method. Specify <code>API</code> for a user authenticated
     * using a streaming URL or <code>SAML</code> for a SAML federated user. The
     * default is to authenticate users using a streaming URL.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline DescribeSessionsRequest& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the instance hosting the session.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DescribeSessionsRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
