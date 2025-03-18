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
    AWS_EC2_API ReleaseHostsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReleaseHosts"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts to release.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIds() const { return m_hostIds; }
    inline bool HostIdsHasBeenSet() const { return m_hostIdsHasBeenSet; }
    template<typename HostIdsT = Aws::Vector<Aws::String>>
    void SetHostIds(HostIdsT&& value) { m_hostIdsHasBeenSet = true; m_hostIds = std::forward<HostIdsT>(value); }
    template<typename HostIdsT = Aws::Vector<Aws::String>>
    ReleaseHostsRequest& WithHostIds(HostIdsT&& value) { SetHostIds(std::forward<HostIdsT>(value)); return *this;}
    template<typename HostIdsT = Aws::String>
    ReleaseHostsRequest& AddHostIds(HostIdsT&& value) { m_hostIdsHasBeenSet = true; m_hostIds.emplace_back(std::forward<HostIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_hostIds;
    bool m_hostIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
