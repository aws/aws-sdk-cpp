/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/FilterExpression.h>
#include <aws/databrew/model/FilesLimit.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/DatasetParameter.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents a set of options that define how DataBrew selects files for a
   * given Amazon S3 path in a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/PathOptions">AWS
   * API Reference</a></p>
   */
  class PathOptions
  {
  public:
    AWS_GLUEDATABREW_API PathOptions() = default;
    AWS_GLUEDATABREW_API PathOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API PathOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If provided, this structure defines a date range for matching Amazon S3
     * objects based on their LastModifiedDate attribute in Amazon S3.</p>
     */
    inline const FilterExpression& GetLastModifiedDateCondition() const { return m_lastModifiedDateCondition; }
    inline bool LastModifiedDateConditionHasBeenSet() const { return m_lastModifiedDateConditionHasBeenSet; }
    template<typename LastModifiedDateConditionT = FilterExpression>
    void SetLastModifiedDateCondition(LastModifiedDateConditionT&& value) { m_lastModifiedDateConditionHasBeenSet = true; m_lastModifiedDateCondition = std::forward<LastModifiedDateConditionT>(value); }
    template<typename LastModifiedDateConditionT = FilterExpression>
    PathOptions& WithLastModifiedDateCondition(LastModifiedDateConditionT&& value) { SetLastModifiedDateCondition(std::forward<LastModifiedDateConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If provided, this structure imposes a limit on a number of files that should
     * be selected.</p>
     */
    inline const FilesLimit& GetFilesLimit() const { return m_filesLimit; }
    inline bool FilesLimitHasBeenSet() const { return m_filesLimitHasBeenSet; }
    template<typename FilesLimitT = FilesLimit>
    void SetFilesLimit(FilesLimitT&& value) { m_filesLimitHasBeenSet = true; m_filesLimit = std::forward<FilesLimitT>(value); }
    template<typename FilesLimitT = FilesLimit>
    PathOptions& WithFilesLimit(FilesLimitT&& value) { SetFilesLimit(std::forward<FilesLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline const Aws::Map<Aws::String, DatasetParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, DatasetParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, DatasetParameter>>
    PathOptions& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = DatasetParameter>
    PathOptions& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    FilterExpression m_lastModifiedDateCondition;
    bool m_lastModifiedDateConditionHasBeenSet = false;

    FilesLimit m_filesLimit;
    bool m_filesLimitHasBeenSet = false;

    Aws::Map<Aws::String, DatasetParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
