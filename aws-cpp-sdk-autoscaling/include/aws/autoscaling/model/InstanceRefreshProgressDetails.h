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
   * <p>Reports the progress of an instance refresh on an Auto Scaling group that has
   * a warm pool. This includes separate details for instances in the warm pool and
   * instances in the Auto Scaling group (the live pool).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstanceRefreshProgressDetails">AWS
   * API Reference</a></p>
   */
  class InstanceRefreshProgressDetails
  {
  public:
    AWS_AUTOSCALING_API InstanceRefreshProgressDetails();
    AWS_AUTOSCALING_API InstanceRefreshProgressDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API InstanceRefreshProgressDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * Auto Scaling group.</p>
     */
    inline const InstanceRefreshLivePoolProgress& GetLivePoolProgress() const{ return m_livePoolProgress; }

    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * Auto Scaling group.</p>
     */
    inline bool LivePoolProgressHasBeenSet() const { return m_livePoolProgressHasBeenSet; }

    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * Auto Scaling group.</p>
     */
    inline void SetLivePoolProgress(const InstanceRefreshLivePoolProgress& value) { m_livePoolProgressHasBeenSet = true; m_livePoolProgress = value; }

    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * Auto Scaling group.</p>
     */
    inline void SetLivePoolProgress(InstanceRefreshLivePoolProgress&& value) { m_livePoolProgressHasBeenSet = true; m_livePoolProgress = std::move(value); }

    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * Auto Scaling group.</p>
     */
    inline InstanceRefreshProgressDetails& WithLivePoolProgress(const InstanceRefreshLivePoolProgress& value) { SetLivePoolProgress(value); return *this;}

    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * Auto Scaling group.</p>
     */
    inline InstanceRefreshProgressDetails& WithLivePoolProgress(InstanceRefreshLivePoolProgress&& value) { SetLivePoolProgress(std::move(value)); return *this;}


    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * warm pool.</p>
     */
    inline const InstanceRefreshWarmPoolProgress& GetWarmPoolProgress() const{ return m_warmPoolProgress; }

    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * warm pool.</p>
     */
    inline bool WarmPoolProgressHasBeenSet() const { return m_warmPoolProgressHasBeenSet; }

    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * warm pool.</p>
     */
    inline void SetWarmPoolProgress(const InstanceRefreshWarmPoolProgress& value) { m_warmPoolProgressHasBeenSet = true; m_warmPoolProgress = value; }

    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * warm pool.</p>
     */
    inline void SetWarmPoolProgress(InstanceRefreshWarmPoolProgress&& value) { m_warmPoolProgressHasBeenSet = true; m_warmPoolProgress = std::move(value); }

    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * warm pool.</p>
     */
    inline InstanceRefreshProgressDetails& WithWarmPoolProgress(const InstanceRefreshWarmPoolProgress& value) { SetWarmPoolProgress(value); return *this;}

    /**
     * <p>Indicates the progress of an instance refresh on instances that are in the
     * warm pool.</p>
     */
    inline InstanceRefreshProgressDetails& WithWarmPoolProgress(InstanceRefreshWarmPoolProgress&& value) { SetWarmPoolProgress(std::move(value)); return *this;}

  private:

    InstanceRefreshLivePoolProgress m_livePoolProgress;
    bool m_livePoolProgressHasBeenSet = false;

    InstanceRefreshWarmPoolProgress m_warmPoolProgress;
    bool m_warmPoolProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
