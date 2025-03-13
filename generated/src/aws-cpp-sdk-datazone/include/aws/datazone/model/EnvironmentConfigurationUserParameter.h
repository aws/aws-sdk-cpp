/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/EnvironmentParameter.h>
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
   * <p>The environment configuration user parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentConfigurationUserParameter">AWS
   * API Reference</a></p>
   */
  class EnvironmentConfigurationUserParameter
  {
  public:
    AWS_DATAZONE_API EnvironmentConfigurationUserParameter();
    AWS_DATAZONE_API EnvironmentConfigurationUserParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentConfigurationUserParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment configuration name.</p>
     */
    inline const Aws::String& GetEnvironmentConfigurationName() const{ return m_environmentConfigurationName; }
    inline bool EnvironmentConfigurationNameHasBeenSet() const { return m_environmentConfigurationNameHasBeenSet; }
    inline void SetEnvironmentConfigurationName(const Aws::String& value) { m_environmentConfigurationNameHasBeenSet = true; m_environmentConfigurationName = value; }
    inline void SetEnvironmentConfigurationName(Aws::String&& value) { m_environmentConfigurationNameHasBeenSet = true; m_environmentConfigurationName = std::move(value); }
    inline void SetEnvironmentConfigurationName(const char* value) { m_environmentConfigurationNameHasBeenSet = true; m_environmentConfigurationName.assign(value); }
    inline EnvironmentConfigurationUserParameter& WithEnvironmentConfigurationName(const Aws::String& value) { SetEnvironmentConfigurationName(value); return *this;}
    inline EnvironmentConfigurationUserParameter& WithEnvironmentConfigurationName(Aws::String&& value) { SetEnvironmentConfigurationName(std::move(value)); return *this;}
    inline EnvironmentConfigurationUserParameter& WithEnvironmentConfigurationName(const char* value) { SetEnvironmentConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline EnvironmentConfigurationUserParameter& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline EnvironmentConfigurationUserParameter& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline EnvironmentConfigurationUserParameter& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment parameters.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetEnvironmentParameters() const{ return m_environmentParameters; }
    inline bool EnvironmentParametersHasBeenSet() const { return m_environmentParametersHasBeenSet; }
    inline void SetEnvironmentParameters(const Aws::Vector<EnvironmentParameter>& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters = value; }
    inline void SetEnvironmentParameters(Aws::Vector<EnvironmentParameter>&& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters = std::move(value); }
    inline EnvironmentConfigurationUserParameter& WithEnvironmentParameters(const Aws::Vector<EnvironmentParameter>& value) { SetEnvironmentParameters(value); return *this;}
    inline EnvironmentConfigurationUserParameter& WithEnvironmentParameters(Aws::Vector<EnvironmentParameter>&& value) { SetEnvironmentParameters(std::move(value)); return *this;}
    inline EnvironmentConfigurationUserParameter& AddEnvironmentParameters(const EnvironmentParameter& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters.push_back(value); return *this; }
    inline EnvironmentConfigurationUserParameter& AddEnvironmentParameters(EnvironmentParameter&& value) { m_environmentParametersHasBeenSet = true; m_environmentParameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_environmentConfigurationName;
    bool m_environmentConfigurationNameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Vector<EnvironmentParameter> m_environmentParameters;
    bool m_environmentParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
