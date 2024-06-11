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
    AWS_DATAZONE_API ConfigurableEnvironmentAction();
    AWS_DATAZONE_API ConfigurableEnvironmentAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ConfigurableEnvironmentAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication type of a configurable action of a Amazon DataZone
     * environment. </p>
     */
    inline const ConfigurableActionTypeAuthorization& GetAuth() const{ return m_auth; }
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }
    inline void SetAuth(const ConfigurableActionTypeAuthorization& value) { m_authHasBeenSet = true; m_auth = value; }
    inline void SetAuth(ConfigurableActionTypeAuthorization&& value) { m_authHasBeenSet = true; m_auth = std::move(value); }
    inline ConfigurableEnvironmentAction& WithAuth(const ConfigurableActionTypeAuthorization& value) { SetAuth(value); return *this;}
    inline ConfigurableEnvironmentAction& WithAuth(ConfigurableActionTypeAuthorization&& value) { SetAuth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters of a configurable action in a Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<ConfigurableActionParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<ConfigurableActionParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<ConfigurableActionParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline ConfigurableEnvironmentAction& WithParameters(const Aws::Vector<ConfigurableActionParameter>& value) { SetParameters(value); return *this;}
    inline ConfigurableEnvironmentAction& WithParameters(Aws::Vector<ConfigurableActionParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline ConfigurableEnvironmentAction& AddParameters(const ConfigurableActionParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline ConfigurableEnvironmentAction& AddParameters(ConfigurableActionParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of a configurable action in a Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ConfigurableEnvironmentAction& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ConfigurableEnvironmentAction& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ConfigurableEnvironmentAction& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    ConfigurableActionTypeAuthorization m_auth;
    bool m_authHasBeenSet = false;

    Aws::Vector<ConfigurableActionParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
