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
    AWS_GREENGRASS_API Resource() = default;
    AWS_GREENGRASS_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The resource ID, used to refer to a resource in the Lambda function
     * configuration. Max length is 128 characters with pattern ''[a-zA-Z0-9:_-]+''.
     * This must be unique within a Greengrass group.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Resource& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The descriptive resource name, which is displayed on the AWS IoT Greengrass
     * console. Max length 128 characters with pattern ''[a-zA-Z0-9:_-]+''. This must
     * be unique within a Greengrass group.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Resource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A container of data for all resource types.
     */
    inline const ResourceDataContainer& GetResourceDataContainer() const { return m_resourceDataContainer; }
    inline bool ResourceDataContainerHasBeenSet() const { return m_resourceDataContainerHasBeenSet; }
    template<typename ResourceDataContainerT = ResourceDataContainer>
    void SetResourceDataContainer(ResourceDataContainerT&& value) { m_resourceDataContainerHasBeenSet = true; m_resourceDataContainer = std::forward<ResourceDataContainerT>(value); }
    template<typename ResourceDataContainerT = ResourceDataContainer>
    Resource& WithResourceDataContainer(ResourceDataContainerT&& value) { SetResourceDataContainer(std::forward<ResourceDataContainerT>(value)); return *this;}
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
