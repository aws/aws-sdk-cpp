/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an Amazon Lightsail instance that has access to a Lightsail
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ResourceReceivingAccess">AWS
   * API Reference</a></p>
   */
  class ResourceReceivingAccess
  {
  public:
    AWS_LIGHTSAIL_API ResourceReceivingAccess();
    AWS_LIGHTSAIL_API ResourceReceivingAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ResourceReceivingAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline ResourceReceivingAccess& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline ResourceReceivingAccess& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline ResourceReceivingAccess& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Lightsail resource type (for example, <code>Instance</code>).</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type (for example, <code>Instance</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type (for example, <code>Instance</code>).</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type (for example, <code>Instance</code>).</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type (for example, <code>Instance</code>).</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The Lightsail resource type (for example, <code>Instance</code>).</p>
     */
    inline ResourceReceivingAccess& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type (for example, <code>Instance</code>).</p>
     */
    inline ResourceReceivingAccess& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The Lightsail resource type (for example, <code>Instance</code>).</p>
     */
    inline ResourceReceivingAccess& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
