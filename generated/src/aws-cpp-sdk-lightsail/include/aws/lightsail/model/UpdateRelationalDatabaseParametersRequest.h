/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/RelationalDatabaseParameter.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class UpdateRelationalDatabaseParametersRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API UpdateRelationalDatabaseParametersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRelationalDatabaseParameters"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your database for which to update parameters.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const { return m_relationalDatabaseName; }
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }
    template<typename RelationalDatabaseNameT = Aws::String>
    void SetRelationalDatabaseName(RelationalDatabaseNameT&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::forward<RelationalDatabaseNameT>(value); }
    template<typename RelationalDatabaseNameT = Aws::String>
    UpdateRelationalDatabaseParametersRequest& WithRelationalDatabaseName(RelationalDatabaseNameT&& value) { SetRelationalDatabaseName(std::forward<RelationalDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database parameters to update.</p>
     */
    inline const Aws::Vector<RelationalDatabaseParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<RelationalDatabaseParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<RelationalDatabaseParameter>>
    UpdateRelationalDatabaseParametersRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = RelationalDatabaseParameter>
    UpdateRelationalDatabaseParametersRequest& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    Aws::Vector<RelationalDatabaseParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
