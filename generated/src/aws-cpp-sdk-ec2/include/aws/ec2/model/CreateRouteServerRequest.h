/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteServerPersistRoutesAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateRouteServerRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateRouteServerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRouteServer"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The private Autonomous System Number (ASN) for the Amazon side of the BGP
     * session. Valid values are from 1 to 4294967295. We recommend using a private ASN
     * in the 64512–65534 (16-bit ASN) or 4200000000–4294967294 (32-bit ASN) range.</p>
     */
    inline long long GetAmazonSideAsn() const { return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline CreateRouteServerRequest& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateRouteServerRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateRouteServerRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether routes should be persisted after all BGP sessions are
     * terminated.</p>
     */
    inline RouteServerPersistRoutesAction GetPersistRoutes() const { return m_persistRoutes; }
    inline bool PersistRoutesHasBeenSet() const { return m_persistRoutesHasBeenSet; }
    inline void SetPersistRoutes(RouteServerPersistRoutesAction value) { m_persistRoutesHasBeenSet = true; m_persistRoutes = value; }
    inline CreateRouteServerRequest& WithPersistRoutes(RouteServerPersistRoutesAction value) { SetPersistRoutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes a route server will wait after BGP is re-established to
     * unpersist the routes in the FIB and RIB. Value must be in the range of 1-5.
     * Required if PersistRoutes is <code>enabled</code>.</p> <p>If you set the
     * duration to 1 minute, then when your network appliance re-establishes BGP with
     * route server, it has 1 minute to relearn it's adjacent network and advertise
     * those routes to route server before route server resumes normal functionality.
     * In most cases, 1 minute is probably sufficient. If, however, you have concerns
     * that your BGP network may not be capable of fully re-establishing and
     * re-learning everything in 1 minute, you can increase the duration up to 5
     * minutes.</p>
     */
    inline long long GetPersistRoutesDuration() const { return m_persistRoutesDuration; }
    inline bool PersistRoutesDurationHasBeenSet() const { return m_persistRoutesDurationHasBeenSet; }
    inline void SetPersistRoutesDuration(long long value) { m_persistRoutesDurationHasBeenSet = true; m_persistRoutesDuration = value; }
    inline CreateRouteServerRequest& WithPersistRoutesDuration(long long value) { SetPersistRoutesDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether SNS notifications should be enabled for route server
     * events. Enabling SNS notifications persists BGP status changes to an SNS topic
     * provisioned by Amazon Web Services.</p>
     */
    inline bool GetSnsNotificationsEnabled() const { return m_snsNotificationsEnabled; }
    inline bool SnsNotificationsEnabledHasBeenSet() const { return m_snsNotificationsEnabledHasBeenSet; }
    inline void SetSnsNotificationsEnabled(bool value) { m_snsNotificationsEnabledHasBeenSet = true; m_snsNotificationsEnabled = value; }
    inline CreateRouteServerRequest& WithSnsNotificationsEnabled(bool value) { SetSnsNotificationsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the route server during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateRouteServerRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateRouteServerRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}
  private:

    long long m_amazonSideAsn{0};
    bool m_amazonSideAsnHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    RouteServerPersistRoutesAction m_persistRoutes{RouteServerPersistRoutesAction::NOT_SET};
    bool m_persistRoutesHasBeenSet = false;

    long long m_persistRoutesDuration{0};
    bool m_persistRoutesDurationHasBeenSet = false;

    bool m_snsNotificationsEnabled{false};
    bool m_snsNotificationsEnabledHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
