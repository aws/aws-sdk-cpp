/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class EnableFederationRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API EnableFederationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableFederation"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN (or ID suffix of the ARN) of the event data store for which you want
     * to enable Lake query federation.</p>
     */
    inline const Aws::String& GetEventDataStore() const { return m_eventDataStore; }
    inline bool EventDataStoreHasBeenSet() const { return m_eventDataStoreHasBeenSet; }
    template<typename EventDataStoreT = Aws::String>
    void SetEventDataStore(EventDataStoreT&& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = std::forward<EventDataStoreT>(value); }
    template<typename EventDataStoreT = Aws::String>
    EnableFederationRequest& WithEventDataStore(EventDataStoreT&& value) { SetEventDataStore(std::forward<EventDataStoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the federation role to use for the event data store. Amazon Web
     * Services services like Lake Formation use this federation role to access data
     * for the federated event data store. The federation role must exist in your
     * account and provide the <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-federation.html#query-federation-permissions-role">required
     * minimum permissions</a>. </p>
     */
    inline const Aws::String& GetFederationRoleArn() const { return m_federationRoleArn; }
    inline bool FederationRoleArnHasBeenSet() const { return m_federationRoleArnHasBeenSet; }
    template<typename FederationRoleArnT = Aws::String>
    void SetFederationRoleArn(FederationRoleArnT&& value) { m_federationRoleArnHasBeenSet = true; m_federationRoleArn = std::forward<FederationRoleArnT>(value); }
    template<typename FederationRoleArnT = Aws::String>
    EnableFederationRequest& WithFederationRoleArn(FederationRoleArnT&& value) { SetFederationRoleArn(std::forward<FederationRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventDataStore;
    bool m_eventDataStoreHasBeenSet = false;

    Aws::String m_federationRoleArn;
    bool m_federationRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
