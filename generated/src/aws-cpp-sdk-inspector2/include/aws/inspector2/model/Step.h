/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details about the step associated with a finding.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Step">AWS
   * API Reference</a></p>
   */
  class Step
  {
  public:
    AWS_INSPECTOR2_API Step();
    AWS_INSPECTOR2_API Step(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Step& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The component ID.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }

    /**
     * <p>The component ID.</p>
     */
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }

    /**
     * <p>The component ID.</p>
     */
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }

    /**
     * <p>The component ID.</p>
     */
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }

    /**
     * <p>The component ID.</p>
     */
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }

    /**
     * <p>The component ID.</p>
     */
    inline Step& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}

    /**
     * <p>The component ID.</p>
     */
    inline Step& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}

    /**
     * <p>The component ID.</p>
     */
    inline Step& WithComponentId(const char* value) { SetComponentId(value); return *this;}


    /**
     * <p>The component type.</p>
     */
    inline const Aws::String& GetComponentType() const{ return m_componentType; }

    /**
     * <p>The component type.</p>
     */
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }

    /**
     * <p>The component type.</p>
     */
    inline void SetComponentType(const Aws::String& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }

    /**
     * <p>The component type.</p>
     */
    inline void SetComponentType(Aws::String&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }

    /**
     * <p>The component type.</p>
     */
    inline void SetComponentType(const char* value) { m_componentTypeHasBeenSet = true; m_componentType.assign(value); }

    /**
     * <p>The component type.</p>
     */
    inline Step& WithComponentType(const Aws::String& value) { SetComponentType(value); return *this;}

    /**
     * <p>The component type.</p>
     */
    inline Step& WithComponentType(Aws::String&& value) { SetComponentType(std::move(value)); return *this;}

    /**
     * <p>The component type.</p>
     */
    inline Step& WithComponentType(const char* value) { SetComponentType(value); return *this;}

  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
