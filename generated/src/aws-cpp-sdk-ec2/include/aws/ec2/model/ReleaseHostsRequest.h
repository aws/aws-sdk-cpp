/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class ReleaseHostsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ReleaseHostsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReleaseHosts"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the Dedicated Hosts to release.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIds() const{ return m_hostIds; }

    /**
     * <p>The IDs of the Dedicated Hosts to release.</p>
     */
    inline bool HostIdsHasBeenSet() const { return m_hostIdsHasBeenSet; }

    /**
     * <p>The IDs of the Dedicated Hosts to release.</p>
     */
    inline void SetHostIds(const Aws::Vector<Aws::String>& value) { m_hostIdsHasBeenSet = true; m_hostIds = value; }

    /**
     * <p>The IDs of the Dedicated Hosts to release.</p>
     */
    inline void SetHostIds(Aws::Vector<Aws::String>&& value) { m_hostIdsHasBeenSet = true; m_hostIds = std::move(value); }

    /**
     * <p>The IDs of the Dedicated Hosts to release.</p>
     */
    inline ReleaseHostsRequest& WithHostIds(const Aws::Vector<Aws::String>& value) { SetHostIds(value); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts to release.</p>
     */
    inline ReleaseHostsRequest& WithHostIds(Aws::Vector<Aws::String>&& value) { SetHostIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts to release.</p>
     */
    inline ReleaseHostsRequest& AddHostIds(const Aws::String& value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts to release.</p>
     */
    inline ReleaseHostsRequest& AddHostIds(Aws::String&& value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts to release.</p>
     */
    inline ReleaseHostsRequest& AddHostIds(const char* value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_hostIds;
    bool m_hostIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
