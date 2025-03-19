/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes a resolved target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ResolvedTarget">AWS
   * API Reference</a></p>
   */
  class ResolvedTarget
  {
  public:
    AWS_FIS_API ResolvedTarget() = default;
    AWS_FIS_API ResolvedTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ResolvedTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource type of the target.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ResolvedTarget& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target.</p>
     */
    inline const Aws::String& GetTargetName() const { return m_targetName; }
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
    template<typename TargetNameT = Aws::String>
    void SetTargetName(TargetNameT&& value) { m_targetNameHasBeenSet = true; m_targetName = std::forward<TargetNameT>(value); }
    template<typename TargetNameT = Aws::String>
    ResolvedTarget& WithTargetName(TargetNameT&& value) { SetTargetName(std::forward<TargetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the target.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTargetInformation() const { return m_targetInformation; }
    inline bool TargetInformationHasBeenSet() const { return m_targetInformationHasBeenSet; }
    template<typename TargetInformationT = Aws::Map<Aws::String, Aws::String>>
    void SetTargetInformation(TargetInformationT&& value) { m_targetInformationHasBeenSet = true; m_targetInformation = std::forward<TargetInformationT>(value); }
    template<typename TargetInformationT = Aws::Map<Aws::String, Aws::String>>
    ResolvedTarget& WithTargetInformation(TargetInformationT&& value) { SetTargetInformation(std::forward<TargetInformationT>(value)); return *this;}
    template<typename TargetInformationKeyT = Aws::String, typename TargetInformationValueT = Aws::String>
    ResolvedTarget& AddTargetInformation(TargetInformationKeyT&& key, TargetInformationValueT&& value) {
      m_targetInformationHasBeenSet = true; m_targetInformation.emplace(std::forward<TargetInformationKeyT>(key), std::forward<TargetInformationValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_targetInformation;
    bool m_targetInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
