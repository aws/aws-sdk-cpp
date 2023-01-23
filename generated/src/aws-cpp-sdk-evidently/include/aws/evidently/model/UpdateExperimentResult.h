/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/Experiment.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvidently
{
namespace Model
{
  class UpdateExperimentResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API UpdateExperimentResult();
    AWS_CLOUDWATCHEVIDENTLY_API UpdateExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API UpdateExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing the configuration details of the experiment that was
     * updated.</p>
     */
    inline const Experiment& GetExperiment() const{ return m_experiment; }

    /**
     * <p>A structure containing the configuration details of the experiment that was
     * updated.</p>
     */
    inline void SetExperiment(const Experiment& value) { m_experiment = value; }

    /**
     * <p>A structure containing the configuration details of the experiment that was
     * updated.</p>
     */
    inline void SetExperiment(Experiment&& value) { m_experiment = std::move(value); }

    /**
     * <p>A structure containing the configuration details of the experiment that was
     * updated.</p>
     */
    inline UpdateExperimentResult& WithExperiment(const Experiment& value) { SetExperiment(value); return *this;}

    /**
     * <p>A structure containing the configuration details of the experiment that was
     * updated.</p>
     */
    inline UpdateExperimentResult& WithExperiment(Experiment&& value) { SetExperiment(std::move(value)); return *this;}

  private:

    Experiment m_experiment;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
