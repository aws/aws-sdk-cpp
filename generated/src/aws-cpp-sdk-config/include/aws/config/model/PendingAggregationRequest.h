/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>An object that represents the account ID and region of an aggregator account
   * that is requesting authorization but is not yet authorized.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PendingAggregationRequest">AWS
   * API Reference</a></p>
   */
  class PendingAggregationRequest
  {
  public:
    AWS_CONFIGSERVICE_API PendingAggregationRequest() = default;
    AWS_CONFIGSERVICE_API PendingAggregationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API PendingAggregationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline const Aws::String& GetRequesterAccountId() const { return m_requesterAccountId; }
    inline bool RequesterAccountIdHasBeenSet() const { return m_requesterAccountIdHasBeenSet; }
    template<typename RequesterAccountIdT = Aws::String>
    void SetRequesterAccountId(RequesterAccountIdT&& value) { m_requesterAccountIdHasBeenSet = true; m_requesterAccountId = std::forward<RequesterAccountIdT>(value); }
    template<typename RequesterAccountIdT = Aws::String>
    PendingAggregationRequest& WithRequesterAccountId(RequesterAccountIdT&& value) { SetRequesterAccountId(std::forward<RequesterAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region requesting to aggregate data. </p>
     */
    inline const Aws::String& GetRequesterAwsRegion() const { return m_requesterAwsRegion; }
    inline bool RequesterAwsRegionHasBeenSet() const { return m_requesterAwsRegionHasBeenSet; }
    template<typename RequesterAwsRegionT = Aws::String>
    void SetRequesterAwsRegion(RequesterAwsRegionT&& value) { m_requesterAwsRegionHasBeenSet = true; m_requesterAwsRegion = std::forward<RequesterAwsRegionT>(value); }
    template<typename RequesterAwsRegionT = Aws::String>
    PendingAggregationRequest& WithRequesterAwsRegion(RequesterAwsRegionT&& value) { SetRequesterAwsRegion(std::forward<RequesterAwsRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requesterAccountId;
    bool m_requesterAccountIdHasBeenSet = false;

    Aws::String m_requesterAwsRegion;
    bool m_requesterAwsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
