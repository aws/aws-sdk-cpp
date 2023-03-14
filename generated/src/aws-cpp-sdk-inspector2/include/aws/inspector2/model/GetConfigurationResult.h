/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/EcrConfigurationState.h>
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
namespace Inspector2
{
namespace Model
{
  class GetConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API GetConfigurationResult();
    AWS_INSPECTOR2_API GetConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies how the ECR automated re-scan duration is currently configured for
     * your environment.</p>
     */
    inline const EcrConfigurationState& GetEcrConfiguration() const{ return m_ecrConfiguration; }

    /**
     * <p>Specifies how the ECR automated re-scan duration is currently configured for
     * your environment.</p>
     */
    inline void SetEcrConfiguration(const EcrConfigurationState& value) { m_ecrConfiguration = value; }

    /**
     * <p>Specifies how the ECR automated re-scan duration is currently configured for
     * your environment.</p>
     */
    inline void SetEcrConfiguration(EcrConfigurationState&& value) { m_ecrConfiguration = std::move(value); }

    /**
     * <p>Specifies how the ECR automated re-scan duration is currently configured for
     * your environment.</p>
     */
    inline GetConfigurationResult& WithEcrConfiguration(const EcrConfigurationState& value) { SetEcrConfiguration(value); return *this;}

    /**
     * <p>Specifies how the ECR automated re-scan duration is currently configured for
     * your environment.</p>
     */
    inline GetConfigurationResult& WithEcrConfiguration(EcrConfigurationState&& value) { SetEcrConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EcrConfigurationState m_ecrConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
