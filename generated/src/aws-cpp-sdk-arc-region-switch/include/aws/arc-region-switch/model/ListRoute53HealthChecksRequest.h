/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/ARCRegionswitchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

  /**
   */
  class ListRoute53HealthChecksRequest : public ARCRegionswitchRequest
  {
  public:
    AWS_ARCREGIONSWITCH_API ListRoute53HealthChecksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRoute53HealthChecks"; }

    AWS_ARCREGIONSWITCH_API Aws::String SerializePayload() const override;

    AWS_ARCREGIONSWITCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_ARCREGIONSWITCH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Route 53 health check
     * request.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListRoute53HealthChecksRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hosted zone ID for the health checks.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    ListRoute53HealthChecksRequest& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record name for the health checks.</p>
     */
    inline const Aws::String& GetRecordName() const { return m_recordName; }
    inline bool RecordNameHasBeenSet() const { return m_recordNameHasBeenSet; }
    template<typename RecordNameT = Aws::String>
    void SetRecordName(RecordNameT&& value) { m_recordNameHasBeenSet = true; m_recordName = std::forward<RecordNameT>(value); }
    template<typename RecordNameT = Aws::String>
    ListRoute53HealthChecksRequest& WithRecordName(RecordNameT&& value) { SetRecordName(std::forward<RecordNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRoute53HealthChecksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>nextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>nextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRoute53HealthChecksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_recordName;
    bool m_recordNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
