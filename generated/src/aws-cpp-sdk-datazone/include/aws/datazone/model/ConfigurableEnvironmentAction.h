/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ConfigurableActionTypeAuthorization.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/ConfigurableActionParameter.h>
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
   * <p>The configurable action of a Amazon DataZone environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ConfigurableEnvironmentAction">AWS
   * API Reference</a></p>
   */
  class ConfigurableEnvironmentAction
  {
  public:
    AWS_DATAZONE_API ConfigurableEnvironmentAction() = default;
    AWS_DATAZONE_API ConfigurableEnvironmentAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ConfigurableEnvironmentAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication type of a configurable action of a Amazon DataZone
     * environment. </p>
     */
    inline ConfigurableActionTypeAuthorization GetAuth() const { return m_auth; }
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }
    inline void SetAuth(ConfigurableActionTypeAuthorization value) { m_authHasBeenSet = true; m_auth = value; }
    inline ConfigurableEnvironmentAction& WithAuth(ConfigurableActionTypeAuthorization value) { SetAuth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters of a configurable action in a Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<ConfigurableActionParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<ConfigurableActionParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<ConfigurableActionParameter>>
    ConfigurableEnvironmentAction& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = ConfigurableActionParameter>
    ConfigurableEnvironmentAction& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of a configurable action in a Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ConfigurableEnvironmentAction& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    ConfigurableActionTypeAuthorization m_auth{ConfigurableActionTypeAuthorization::NOT_SET};
    bool m_authHasBeenSet = false;

    Aws::Vector<ConfigurableActionParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
