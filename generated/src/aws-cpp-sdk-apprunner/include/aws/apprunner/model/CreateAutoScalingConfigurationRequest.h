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
    AWS_APPRUNNER_API CreateAutoScalingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutoScalingConfiguration"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the auto scaling configuration. When you use it for the first time
     * in an Amazon Web Services Region, App Runner creates revision number
     * <code>1</code> of this name. When you use the same name in subsequent calls, App
     * Runner creates incremental revisions of the configuration.</p>  <p>The
     * name <code>DefaultConfiguration</code> is reserved (it's the configuration that
     * App Runner uses if you don't provide a custome one). You can't use it to create
     * a new auto scaling configuration, and you can't create a revision of it.</p>
     * <p>When you want to use your own auto scaling configuration for your App Runner
     * service, <i>create a configuration with a different name</i>, and then provide
     * it when you create or update your service.</p> 
     */
    inline const Aws::String& GetAutoScalingConfigurationName() const{ return m_autoScalingConfigurationName; }

    /**
     * <p>A name for the auto scaling configuration. When you use it for the first time
     * in an Amazon Web Services Region, App Runner creates revision number
     * <code>1</code> of this name. When you use the same name in subsequent calls, App
     * Runner creates incremental revisions of the configuration.</p>  <p>The
     * name <code>DefaultConfiguration</code> is reserved (it's the configuration that
     * App Runner uses if you don't provide a custome one). You can't use it to create
     * a new auto scaling configuration, and you can't create a revision of it.</p>
     * <p>When you want to use your own auto scaling configuration for your App Runner
     * service, <i>create a configuration with a different name</i>, and then provide
     * it when you create or update your service.</p> 
     */
    inline bool AutoScalingConfigurationNameHasBeenSet() const { return m_autoScalingConfigurationNameHasBeenSet; }

    /**
     * <p>A name for the auto scaling configuration. When you use it for the first time
     * in an Amazon Web Services Region, App Runner creates revision number
     * <code>1</code> of this name. When you use the same name in subsequent calls, App
     * Runner creates incremental revisions of the configuration.</p>  <p>The
     * name <code>DefaultConfiguration</code> is reserved (it's the configuration that
     * App Runner uses if you don't provide a custome one). You can't use it to create
     * a new auto scaling configuration, and you can't create a revision of it.</p>
     * <p>When you want to use your own auto scaling configuration for your App Runner
     * service, <i>create a configuration with a different name</i>, and then provide
     * it when you create or update your service.</p> 
     */
    inline void SetAutoScalingConfigurationName(const Aws::String& value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName = value; }

    /**
     * <p>A name for the auto scaling configuration. When you use it for the first time
     * in an Amazon Web Services Region, App Runner creates revision number
     * <code>1</code> of this name. When you use the same name in subsequent calls, App
     * Runner creates incremental revisions of the configuration.</p>  <p>The
     * name <code>DefaultConfiguration</code> is reserved (it's the configuration that
     * App Runner uses if you don't provide a custome one). You can't use it to create
     * a new auto scaling configuration, and you can't create a revision of it.</p>
     * <p>When you want to use your own auto scaling configuration for your App Runner
     * service, <i>create a configuration with a different name</i>, and then provide
     * it when you create or update your service.</p> 
     */
    inline void SetAutoScalingConfigurationName(Aws::String&& value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName = std::move(value); }

    /**
     * <p>A name for the auto scaling configuration. When you use it for the first time
     * in an Amazon Web Services Region, App Runner creates revision number
     * <code>1</code> of this name. When you use the same name in subsequent calls, App
     * Runner creates incremental revisions of the configuration.</p>  <p>The
     * name <code>DefaultConfiguration</code> is reserved (it's the configuration that
     * App Runner uses if you don't provide a custome one). You can't use it to create
     * a new auto scaling configuration, and you can't create a revision of it.</p>
     * <p>When you want to use your own auto scaling configuration for your App Runner
     * service, <i>create a configuration with a different name</i>, and then provide
     * it when you create or update your service.</p> 
     */
    inline void SetAutoScalingConfigurationName(const char* value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName.assign(value); }

    /**
     * <p>A name for the auto scaling configuration. When you use it for the first time
     * in an Amazon Web Services Region, App Runner creates revision number
     * <code>1</code> of this name. When you use the same name in subsequent calls, App
     * Runner creates incremental revisions of the configuration.</p>  <p>The
     * name <code>DefaultConfiguration</code> is reserved (it's the configuration that
     * App Runner uses if you don't provide a custome one). You can't use it to create
     * a new auto scaling configuration, and you can't create a revision of it.</p>
     * <p>When you want to use your own auto scaling configuration for your App Runner
     * service, <i>create a configuration with a different name</i>, and then provide
     * it when you create or update your service.</p> 
     */
    inline CreateAutoScalingConfigurationRequest& WithAutoScalingConfigurationName(const Aws::String& value) { SetAutoScalingConfigurationName(value); return *this;}

    /**
     * <p>A name for the auto scaling configuration. When you use it for the first time
     * in an Amazon Web Services Region, App Runner creates revision number
     * <code>1</code> of this name. When you use the same name in subsequent calls, App
     * Runner creates incremental revisions of the configuration.</p>  <p>The
     * name <code>DefaultConfiguration</code> is reserved (it's the configuration that
     * App Runner uses if you don't provide a custome one). You can't use it to create
     * a new auto scaling configuration, and you can't create a revision of it.</p>
     * <p>When you want to use your own auto scaling configuration for your App Runner
     * service, <i>create a configuration with a different name</i>, and then provide
     * it when you create or update your service.</p> 
     */
    inline CreateAutoScalingConfigurationRequest& WithAutoScalingConfigurationName(Aws::String&& value) { SetAutoScalingConfigurationName(std::move(value)); return *this;}

    /**
     * <p>A name for the auto scaling configuration. When you use it for the first time
     * in an Amazon Web Services Region, App Runner creates revision number
     * <code>1</code> of this name. When you use the same name in subsequent calls, App
     * Runner creates incremental revisions of the configuration.</p>  <p>The
     * name <code>DefaultConfiguration</code> is reserved (it's the configuration that
     * App Runner uses if you don't provide a custome one). You can't use it to create
     * a new auto scaling configuration, and you can't create a revision of it.</p>
     * <p>When you want to use your own auto scaling configuration for your App Runner
     * service, <i>create a configuration with a different name</i>, and then provide
     * it when you create or update your service.</p> 
     */
    inline CreateAutoScalingConfigurationRequest& WithAutoScalingConfigurationName(const char* value) { SetAutoScalingConfigurationName(value); return *this;}


    /**
     * <p>The maximum number of concurrent requests that you want an instance to
     * process. If the number of concurrent requests exceeds this limit, App Runner
     * scales up your service.</p> <p>Default: <code>100</code> </p>
     */
    inline int GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of concurrent requests that you want an instance to
     * process. If the number of concurrent requests exceeds this limit, App Runner
     * scales up your service.</p> <p>Default: <code>100</code> </p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The maximum number of concurrent requests that you want an instance to
     * process. If the number of concurrent requests exceeds this limit, App Runner
     * scales up your service.</p> <p>Default: <code>100</code> </p>
     */
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of concurrent requests that you want an instance to
     * process. If the number of concurrent requests exceeds this limit, App Runner
     * scales up your service.</p> <p>Default: <code>100</code> </p>
     */
    inline CreateAutoScalingConfigurationRequest& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}


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
    inline int GetMinSize() const{ return m_minSize; }

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
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

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
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

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
    inline CreateAutoScalingConfigurationRequest& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum number of instances that your service scales up to. At most
     * <code>MaxSize</code> instances actively serve traffic for your service.</p>
     * <p>Default: <code>25</code> </p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum number of instances that your service scales up to. At most
     * <code>MaxSize</code> instances actively serve traffic for your service.</p>
     * <p>Default: <code>25</code> </p>
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p>The maximum number of instances that your service scales up to. At most
     * <code>MaxSize</code> instances actively serve traffic for your service.</p>
     * <p>Default: <code>25</code> </p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum number of instances that your service scales up to. At most
     * <code>MaxSize</code> instances actively serve traffic for your service.</p>
     * <p>Default: <code>25</code> </p>
     */
    inline CreateAutoScalingConfigurationRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}


    /**
     * <p>A list of metadata items that you can associate with your auto scaling
     * configuration resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of metadata items that you can associate with your auto scaling
     * configuration resource. A tag is a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of metadata items that you can associate with your auto scaling
     * configuration resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of metadata items that you can associate with your auto scaling
     * configuration resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of metadata items that you can associate with your auto scaling
     * configuration resource. A tag is a key-value pair.</p>
     */
    inline CreateAutoScalingConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of metadata items that you can associate with your auto scaling
     * configuration resource. A tag is a key-value pair.</p>
     */
    inline CreateAutoScalingConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of metadata items that you can associate with your auto scaling
     * configuration resource. A tag is a key-value pair.</p>
     */
    inline CreateAutoScalingConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of metadata items that you can associate with your auto scaling
     * configuration resource. A tag is a key-value pair.</p>
     */
    inline CreateAutoScalingConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_autoScalingConfigurationName;
    bool m_autoScalingConfigurationNameHasBeenSet = false;

    int m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    int m_minSize;
    bool m_minSizeHasBeenSet = false;

    int m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
