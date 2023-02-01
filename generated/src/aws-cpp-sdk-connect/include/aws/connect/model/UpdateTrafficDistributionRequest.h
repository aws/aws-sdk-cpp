/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TelephonyConfig.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateTrafficDistributionRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateTrafficDistributionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrafficDistribution"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline UpdateTrafficDistributionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline UpdateTrafficDistributionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline UpdateTrafficDistributionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline const TelephonyConfig& GetTelephonyConfig() const{ return m_telephonyConfig; }

    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline bool TelephonyConfigHasBeenSet() const { return m_telephonyConfigHasBeenSet; }

    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline void SetTelephonyConfig(const TelephonyConfig& value) { m_telephonyConfigHasBeenSet = true; m_telephonyConfig = value; }

    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline void SetTelephonyConfig(TelephonyConfig&& value) { m_telephonyConfigHasBeenSet = true; m_telephonyConfig = std::move(value); }

    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline UpdateTrafficDistributionRequest& WithTelephonyConfig(const TelephonyConfig& value) { SetTelephonyConfig(value); return *this;}

    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline UpdateTrafficDistributionRequest& WithTelephonyConfig(TelephonyConfig&& value) { SetTelephonyConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    TelephonyConfig m_telephonyConfig;
    bool m_telephonyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
