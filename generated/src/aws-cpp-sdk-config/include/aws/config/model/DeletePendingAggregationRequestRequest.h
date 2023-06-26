/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DeletePendingAggregationRequestRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeletePendingAggregationRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePendingAggregationRequest"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline const Aws::String& GetRequesterAccountId() const{ return m_requesterAccountId; }

    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline bool RequesterAccountIdHasBeenSet() const { return m_requesterAccountIdHasBeenSet; }

    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline void SetRequesterAccountId(const Aws::String& value) { m_requesterAccountIdHasBeenSet = true; m_requesterAccountId = value; }

    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline void SetRequesterAccountId(Aws::String&& value) { m_requesterAccountIdHasBeenSet = true; m_requesterAccountId = std::move(value); }

    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline void SetRequesterAccountId(const char* value) { m_requesterAccountIdHasBeenSet = true; m_requesterAccountId.assign(value); }

    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline DeletePendingAggregationRequestRequest& WithRequesterAccountId(const Aws::String& value) { SetRequesterAccountId(value); return *this;}

    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline DeletePendingAggregationRequestRequest& WithRequesterAccountId(Aws::String&& value) { SetRequesterAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline DeletePendingAggregationRequestRequest& WithRequesterAccountId(const char* value) { SetRequesterAccountId(value); return *this;}


    /**
     * <p>The region requesting to aggregate data.</p>
     */
    inline const Aws::String& GetRequesterAwsRegion() const{ return m_requesterAwsRegion; }

    /**
     * <p>The region requesting to aggregate data.</p>
     */
    inline bool RequesterAwsRegionHasBeenSet() const { return m_requesterAwsRegionHasBeenSet; }

    /**
     * <p>The region requesting to aggregate data.</p>
     */
    inline void SetRequesterAwsRegion(const Aws::String& value) { m_requesterAwsRegionHasBeenSet = true; m_requesterAwsRegion = value; }

    /**
     * <p>The region requesting to aggregate data.</p>
     */
    inline void SetRequesterAwsRegion(Aws::String&& value) { m_requesterAwsRegionHasBeenSet = true; m_requesterAwsRegion = std::move(value); }

    /**
     * <p>The region requesting to aggregate data.</p>
     */
    inline void SetRequesterAwsRegion(const char* value) { m_requesterAwsRegionHasBeenSet = true; m_requesterAwsRegion.assign(value); }

    /**
     * <p>The region requesting to aggregate data.</p>
     */
    inline DeletePendingAggregationRequestRequest& WithRequesterAwsRegion(const Aws::String& value) { SetRequesterAwsRegion(value); return *this;}

    /**
     * <p>The region requesting to aggregate data.</p>
     */
    inline DeletePendingAggregationRequestRequest& WithRequesterAwsRegion(Aws::String&& value) { SetRequesterAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The region requesting to aggregate data.</p>
     */
    inline DeletePendingAggregationRequestRequest& WithRequesterAwsRegion(const char* value) { SetRequesterAwsRegion(value); return *this;}

  private:

    Aws::String m_requesterAccountId;
    bool m_requesterAccountIdHasBeenSet = false;

    Aws::String m_requesterAwsRegion;
    bool m_requesterAwsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
