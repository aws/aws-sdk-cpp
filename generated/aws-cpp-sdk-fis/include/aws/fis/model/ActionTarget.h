/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes a target for an action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ActionTarget">AWS
   * API Reference</a></p>
   */
  class AWS_FIS_API ActionTarget
  {
  public:
    ActionTarget();
    ActionTarget(Aws::Utils::Json::JsonView jsonValue);
    ActionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource type of the target.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type of the target.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type of the target.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type of the target.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type of the target.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type of the target.</p>
     */
    inline ActionTarget& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type of the target.</p>
     */
    inline ActionTarget& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type of the target.</p>
     */
    inline ActionTarget& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
