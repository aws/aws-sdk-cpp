/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/Experiment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartExperimentResult
  {
  public:
    AWS_FIS_API StartExperimentResult();
    AWS_FIS_API StartExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API StartExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline StartExperimentResult& WithExperiment(const Experiment& value) { SetExperiment(value); return *this;}

    /**
     * <p>Information about the experiment.</p>
     */
    inline StartExperimentResult& WithExperiment(Experiment&& value) { SetExperiment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartExperimentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartExperimentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartExperimentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Experiment m_experiment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
