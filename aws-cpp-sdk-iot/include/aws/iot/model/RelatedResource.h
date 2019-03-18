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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ResourceType.h>
#include <aws/iot/model/ResourceIdentifier.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information about a related resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RelatedResource">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API RelatedResource
  {
  public:
    RelatedResource();
    RelatedResource(Aws::Utils::Json::JsonView jsonValue);
    RelatedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline RelatedResource& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline RelatedResource& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Information identifying the resource.</p>
     */
    inline const ResourceIdentifier& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>Information identifying the resource.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>Information identifying the resource.</p>
     */
    inline void SetResourceIdentifier(const ResourceIdentifier& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>Information identifying the resource.</p>
     */
    inline void SetResourceIdentifier(ResourceIdentifier&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>Information identifying the resource.</p>
     */
    inline RelatedResource& WithResourceIdentifier(const ResourceIdentifier& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>Information identifying the resource.</p>
     */
    inline RelatedResource& WithResourceIdentifier(ResourceIdentifier&& value) { SetResourceIdentifier(std::move(value)); return *this;}


    /**
     * <p>Additional information about the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>Additional information about the resource.</p>
     */
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }

    /**
     * <p>Additional information about the resource.</p>
     */
    inline void SetAdditionalInfo(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>Additional information about the resource.</p>
     */
    inline void SetAdditionalInfo(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }

    /**
     * <p>Additional information about the resource.</p>
     */
    inline RelatedResource& WithAdditionalInfo(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Additional information about the resource.</p>
     */
    inline RelatedResource& WithAdditionalInfo(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalInfo(std::move(value)); return *this;}

    /**
     * <p>Additional information about the resource.</p>
     */
    inline RelatedResource& AddAdditionalInfo(const Aws::String& key, const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, value); return *this; }

    /**
     * <p>Additional information about the resource.</p>
     */
    inline RelatedResource& AddAdditionalInfo(Aws::String&& key, const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional information about the resource.</p>
     */
    inline RelatedResource& AddAdditionalInfo(const Aws::String& key, Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional information about the resource.</p>
     */
    inline RelatedResource& AddAdditionalInfo(Aws::String&& key, Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional information about the resource.</p>
     */
    inline RelatedResource& AddAdditionalInfo(const char* key, Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional information about the resource.</p>
     */
    inline RelatedResource& AddAdditionalInfo(Aws::String&& key, const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional information about the resource.</p>
     */
    inline RelatedResource& AddAdditionalInfo(const char* key, const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, value); return *this; }

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    ResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_additionalInfo;
    bool m_additionalInfoHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
