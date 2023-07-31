/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The parameters for the SQL type Protected Query.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQuerySQLParameters">AWS
   * API Reference</a></p>
   */
  class ProtectedQuerySQLParameters
  {
  public:
    AWS_CLEANROOMS_API ProtectedQuerySQLParameters();
    AWS_CLEANROOMS_API ProtectedQuerySQLParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQuerySQLParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The query string to be submitted.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The query string to be submitted.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The query string to be submitted.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The query string to be submitted.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The query string to be submitted.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The query string to be submitted.</p>
     */
    inline ProtectedQuerySQLParameters& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The query string to be submitted.</p>
     */
    inline ProtectedQuerySQLParameters& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The query string to be submitted.</p>
     */
    inline ProtectedQuerySQLParameters& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline const Aws::String& GetAnalysisTemplateArn() const{ return m_analysisTemplateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline bool AnalysisTemplateArnHasBeenSet() const { return m_analysisTemplateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline void SetAnalysisTemplateArn(const Aws::String& value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline void SetAnalysisTemplateArn(Aws::String&& value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline void SetAnalysisTemplateArn(const char* value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline ProtectedQuerySQLParameters& WithAnalysisTemplateArn(const Aws::String& value) { SetAnalysisTemplateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline ProtectedQuerySQLParameters& WithAnalysisTemplateArn(Aws::String&& value) { SetAnalysisTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline ProtectedQuerySQLParameters& WithAnalysisTemplateArn(const char* value) { SetAnalysisTemplateArn(value); return *this;}


    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuerySQLParameters& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuerySQLParameters& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuerySQLParameters& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuerySQLParameters& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuerySQLParameters& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuerySQLParameters& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuerySQLParameters& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuerySQLParameters& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuerySQLParameters& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_analysisTemplateArn;
    bool m_analysisTemplateArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
