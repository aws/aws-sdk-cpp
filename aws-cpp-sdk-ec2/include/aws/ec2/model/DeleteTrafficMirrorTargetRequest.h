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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DeleteTrafficMirrorTargetRequest : public EC2Request
  {
  public:
    DeleteTrafficMirrorTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTrafficMirrorTarget"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline const Aws::String& GetTrafficMirrorTargetId() const{ return m_trafficMirrorTargetId; }

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline bool TrafficMirrorTargetIdHasBeenSet() const { return m_trafficMirrorTargetIdHasBeenSet; }

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline void SetTrafficMirrorTargetId(const Aws::String& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = value; }

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline void SetTrafficMirrorTargetId(Aws::String&& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = std::move(value); }

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline void SetTrafficMirrorTargetId(const char* value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId.assign(value); }

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline DeleteTrafficMirrorTargetRequest& WithTrafficMirrorTargetId(const Aws::String& value) { SetTrafficMirrorTargetId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline DeleteTrafficMirrorTargetRequest& WithTrafficMirrorTargetId(Aws::String&& value) { SetTrafficMirrorTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline DeleteTrafficMirrorTargetRequest& WithTrafficMirrorTargetId(const char* value) { SetTrafficMirrorTargetId(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DeleteTrafficMirrorTargetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_trafficMirrorTargetId;
    bool m_trafficMirrorTargetIdHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
