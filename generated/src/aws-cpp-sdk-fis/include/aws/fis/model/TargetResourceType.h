/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fis/model/TargetResourceTypeParameter.h>
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
   * <p>Describes a resource type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/TargetResourceType">AWS
   * API Reference</a></p>
   */
  class TargetResourceType
  {
  public:
    AWS_FIS_API TargetResourceType();
    AWS_FIS_API TargetResourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API TargetResourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline TargetResourceType& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline TargetResourceType& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline TargetResourceType& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the resource type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TargetResourceType& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TargetResourceType& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TargetResourceType& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the resource type.</p>
     */
    inline const Aws::Map<Aws::String, TargetResourceTypeParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, TargetResourceTypeParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, TargetResourceTypeParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline TargetResourceType& WithParameters(const Aws::Map<Aws::String, TargetResourceTypeParameter>& value) { SetParameters(value); return *this;}
    inline TargetResourceType& WithParameters(Aws::Map<Aws::String, TargetResourceTypeParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline TargetResourceType& AddParameters(const Aws::String& key, const TargetResourceTypeParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline TargetResourceType& AddParameters(Aws::String&& key, const TargetResourceTypeParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline TargetResourceType& AddParameters(const Aws::String& key, TargetResourceTypeParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TargetResourceType& AddParameters(Aws::String&& key, TargetResourceTypeParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline TargetResourceType& AddParameters(const char* key, TargetResourceTypeParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TargetResourceType& AddParameters(const char* key, const TargetResourceTypeParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, TargetResourceTypeParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
