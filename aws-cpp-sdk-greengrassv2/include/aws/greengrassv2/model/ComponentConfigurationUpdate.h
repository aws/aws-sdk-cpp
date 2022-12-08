/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a deployment's update to a component's
   * configuration on Greengrass core devices. For more information, see <a
   * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html">Update
   * component configurations</a> in the <i>IoT Greengrass V2 Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ComponentConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class ComponentConfigurationUpdate
  {
  public:
    AWS_GREENGRASSV2_API ComponentConfigurationUpdate();
    AWS_GREENGRASSV2_API ComponentConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ComponentConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A serialized JSON string that contains the configuration object to merge to
     * target devices. The core device merges this configuration with the component's
     * existing configuration. If this is the first time a component deploys on a
     * device, the core device merges this configuration with the component's default
     * configuration. This means that the core device keeps it's existing configuration
     * for keys and values that you don't specify in this object. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#merge-configuration-update">Merge
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetMerge() const{ return m_merge; }

    /**
     * <p>A serialized JSON string that contains the configuration object to merge to
     * target devices. The core device merges this configuration with the component's
     * existing configuration. If this is the first time a component deploys on a
     * device, the core device merges this configuration with the component's default
     * configuration. This means that the core device keeps it's existing configuration
     * for keys and values that you don't specify in this object. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#merge-configuration-update">Merge
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline bool MergeHasBeenSet() const { return m_mergeHasBeenSet; }

    /**
     * <p>A serialized JSON string that contains the configuration object to merge to
     * target devices. The core device merges this configuration with the component's
     * existing configuration. If this is the first time a component deploys on a
     * device, the core device merges this configuration with the component's default
     * configuration. This means that the core device keeps it's existing configuration
     * for keys and values that you don't specify in this object. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#merge-configuration-update">Merge
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetMerge(const Aws::String& value) { m_mergeHasBeenSet = true; m_merge = value; }

    /**
     * <p>A serialized JSON string that contains the configuration object to merge to
     * target devices. The core device merges this configuration with the component's
     * existing configuration. If this is the first time a component deploys on a
     * device, the core device merges this configuration with the component's default
     * configuration. This means that the core device keeps it's existing configuration
     * for keys and values that you don't specify in this object. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#merge-configuration-update">Merge
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetMerge(Aws::String&& value) { m_mergeHasBeenSet = true; m_merge = std::move(value); }

    /**
     * <p>A serialized JSON string that contains the configuration object to merge to
     * target devices. The core device merges this configuration with the component's
     * existing configuration. If this is the first time a component deploys on a
     * device, the core device merges this configuration with the component's default
     * configuration. This means that the core device keeps it's existing configuration
     * for keys and values that you don't specify in this object. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#merge-configuration-update">Merge
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetMerge(const char* value) { m_mergeHasBeenSet = true; m_merge.assign(value); }

    /**
     * <p>A serialized JSON string that contains the configuration object to merge to
     * target devices. The core device merges this configuration with the component's
     * existing configuration. If this is the first time a component deploys on a
     * device, the core device merges this configuration with the component's default
     * configuration. This means that the core device keeps it's existing configuration
     * for keys and values that you don't specify in this object. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#merge-configuration-update">Merge
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentConfigurationUpdate& WithMerge(const Aws::String& value) { SetMerge(value); return *this;}

    /**
     * <p>A serialized JSON string that contains the configuration object to merge to
     * target devices. The core device merges this configuration with the component's
     * existing configuration. If this is the first time a component deploys on a
     * device, the core device merges this configuration with the component's default
     * configuration. This means that the core device keeps it's existing configuration
     * for keys and values that you don't specify in this object. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#merge-configuration-update">Merge
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentConfigurationUpdate& WithMerge(Aws::String&& value) { SetMerge(std::move(value)); return *this;}

    /**
     * <p>A serialized JSON string that contains the configuration object to merge to
     * target devices. The core device merges this configuration with the component's
     * existing configuration. If this is the first time a component deploys on a
     * device, the core device merges this configuration with the component's default
     * configuration. This means that the core device keeps it's existing configuration
     * for keys and values that you don't specify in this object. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#merge-configuration-update">Merge
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentConfigurationUpdate& WithMerge(const char* value) { SetMerge(value); return *this;}


    /**
     * <p>The list of configuration nodes to reset to default values on target devices.
     * Use JSON pointers to specify each node to reset. JSON pointers start with a
     * forward slash (<code>/</code>) and use forward slashes to separate the key for
     * each level in the object. For more information, see the <a
     * href="https://tools.ietf.org/html/rfc6901">JSON pointer specification</a> and <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#reset-configuration-update">Reset
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReset() const{ return m_reset; }

    /**
     * <p>The list of configuration nodes to reset to default values on target devices.
     * Use JSON pointers to specify each node to reset. JSON pointers start with a
     * forward slash (<code>/</code>) and use forward slashes to separate the key for
     * each level in the object. For more information, see the <a
     * href="https://tools.ietf.org/html/rfc6901">JSON pointer specification</a> and <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#reset-configuration-update">Reset
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline bool ResetHasBeenSet() const { return m_resetHasBeenSet; }

    /**
     * <p>The list of configuration nodes to reset to default values on target devices.
     * Use JSON pointers to specify each node to reset. JSON pointers start with a
     * forward slash (<code>/</code>) and use forward slashes to separate the key for
     * each level in the object. For more information, see the <a
     * href="https://tools.ietf.org/html/rfc6901">JSON pointer specification</a> and <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#reset-configuration-update">Reset
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetReset(const Aws::Vector<Aws::String>& value) { m_resetHasBeenSet = true; m_reset = value; }

    /**
     * <p>The list of configuration nodes to reset to default values on target devices.
     * Use JSON pointers to specify each node to reset. JSON pointers start with a
     * forward slash (<code>/</code>) and use forward slashes to separate the key for
     * each level in the object. For more information, see the <a
     * href="https://tools.ietf.org/html/rfc6901">JSON pointer specification</a> and <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#reset-configuration-update">Reset
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetReset(Aws::Vector<Aws::String>&& value) { m_resetHasBeenSet = true; m_reset = std::move(value); }

    /**
     * <p>The list of configuration nodes to reset to default values on target devices.
     * Use JSON pointers to specify each node to reset. JSON pointers start with a
     * forward slash (<code>/</code>) and use forward slashes to separate the key for
     * each level in the object. For more information, see the <a
     * href="https://tools.ietf.org/html/rfc6901">JSON pointer specification</a> and <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#reset-configuration-update">Reset
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentConfigurationUpdate& WithReset(const Aws::Vector<Aws::String>& value) { SetReset(value); return *this;}

    /**
     * <p>The list of configuration nodes to reset to default values on target devices.
     * Use JSON pointers to specify each node to reset. JSON pointers start with a
     * forward slash (<code>/</code>) and use forward slashes to separate the key for
     * each level in the object. For more information, see the <a
     * href="https://tools.ietf.org/html/rfc6901">JSON pointer specification</a> and <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#reset-configuration-update">Reset
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentConfigurationUpdate& WithReset(Aws::Vector<Aws::String>&& value) { SetReset(std::move(value)); return *this;}

    /**
     * <p>The list of configuration nodes to reset to default values on target devices.
     * Use JSON pointers to specify each node to reset. JSON pointers start with a
     * forward slash (<code>/</code>) and use forward slashes to separate the key for
     * each level in the object. For more information, see the <a
     * href="https://tools.ietf.org/html/rfc6901">JSON pointer specification</a> and <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#reset-configuration-update">Reset
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentConfigurationUpdate& AddReset(const Aws::String& value) { m_resetHasBeenSet = true; m_reset.push_back(value); return *this; }

    /**
     * <p>The list of configuration nodes to reset to default values on target devices.
     * Use JSON pointers to specify each node to reset. JSON pointers start with a
     * forward slash (<code>/</code>) and use forward slashes to separate the key for
     * each level in the object. For more information, see the <a
     * href="https://tools.ietf.org/html/rfc6901">JSON pointer specification</a> and <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#reset-configuration-update">Reset
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentConfigurationUpdate& AddReset(Aws::String&& value) { m_resetHasBeenSet = true; m_reset.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of configuration nodes to reset to default values on target devices.
     * Use JSON pointers to specify each node to reset. JSON pointers start with a
     * forward slash (<code>/</code>) and use forward slashes to separate the key for
     * each level in the object. For more information, see the <a
     * href="https://tools.ietf.org/html/rfc6901">JSON pointer specification</a> and <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html#reset-configuration-update">Reset
     * configuration updates</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentConfigurationUpdate& AddReset(const char* value) { m_resetHasBeenSet = true; m_reset.push_back(value); return *this; }

  private:

    Aws::String m_merge;
    bool m_mergeHasBeenSet = false;

    Aws::Vector<Aws::String> m_reset;
    bool m_resetHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
