/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OpenSearchResourceStatus.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about the OpenSearch Service network
   * policy used for this integration. The network policy assigns network access
   * settings to collections. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-network.html#serverless-network-policies">Network
   * policies</a> in the OpenSearch Service Developer Guide.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/OpenSearchNetworkPolicy">AWS
   * API Reference</a></p>
   */
  class OpenSearchNetworkPolicy
  {
  public:
    AWS_CLOUDWATCHLOGS_API OpenSearchNetworkPolicy();
    AWS_CLOUDWATCHLOGS_API OpenSearchNetworkPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OpenSearchNetworkPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the network policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline OpenSearchNetworkPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline OpenSearchNetworkPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline OpenSearchNetworkPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the status of this OpenSearch
     * Service resource.</p>
     */
    inline const OpenSearchResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OpenSearchResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OpenSearchResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OpenSearchNetworkPolicy& WithStatus(const OpenSearchResourceStatus& value) { SetStatus(value); return *this;}
    inline OpenSearchNetworkPolicy& WithStatus(OpenSearchResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    OpenSearchResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
