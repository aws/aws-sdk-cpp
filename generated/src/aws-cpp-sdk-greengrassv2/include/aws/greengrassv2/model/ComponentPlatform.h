/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Contains information about a platform that a component
   * supports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ComponentPlatform">AWS
   * API Reference</a></p>
   */
  class ComponentPlatform
  {
  public:
    AWS_GREENGRASSV2_API ComponentPlatform();
    AWS_GREENGRASSV2_API ComponentPlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ComponentPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The friendly name of the platform. This name helps you identify the
     * platform.</p> <p>If you omit this parameter, IoT Greengrass creates a friendly
     * name from the <code>os</code> and <code>architecture</code> of the platform.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the platform. This name helps you identify the
     * platform.</p> <p>If you omit this parameter, IoT Greengrass creates a friendly
     * name from the <code>os</code> and <code>architecture</code> of the platform.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the platform. This name helps you identify the
     * platform.</p> <p>If you omit this parameter, IoT Greengrass creates a friendly
     * name from the <code>os</code> and <code>architecture</code> of the platform.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the platform. This name helps you identify the
     * platform.</p> <p>If you omit this parameter, IoT Greengrass creates a friendly
     * name from the <code>os</code> and <code>architecture</code> of the platform.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the platform. This name helps you identify the
     * platform.</p> <p>If you omit this parameter, IoT Greengrass creates a friendly
     * name from the <code>os</code> and <code>architecture</code> of the platform.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the platform. This name helps you identify the
     * platform.</p> <p>If you omit this parameter, IoT Greengrass creates a friendly
     * name from the <code>os</code> and <code>architecture</code> of the platform.</p>
     */
    inline ComponentPlatform& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the platform. This name helps you identify the
     * platform.</p> <p>If you omit this parameter, IoT Greengrass creates a friendly
     * name from the <code>os</code> and <code>architecture</code> of the platform.</p>
     */
    inline ComponentPlatform& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the platform. This name helps you identify the
     * platform.</p> <p>If you omit this parameter, IoT Greengrass creates a friendly
     * name from the <code>os</code> and <code>architecture</code> of the platform.</p>
     */
    inline ComponentPlatform& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentPlatform& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentPlatform& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentPlatform& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentPlatform& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentPlatform& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentPlatform& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentPlatform& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentPlatform& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dictionary of attributes for the platform. The IoT Greengrass Core software
     * defines the <code>os</code> and <code>architecture</code> by default. You can
     * specify additional platform attributes for a core device when you deploy the
     * Greengrass nucleus component. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline ComponentPlatform& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
