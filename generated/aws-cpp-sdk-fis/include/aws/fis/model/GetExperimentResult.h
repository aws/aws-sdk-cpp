﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/Experiment.h>
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
namespace FIS
{
namespace Model
{
  class AWS_FIS_API GetExperimentResult
  {
  public:
    GetExperimentResult();
    GetExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the experiment.</p>
     */
    inline const Experiment& GetExperiment() const{ return m_experiment; }

    /**
     * <p>Information about the experiment.</p>
     */
    inline void SetExperiment(const Experiment& value) { m_experiment = value; }

    /**
     * <p>Information about the experiment.</p>
     */
    inline void SetExperiment(Experiment&& value) { m_experiment = std::move(value); }

    /**
     * <p>Information about the experiment.</p>
     */
    inline GetExperimentResult& WithExperiment(const Experiment& value) { SetExperiment(value); return *this;}

    /**
     * <p>Information about the experiment.</p>
     */
    inline GetExperimentResult& WithExperiment(Experiment&& value) { SetExperiment(std::move(value)); return *this;}

  private:

    Experiment m_experiment;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
