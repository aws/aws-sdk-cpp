/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/InstanceRefreshLivePoolProgress.h>
#include <aws/autoscaling/model/InstanceRefreshWarmPoolProgress.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Reports progress on replacing instances in an Auto Scaling group that has a
   * warm pool. This includes separate details for instances in the warm pool and
   * instances in the Auto Scaling group (the live pool).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstanceRefreshProgressDetails">AWS
   * API Reference</a></p>
   */
  class InstanceRefreshProgressDetails
  {
  public:
    AWS_AUTOSCALING_API InstanceRefreshProgressDetails() = default;
    AWS_AUTOSCALING_API InstanceRefreshProgressDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API InstanceRefreshProgressDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Reports progress on replacing instances that are in the Auto Scaling
     * group.</p>
     */
    inline const InstanceRefreshLivePoolProgress& GetLivePoolProgress() const { return m_livePoolProgress; }
    inline bool LivePoolProgressHasBeenSet() const { return m_livePoolProgressHasBeenSet; }
    template<typename LivePoolProgressT = InstanceRefreshLivePoolProgress>
    void SetLivePoolProgress(LivePoolProgressT&& value) { m_livePoolProgressHasBeenSet = true; m_livePoolProgress = std::forward<LivePoolProgressT>(value); }
    template<typename LivePoolProgressT = InstanceRefreshLivePoolProgress>
    InstanceRefreshProgressDetails& WithLivePoolProgress(LivePoolProgressT&& value) { SetLivePoolProgress(std::forward<LivePoolProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports progress on replacing instances that are in the warm pool.</p>
     */
    inline const InstanceRefreshWarmPoolProgress& GetWarmPoolProgress() const { return m_warmPoolProgress; }
    inline bool WarmPoolProgressHasBeenSet() const { return m_warmPoolProgressHasBeenSet; }
    template<typename WarmPoolProgressT = InstanceRefreshWarmPoolProgress>
    void SetWarmPoolProgress(WarmPoolProgressT&& value) { m_warmPoolProgressHasBeenSet = true; m_warmPoolProgress = std::forward<WarmPoolProgressT>(value); }
    template<typename WarmPoolProgressT = InstanceRefreshWarmPoolProgress>
    InstanceRefreshProgressDetails& WithWarmPoolProgress(WarmPoolProgressT&& value) { SetWarmPoolProgress(std::forward<WarmPoolProgressT>(value)); return *this;}
    ///@}
  private:

    InstanceRefreshLivePoolProgress m_livePoolProgress;
    bool m_livePoolProgressHasBeenSet = false;

    InstanceRefreshWarmPoolProgress m_warmPoolProgress;
    bool m_warmPoolProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
