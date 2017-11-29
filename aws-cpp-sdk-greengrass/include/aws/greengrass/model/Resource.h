/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/ResourceDataContainer.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information on the resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Resource">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API Resource
  {
  public:
    Resource();
    Resource(const Aws::Utils::Json::JsonValue& jsonValue);
    Resource& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Resource Id.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Resource Id.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Resource Id.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Resource Id.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Resource Id.
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Resource Id.
     */
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Resource Id.
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * A descriptive resource name.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A descriptive resource name.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A descriptive resource name.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A descriptive resource name.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A descriptive resource name.
     */
    inline Resource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A descriptive resource name.
     */
    inline Resource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A descriptive resource name.
     */
    inline Resource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * A container of data for all resource types.
     */
    inline const ResourceDataContainer& GetResourceDataContainer() const{ return m_resourceDataContainer; }

    /**
     * A container of data for all resource types.
     */
    inline void SetResourceDataContainer(const ResourceDataContainer& value) { m_resourceDataContainerHasBeenSet = true; m_resourceDataContainer = value; }

    /**
     * A container of data for all resource types.
     */
    inline void SetResourceDataContainer(ResourceDataContainer&& value) { m_resourceDataContainerHasBeenSet = true; m_resourceDataContainer = std::move(value); }

    /**
     * A container of data for all resource types.
     */
    inline Resource& WithResourceDataContainer(const ResourceDataContainer& value) { SetResourceDataContainer(value); return *this;}

    /**
     * A container of data for all resource types.
     */
    inline Resource& WithResourceDataContainer(ResourceDataContainer&& value) { SetResourceDataContainer(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ResourceDataContainer m_resourceDataContainer;
    bool m_resourceDataContainerHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
