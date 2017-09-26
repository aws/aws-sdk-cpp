/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DeleteFlowLogs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFlowLogsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DeleteFlowLogsRequest : public EC2Request
  {
  public:
    DeleteFlowLogsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFlowLogs"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFlowLogIds() const{ return m_flowLogIds; }

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline void SetFlowLogIds(const Aws::Vector<Aws::String>& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds = value; }

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline void SetFlowLogIds(Aws::Vector<Aws::String>&& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds = std::move(value); }

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline DeleteFlowLogsRequest& WithFlowLogIds(const Aws::Vector<Aws::String>& value) { SetFlowLogIds(value); return *this;}

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline DeleteFlowLogsRequest& WithFlowLogIds(Aws::Vector<Aws::String>&& value) { SetFlowLogIds(std::move(value)); return *this;}

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline DeleteFlowLogsRequest& AddFlowLogIds(const Aws::String& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds.push_back(value); return *this; }

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline DeleteFlowLogsRequest& AddFlowLogIds(Aws::String&& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline DeleteFlowLogsRequest& AddFlowLogIds(const char* value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_flowLogIds;
    bool m_flowLogIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
