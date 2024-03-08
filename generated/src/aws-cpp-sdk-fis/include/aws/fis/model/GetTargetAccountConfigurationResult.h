/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/TargetAccountConfiguration.h>
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
  class GetTargetAccountConfigurationResult
  {
  public:
    AWS_FIS_API GetTargetAccountConfigurationResult();
    AWS_FIS_API GetTargetAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API GetTargetAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the target account configuration.</p>
     */
    inline const TargetAccountConfiguration& GetTargetAccountConfiguration() const{ return m_targetAccountConfiguration; }

    /**
     * <p>Information about the target account configuration.</p>
     */
    inline void SetTargetAccountConfiguration(const TargetAccountConfiguration& value) { m_targetAccountConfiguration = value; }

    /**
     * <p>Information about the target account configuration.</p>
     */
    inline void SetTargetAccountConfiguration(TargetAccountConfiguration&& value) { m_targetAccountConfiguration = std::move(value); }

    /**
     * <p>Information about the target account configuration.</p>
     */
    inline GetTargetAccountConfigurationResult& WithTargetAccountConfiguration(const TargetAccountConfiguration& value) { SetTargetAccountConfiguration(value); return *this;}

    /**
     * <p>Information about the target account configuration.</p>
     */
    inline GetTargetAccountConfigurationResult& WithTargetAccountConfiguration(TargetAccountConfiguration&& value) { SetTargetAccountConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTargetAccountConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTargetAccountConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTargetAccountConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TargetAccountConfiguration m_targetAccountConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
