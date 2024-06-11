/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Resource
  {
  public:
    AWS_GREENGRASS_API Resource();
    AWS_GREENGRASS_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The resource ID, used to refer to a resource in the Lambda function
     * configuration. Max length is 128 characters with pattern ''[a-zA-Z0-9:_-]+''.
     * This must be unique within a Greengrass group.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Resource& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The descriptive resource name, which is displayed on the AWS IoT Greengrass
     * console. Max length 128 characters with pattern ''[a-zA-Z0-9:_-]+''. This must
     * be unique within a Greengrass group.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Resource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Resource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Resource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * A container of data for all resource types.
     */
    inline const ResourceDataContainer& GetResourceDataContainer() const{ return m_resourceDataContainer; }
    inline bool ResourceDataContainerHasBeenSet() const { return m_resourceDataContainerHasBeenSet; }
    inline void SetResourceDataContainer(const ResourceDataContainer& value) { m_resourceDataContainerHasBeenSet = true; m_resourceDataContainer = value; }
    inline void SetResourceDataContainer(ResourceDataContainer&& value) { m_resourceDataContainerHasBeenSet = true; m_resourceDataContainer = std::move(value); }
    inline Resource& WithResourceDataContainer(const ResourceDataContainer& value) { SetResourceDataContainer(value); return *this;}
    inline Resource& WithResourceDataContainer(ResourceDataContainer&& value) { SetResourceDataContainer(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResourceDataContainer m_resourceDataContainer;
    bool m_resourceDataContainerHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
