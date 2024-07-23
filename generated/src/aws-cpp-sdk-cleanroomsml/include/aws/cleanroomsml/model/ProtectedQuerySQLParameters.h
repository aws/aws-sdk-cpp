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
    AWS_CLEANROOMSML_API ProtectedQuerySQLParameters();
    AWS_CLEANROOMSML_API ProtectedQuerySQLParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ProtectedQuerySQLParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query string to be submitted.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline ProtectedQuerySQLParameters& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline ProtectedQuerySQLParameters& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline ProtectedQuerySQLParameters& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline const Aws::String& GetAnalysisTemplateArn() const{ return m_analysisTemplateArn; }
    inline bool AnalysisTemplateArnHasBeenSet() const { return m_analysisTemplateArnHasBeenSet; }
    inline void SetAnalysisTemplateArn(const Aws::String& value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn = value; }
    inline void SetAnalysisTemplateArn(Aws::String&& value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn = std::move(value); }
    inline void SetAnalysisTemplateArn(const char* value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn.assign(value); }
    inline ProtectedQuerySQLParameters& WithAnalysisTemplateArn(const Aws::String& value) { SetAnalysisTemplateArn(value); return *this;}
    inline ProtectedQuerySQLParameters& WithAnalysisTemplateArn(Aws::String&& value) { SetAnalysisTemplateArn(std::move(value)); return *this;}
    inline ProtectedQuerySQLParameters& WithAnalysisTemplateArn(const char* value) { SetAnalysisTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline ProtectedQuerySQLParameters& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline ProtectedQuerySQLParameters& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline ProtectedQuerySQLParameters& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline ProtectedQuerySQLParameters& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline ProtectedQuerySQLParameters& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline ProtectedQuerySQLParameters& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline ProtectedQuerySQLParameters& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline ProtectedQuerySQLParameters& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline ProtectedQuerySQLParameters& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
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
