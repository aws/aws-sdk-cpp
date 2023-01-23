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
    AWS_CONFIGSERVICE_API PendingAggregationRequest();
    AWS_CONFIGSERVICE_API PendingAggregationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API PendingAggregationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline PendingAggregationRequest& WithRequesterAccountId(const Aws::String& value) { SetRequesterAccountId(value); return *this;}

    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline PendingAggregationRequest& WithRequesterAccountId(Aws::String&& value) { SetRequesterAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID of the account requesting to aggregate data.</p>
     */
    inline PendingAggregationRequest& WithRequesterAccountId(const char* value) { SetRequesterAccountId(value); return *this;}


    /**
     * <p>The region requesting to aggregate data. </p>
     */
    inline const Aws::String& GetRequesterAwsRegion() const{ return m_requesterAwsRegion; }

    /**
     * <p>The region requesting to aggregate data. </p>
     */
    inline bool RequesterAwsRegionHasBeenSet() const { return m_requesterAwsRegionHasBeenSet; }

    /**
     * <p>The region requesting to aggregate data. </p>
     */
    inline void SetRequesterAwsRegion(const Aws::String& value) { m_requesterAwsRegionHasBeenSet = true; m_requesterAwsRegion = value; }

    /**
     * <p>The region requesting to aggregate data. </p>
     */
    inline void SetRequesterAwsRegion(Aws::String&& value) { m_requesterAwsRegionHasBeenSet = true; m_requesterAwsRegion = std::move(value); }

    /**
     * <p>The region requesting to aggregate data. </p>
     */
    inline void SetRequesterAwsRegion(const char* value) { m_requesterAwsRegionHasBeenSet = true; m_requesterAwsRegion.assign(value); }

    /**
     * <p>The region requesting to aggregate data. </p>
     */
    inline PendingAggregationRequest& WithRequesterAwsRegion(const Aws::String& value) { SetRequesterAwsRegion(value); return *this;}

    /**
     * <p>The region requesting to aggregate data. </p>
     */
    inline PendingAggregationRequest& WithRequesterAwsRegion(Aws::String&& value) { SetRequesterAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The region requesting to aggregate data. </p>
     */
    inline PendingAggregationRequest& WithRequesterAwsRegion(const char* value) { SetRequesterAwsRegion(value); return *this;}

  private:

    Aws::String m_requesterAccountId;
    bool m_requesterAccountIdHasBeenSet = false;

    Aws::String m_requesterAwsRegion;
    bool m_requesterAwsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
