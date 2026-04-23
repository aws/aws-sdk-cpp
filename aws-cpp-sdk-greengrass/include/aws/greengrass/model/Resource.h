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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Resource">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API Resource
  {
  public:
    Resource();
    Resource(Aws::Utils::Json::JsonView jsonValue);
    Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The resource ID, used to refer to a resource in the Lambda function
     * configuration. Max length is 128 characters with pattern ''[a-zA-Z0-9:_-]+''.
     * This must be unique within a Greengrass group.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The resource ID, used to refer to a resource in the Lambda function
     * configuration. Max length is 128 characters with pattern ''[a-zA-Z0-9:_-]+''.
     * This must be unique within a Greengrass group.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The resource ID, used to refer to a resource in the Lambda function
     * configuration. Max length is 128 characters with pattern ''[a-zA-Z0-9:_-]+''.
     * This must be unique within a Greengrass group.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The resource ID, used to refer to a resource in the Lambda function
     * configuration. Max length is 128 characters with pattern ''[a-zA-Z0-9:_-]+''.
     * This must be unique within a Greengrass group.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The resource ID, used to refer to a resource in the Lambda function
     * configuration. Max length is 128 characters with pattern ''[a-zA-Z0-9:_-]+''.
     * This must be unique within a Greengrass group.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The resource ID, used to refer to a resource in the Lambda function
     * configuration. Max length is 128 characters with pattern ''[a-zA-Z0-9:_-]+''.
     * This must be unique within a Greengrass group.
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The resource ID, used to refer to a resource in the Lambda function
     * configuration. Max length is 128 characters with pattern ''[a-zA-Z0-9:_-]+''.
     * This must be unique within a Greengrass group.
     */
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The resource ID, used to refer to a resource in the Lambda function
     * configuration. Max length is 128 characters with pattern ''[a-zA-Z0-9:_-]+''.
     * This must be unique within a Greengrass group.
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The descriptive resource name, which is displayed on the AWS IoT Greengrass
     * console. Max length 128 characters with pattern ''[a-zA-Z0-9:_-]+''. This must
     * be unique within a Greengrass group.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The descriptive resource name, which is displayed on the AWS IoT Greengrass
     * console. Max length 128 characters with pattern ''[a-zA-Z0-9:_-]+''. This must
     * be unique within a Greengrass group.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The descriptive resource name, which is displayed on the AWS IoT Greengrass
     * console. Max length 128 characters with pattern ''[a-zA-Z0-9:_-]+''. This must
     * be unique within a Greengrass group.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The descriptive resource name, which is displayed on the AWS IoT Greengrass
     * console. Max length 128 characters with pattern ''[a-zA-Z0-9:_-]+''. This must
     * be unique within a Greengrass group.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The descriptive resource name, which is displayed on the AWS IoT Greengrass
     * console. Max length 128 characters with pattern ''[a-zA-Z0-9:_-]+''. This must
     * be unique within a Greengrass group.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The descriptive resource name, which is displayed on the AWS IoT Greengrass
     * console. Max length 128 characters with pattern ''[a-zA-Z0-9:_-]+''. This must
     * be unique within a Greengrass group.
     */
    inline Resource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The descriptive resource name, which is displayed on the AWS IoT Greengrass
     * console. Max length 128 characters with pattern ''[a-zA-Z0-9:_-]+''. This must
     * be unique within a Greengrass group.
     */
    inline Resource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The descriptive resource name, which is displayed on the AWS IoT Greengrass
     * console. Max length 128 characters with pattern ''[a-zA-Z0-9:_-]+''. This must
     * be unique within a Greengrass group.
     */
    inline Resource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * A container of data for all resource types.
     */
    inline const ResourceDataContainer& GetResourceDataContainer() const{ return m_resourceDataContainer; }

    /**
     * A container of data for all resource types.
     */
    inline bool ResourceDataContainerHasBeenSet() const { return m_resourceDataContainerHasBeenSet; }

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
