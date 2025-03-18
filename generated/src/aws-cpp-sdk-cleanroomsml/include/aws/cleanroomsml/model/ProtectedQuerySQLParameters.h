/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>The parameters for the SQL type Protected Query.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ProtectedQuerySQLParameters">AWS
   * API Reference</a></p>
   */
  class ProtectedQuerySQLParameters
  {
  public:
    AWS_CLEANROOMSML_API ProtectedQuerySQLParameters() = default;
    AWS_CLEANROOMSML_API ProtectedQuerySQLParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ProtectedQuerySQLParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query string to be submitted.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    ProtectedQuerySQLParameters& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline const Aws::String& GetAnalysisTemplateArn() const { return m_analysisTemplateArn; }
    inline bool AnalysisTemplateArnHasBeenSet() const { return m_analysisTemplateArnHasBeenSet; }
    template<typename AnalysisTemplateArnT = Aws::String>
    void SetAnalysisTemplateArn(AnalysisTemplateArnT&& value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn = std::forward<AnalysisTemplateArnT>(value); }
    template<typename AnalysisTemplateArnT = Aws::String>
    ProtectedQuerySQLParameters& WithAnalysisTemplateArn(AnalysisTemplateArnT&& value) { SetAnalysisTemplateArn(std::forward<AnalysisTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    ProtectedQuerySQLParameters& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    ProtectedQuerySQLParameters& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_analysisTemplateArn;
    bool m_analysisTemplateArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
