/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/Tag.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class CreateAutoScalingConfigurationRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API CreateAutoScalingConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutoScalingConfiguration"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the auto scaling configuration. When you use it for the first time
     * in an Amazon Web Services Region, App Runner creates revision number
     * <code>1</code> of this name. When you use the same name in subsequent calls, App
     * Runner creates incremental revisions of the configuration.</p>  <p>Prior
     * to the release of <a
     * href="https://docs.aws.amazon.com/apprunner/latest/relnotes/release-2023-09-22-auto-scale-config.html">Auto
     * scale configuration enhancements</a>, the name <code>DefaultConfiguration</code>
     * was reserved. </p> <p>This restriction is no longer in place. You can now manage
     * <code>DefaultConfiguration</code> the same way you manage your custom auto
     * scaling configurations. This means you can do the following with the
     * <code>DefaultConfiguration</code> that App Runner provides:</p> <ul> <li>
     * <p>Create new revisions of the <code>DefaultConfiguration</code>.</p> </li> <li>
     * <p>Delete the revisions of the <code>DefaultConfiguration</code>.</p> </li> <li>
     * <p>Delete the auto scaling configuration for which the App Runner
     * <code>DefaultConfiguration</code> was created.</p> </li> <li> <p>If you delete
     * the auto scaling configuration you can create another custom auto scaling
     * configuration with the same <code>DefaultConfiguration</code> name. The original
     * <code>DefaultConfiguration</code> resource provided by App Runner remains in
     * your account unless you make changes to it.</p> </li> </ul> 
     */
    inline const Aws::String& GetAutoScalingConfigurationName() const { return m_autoScalingConfigurationName; }
    inline bool AutoScalingConfigurationNameHasBeenSet() const { return m_autoScalingConfigurationNameHasBeenSet; }
    template<typename AutoScalingConfigurationNameT = Aws::String>
    void SetAutoScalingConfigurationName(AutoScalingConfigurationNameT&& value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName = std::forward<AutoScalingConfigurationNameT>(value); }
    template<typename AutoScalingConfigurationNameT = Aws::String>
    CreateAutoScalingConfigurationRequest& WithAutoScalingConfigurationName(AutoScalingConfigurationNameT&& value) { SetAutoScalingConfigurationName(std::forward<AutoScalingConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent requests that you want an instance to
     * process. If the number of concurrent requests exceeds this limit, App Runner
     * scales up your service.</p> <p>Default: <code>100</code> </p>
     */
    inline int GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }
    inline CreateAutoScalingConfigurationRequest& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of instances that App Runner provisions for your service.
     * The service always has at least <code>MinSize</code> provisioned instances. Some
     * of them actively serve traffic. The rest of them (provisioned and inactive
     * instances) are a cost-effective compute capacity reserve and are ready to be
     * quickly activated. You pay for memory usage of all the provisioned instances.
     * You pay for CPU usage of only the active subset.</p> <p>App Runner temporarily
     * doubles the number of provisioned instances during deployments, to maintain the
     * same capacity for both old and new code.</p> <p>Default: <code>1</code> </p>
     */
    inline int GetMinSize() const { return m_minSize; }
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }
    inline CreateAutoScalingConfigurationRequest& WithMinSize(int value) { SetMinSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that your service scales up to. At most
     * <code>MaxSize</code> instances actively serve traffic for your service.</p>
     * <p>Default: <code>25</code> </p>
     */
    inline int GetMaxSize() const { return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline CreateAutoScalingConfigurationRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metadata items that you can associate with your auto scaling
     * configuration resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAutoScalingConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAutoScalingConfigurationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoScalingConfigurationName;
    bool m_autoScalingConfigurationNameHasBeenSet = false;

    int m_maxConcurrency{0};
    bool m_maxConcurrencyHasBeenSet = false;

    int m_minSize{0};
    bool m_minSizeHasBeenSet = false;

    int m_maxSize{0};
    bool m_maxSizeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
