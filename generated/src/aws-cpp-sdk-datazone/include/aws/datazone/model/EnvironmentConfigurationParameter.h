/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The environment configuration parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentConfigurationParameter">AWS
   * API Reference</a></p>
   */
  class EnvironmentConfigurationParameter
  {
  public:
    AWS_DATAZONE_API EnvironmentConfigurationParameter();
    AWS_DATAZONE_API EnvironmentConfigurationParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentConfigurationParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the environment parameter is editable.</p>
     */
    inline bool GetIsEditable() const{ return m_isEditable; }
    inline bool IsEditableHasBeenSet() const { return m_isEditableHasBeenSet; }
    inline void SetIsEditable(bool value) { m_isEditableHasBeenSet = true; m_isEditable = value; }
    inline EnvironmentConfigurationParameter& WithIsEditable(bool value) { SetIsEditable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment configuration parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EnvironmentConfigurationParameter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EnvironmentConfigurationParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EnvironmentConfigurationParameter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the environment configuration parameter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline EnvironmentConfigurationParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline EnvironmentConfigurationParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline EnvironmentConfigurationParameter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    bool m_isEditable;
    bool m_isEditableHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
