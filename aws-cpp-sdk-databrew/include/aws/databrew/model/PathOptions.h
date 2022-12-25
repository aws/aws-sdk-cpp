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
    AWS_GLUEDATABREW_API PathOptions();
    AWS_GLUEDATABREW_API PathOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API PathOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If provided, this structure defines a date range for matching Amazon S3
     * objects based on their LastModifiedDate attribute in Amazon S3.</p>
     */
    inline const FilterExpression& GetLastModifiedDateCondition() const{ return m_lastModifiedDateCondition; }

    /**
     * <p>If provided, this structure defines a date range for matching Amazon S3
     * objects based on their LastModifiedDate attribute in Amazon S3.</p>
     */
    inline bool LastModifiedDateConditionHasBeenSet() const { return m_lastModifiedDateConditionHasBeenSet; }

    /**
     * <p>If provided, this structure defines a date range for matching Amazon S3
     * objects based on their LastModifiedDate attribute in Amazon S3.</p>
     */
    inline void SetLastModifiedDateCondition(const FilterExpression& value) { m_lastModifiedDateConditionHasBeenSet = true; m_lastModifiedDateCondition = value; }

    /**
     * <p>If provided, this structure defines a date range for matching Amazon S3
     * objects based on their LastModifiedDate attribute in Amazon S3.</p>
     */
    inline void SetLastModifiedDateCondition(FilterExpression&& value) { m_lastModifiedDateConditionHasBeenSet = true; m_lastModifiedDateCondition = std::move(value); }

    /**
     * <p>If provided, this structure defines a date range for matching Amazon S3
     * objects based on their LastModifiedDate attribute in Amazon S3.</p>
     */
    inline PathOptions& WithLastModifiedDateCondition(const FilterExpression& value) { SetLastModifiedDateCondition(value); return *this;}

    /**
     * <p>If provided, this structure defines a date range for matching Amazon S3
     * objects based on their LastModifiedDate attribute in Amazon S3.</p>
     */
    inline PathOptions& WithLastModifiedDateCondition(FilterExpression&& value) { SetLastModifiedDateCondition(std::move(value)); return *this;}


    /**
     * <p>If provided, this structure imposes a limit on a number of files that should
     * be selected.</p>
     */
    inline const FilesLimit& GetFilesLimit() const{ return m_filesLimit; }

    /**
     * <p>If provided, this structure imposes a limit on a number of files that should
     * be selected.</p>
     */
    inline bool FilesLimitHasBeenSet() const { return m_filesLimitHasBeenSet; }

    /**
     * <p>If provided, this structure imposes a limit on a number of files that should
     * be selected.</p>
     */
    inline void SetFilesLimit(const FilesLimit& value) { m_filesLimitHasBeenSet = true; m_filesLimit = value; }

    /**
     * <p>If provided, this structure imposes a limit on a number of files that should
     * be selected.</p>
     */
    inline void SetFilesLimit(FilesLimit&& value) { m_filesLimitHasBeenSet = true; m_filesLimit = std::move(value); }

    /**
     * <p>If provided, this structure imposes a limit on a number of files that should
     * be selected.</p>
     */
    inline PathOptions& WithFilesLimit(const FilesLimit& value) { SetFilesLimit(value); return *this;}

    /**
     * <p>If provided, this structure imposes a limit on a number of files that should
     * be selected.</p>
     */
    inline PathOptions& WithFilesLimit(FilesLimit&& value) { SetFilesLimit(std::move(value)); return *this;}


    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline const Aws::Map<Aws::String, DatasetParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, DatasetParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, DatasetParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline PathOptions& WithParameters(const Aws::Map<Aws::String, DatasetParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline PathOptions& WithParameters(Aws::Map<Aws::String, DatasetParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline PathOptions& AddParameters(const Aws::String& key, const DatasetParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline PathOptions& AddParameters(Aws::String&& key, const DatasetParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline PathOptions& AddParameters(const Aws::String& key, DatasetParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline PathOptions& AddParameters(Aws::String&& key, DatasetParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline PathOptions& AddParameters(const char* key, DatasetParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A structure that maps names of parameters used in the Amazon S3 path of a
     * dataset to their definitions.</p>
     */
    inline PathOptions& AddParameters(const char* key, const DatasetParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

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
