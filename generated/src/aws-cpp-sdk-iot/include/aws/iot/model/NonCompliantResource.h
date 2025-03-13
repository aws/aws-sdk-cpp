/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about the resource that was noncompliant with the audit
   * check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/NonCompliantResource">AWS
   * API Reference</a></p>
   */
  class NonCompliantResource
  {
  public:
    AWS_IOT_API NonCompliantResource() = default;
    AWS_IOT_API NonCompliantResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API NonCompliantResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the noncompliant resource.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline NonCompliantResource& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that identifies the noncompliant resource.</p>
     */
    inline const ResourceIdentifier& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = ResourceIdentifier>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = ResourceIdentifier>
    NonCompliantResource& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Other information about the noncompliant resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalInfo() const { return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    template<typename AdditionalInfoT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalInfo(AdditionalInfoT&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::forward<AdditionalInfoT>(value); }
    template<typename AdditionalInfoT = Aws::Map<Aws::String, Aws::String>>
    NonCompliantResource& WithAdditionalInfo(AdditionalInfoT&& value) { SetAdditionalInfo(std::forward<AdditionalInfoT>(value)); return *this;}
    template<typename AdditionalInfoKeyT = Aws::String, typename AdditionalInfoValueT = Aws::String>
    NonCompliantResource& AddAdditionalInfo(AdditionalInfoKeyT&& key, AdditionalInfoValueT&& value) {
      m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::forward<AdditionalInfoKeyT>(key), std::forward<AdditionalInfoValueT>(value)); return *this;
    }
    ///@}
  private:

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    ResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
