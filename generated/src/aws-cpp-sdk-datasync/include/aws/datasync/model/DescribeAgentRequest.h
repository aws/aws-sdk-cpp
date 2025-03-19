/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>DescribeAgent</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeAgentRequest">AWS
   * API Reference</a></p>
   */
  class DescribeAgentRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API DescribeAgentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAgent"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that you want
     * information about.</p>
     */
    inline const Aws::String& GetAgentArn() const { return m_agentArn; }
    inline bool AgentArnHasBeenSet() const { return m_agentArnHasBeenSet; }
    template<typename AgentArnT = Aws::String>
    void SetAgentArn(AgentArnT&& value) { m_agentArnHasBeenSet = true; m_agentArn = std::forward<AgentArnT>(value); }
    template<typename AgentArnT = Aws::String>
    DescribeAgentRequest& WithAgentArn(AgentArnT&& value) { SetAgentArn(std::forward<AgentArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentArn;
    bool m_agentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
