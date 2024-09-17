/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ServiceLevelObjective.h>
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
namespace ApplicationSignals
{
namespace Model
{
  class CreateServiceLevelObjectiveResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API CreateServiceLevelObjectiveResult();
    AWS_APPLICATIONSIGNALS_API CreateServiceLevelObjectiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API CreateServiceLevelObjectiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains information about the SLO that you just
     * created.</p>
     */
    inline const ServiceLevelObjective& GetSlo() const{ return m_slo; }
    inline void SetSlo(const ServiceLevelObjective& value) { m_slo = value; }
    inline void SetSlo(ServiceLevelObjective&& value) { m_slo = std::move(value); }
    inline CreateServiceLevelObjectiveResult& WithSlo(const ServiceLevelObjective& value) { SetSlo(value); return *this;}
    inline CreateServiceLevelObjectiveResult& WithSlo(ServiceLevelObjective&& value) { SetSlo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateServiceLevelObjectiveResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateServiceLevelObjectiveResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateServiceLevelObjectiveResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ServiceLevelObjective m_slo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
