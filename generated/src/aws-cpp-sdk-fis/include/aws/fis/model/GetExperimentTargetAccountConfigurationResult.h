/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentTargetAccountConfiguration.h>
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
  class GetExperimentTargetAccountConfigurationResult
  {
  public:
    AWS_FIS_API GetExperimentTargetAccountConfigurationResult();
    AWS_FIS_API GetExperimentTargetAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API GetExperimentTargetAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the target account configuration.</p>
     */
    inline const ExperimentTargetAccountConfiguration& GetTargetAccountConfiguration() const{ return m_targetAccountConfiguration; }

    /**
     * <p>Information about the target account configuration.</p>
     */
    inline void SetTargetAccountConfiguration(const ExperimentTargetAccountConfiguration& value) { m_targetAccountConfiguration = value; }

    /**
     * <p>Information about the target account configuration.</p>
     */
    inline void SetTargetAccountConfiguration(ExperimentTargetAccountConfiguration&& value) { m_targetAccountConfiguration = std::move(value); }

    /**
     * <p>Information about the target account configuration.</p>
     */
    inline GetExperimentTargetAccountConfigurationResult& WithTargetAccountConfiguration(const ExperimentTargetAccountConfiguration& value) { SetTargetAccountConfiguration(value); return *this;}

    /**
     * <p>Information about the target account configuration.</p>
     */
    inline GetExperimentTargetAccountConfigurationResult& WithTargetAccountConfiguration(ExperimentTargetAccountConfiguration&& value) { SetTargetAccountConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetExperimentTargetAccountConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetExperimentTargetAccountConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetExperimentTargetAccountConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ExperimentTargetAccountConfiguration m_targetAccountConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
