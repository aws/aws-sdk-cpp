/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The configurations for the Hive job driver.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/Hive">AWS
   * API Reference</a></p>
   */
  class Hive
  {
  public:
    AWS_EMRSERVERLESS_API Hive() = default;
    AWS_EMRSERVERLESS_API Hive(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Hive& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query for the Hive job run.</p>
     */
    inline const Aws::String& GetQuery() const { return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    template<typename QueryT = Aws::String>
    void SetQuery(QueryT&& value) { m_queryHasBeenSet = true; m_query = std::forward<QueryT>(value); }
    template<typename QueryT = Aws::String>
    Hive& WithQuery(QueryT&& value) { SetQuery(std::forward<QueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query file for the Hive job run.</p>
     */
    inline const Aws::String& GetInitQueryFile() const { return m_initQueryFile; }
    inline bool InitQueryFileHasBeenSet() const { return m_initQueryFileHasBeenSet; }
    template<typename InitQueryFileT = Aws::String>
    void SetInitQueryFile(InitQueryFileT&& value) { m_initQueryFileHasBeenSet = true; m_initQueryFile = std::forward<InitQueryFileT>(value); }
    template<typename InitQueryFileT = Aws::String>
    Hive& WithInitQueryFile(InitQueryFileT&& value) { SetInitQueryFile(std::forward<InitQueryFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the Hive job run.</p>
     */
    inline const Aws::String& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::String>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::String>
    Hive& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    Aws::String m_initQueryFile;
    bool m_initQueryFileHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
