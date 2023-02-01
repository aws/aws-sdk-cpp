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
  class GetExperimentResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API GetExperimentResult();
    AWS_CLOUDWATCHEVIDENTLY_API GetExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API GetExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing the configuration details of the experiment.</p>
     */
    inline const Experiment& GetExperiment() const{ return m_experiment; }

    /**
     * <p>A structure containing the configuration details of the experiment.</p>
     */
    inline void SetExperiment(const Experiment& value) { m_experiment = value; }

    /**
     * <p>A structure containing the configuration details of the experiment.</p>
     */
    inline void SetExperiment(Experiment&& value) { m_experiment = std::move(value); }

    /**
     * <p>A structure containing the configuration details of the experiment.</p>
     */
    inline GetExperimentResult& WithExperiment(const Experiment& value) { SetExperiment(value); return *this;}

    /**
     * <p>A structure containing the configuration details of the experiment.</p>
     */
    inline GetExperimentResult& WithExperiment(Experiment&& value) { SetExperiment(std::move(value)); return *this;}

  private:

    Experiment m_experiment;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
