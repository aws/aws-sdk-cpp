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
    AWS_FIS_API ResolvedTarget();
    AWS_FIS_API ResolvedTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ResolvedTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource type of the target.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ResolvedTarget& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ResolvedTarget& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ResolvedTarget& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }
    inline ResolvedTarget& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}
    inline ResolvedTarget& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}
    inline ResolvedTarget& WithTargetName(const char* value) { SetTargetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the target.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTargetInformation() const{ return m_targetInformation; }
    inline bool TargetInformationHasBeenSet() const { return m_targetInformationHasBeenSet; }
    inline void SetTargetInformation(const Aws::Map<Aws::String, Aws::String>& value) { m_targetInformationHasBeenSet = true; m_targetInformation = value; }
    inline void SetTargetInformation(Aws::Map<Aws::String, Aws::String>&& value) { m_targetInformationHasBeenSet = true; m_targetInformation = std::move(value); }
    inline ResolvedTarget& WithTargetInformation(const Aws::Map<Aws::String, Aws::String>& value) { SetTargetInformation(value); return *this;}
    inline ResolvedTarget& WithTargetInformation(Aws::Map<Aws::String, Aws::String>&& value) { SetTargetInformation(std::move(value)); return *this;}
    inline ResolvedTarget& AddTargetInformation(const Aws::String& key, const Aws::String& value) { m_targetInformationHasBeenSet = true; m_targetInformation.emplace(key, value); return *this; }
    inline ResolvedTarget& AddTargetInformation(Aws::String&& key, const Aws::String& value) { m_targetInformationHasBeenSet = true; m_targetInformation.emplace(std::move(key), value); return *this; }
    inline ResolvedTarget& AddTargetInformation(const Aws::String& key, Aws::String&& value) { m_targetInformationHasBeenSet = true; m_targetInformation.emplace(key, std::move(value)); return *this; }
    inline ResolvedTarget& AddTargetInformation(Aws::String&& key, Aws::String&& value) { m_targetInformationHasBeenSet = true; m_targetInformation.emplace(std::move(key), std::move(value)); return *this; }
    inline ResolvedTarget& AddTargetInformation(const char* key, Aws::String&& value) { m_targetInformationHasBeenSet = true; m_targetInformation.emplace(key, std::move(value)); return *this; }
    inline ResolvedTarget& AddTargetInformation(Aws::String&& key, const char* value) { m_targetInformationHasBeenSet = true; m_targetInformation.emplace(std::move(key), value); return *this; }
    inline ResolvedTarget& AddTargetInformation(const char* key, const char* value) { m_targetInformationHasBeenSet = true; m_targetInformation.emplace(key, value); return *this; }
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
