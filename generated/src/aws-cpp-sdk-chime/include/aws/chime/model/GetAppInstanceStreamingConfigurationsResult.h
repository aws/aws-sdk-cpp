﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/AppInstanceStreamingConfiguration.h>
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
namespace Chime
{
namespace Model
{
  class GetAppInstanceStreamingConfigurationsResult
  {
  public:
    AWS_CHIME_API GetAppInstanceStreamingConfigurationsResult();
    AWS_CHIME_API GetAppInstanceStreamingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetAppInstanceStreamingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The streaming settings.</p>
     */
    inline const Aws::Vector<AppInstanceStreamingConfiguration>& GetAppInstanceStreamingConfigurations() const{ return m_appInstanceStreamingConfigurations; }

    /**
     * <p>The streaming settings.</p>
     */
    inline void SetAppInstanceStreamingConfigurations(const Aws::Vector<AppInstanceStreamingConfiguration>& value) { m_appInstanceStreamingConfigurations = value; }

    /**
     * <p>The streaming settings.</p>
     */
    inline void SetAppInstanceStreamingConfigurations(Aws::Vector<AppInstanceStreamingConfiguration>&& value) { m_appInstanceStreamingConfigurations = std::move(value); }

    /**
     * <p>The streaming settings.</p>
     */
    inline GetAppInstanceStreamingConfigurationsResult& WithAppInstanceStreamingConfigurations(const Aws::Vector<AppInstanceStreamingConfiguration>& value) { SetAppInstanceStreamingConfigurations(value); return *this;}

    /**
     * <p>The streaming settings.</p>
     */
    inline GetAppInstanceStreamingConfigurationsResult& WithAppInstanceStreamingConfigurations(Aws::Vector<AppInstanceStreamingConfiguration>&& value) { SetAppInstanceStreamingConfigurations(std::move(value)); return *this;}

    /**
     * <p>The streaming settings.</p>
     */
    inline GetAppInstanceStreamingConfigurationsResult& AddAppInstanceStreamingConfigurations(const AppInstanceStreamingConfiguration& value) { m_appInstanceStreamingConfigurations.push_back(value); return *this; }

    /**
     * <p>The streaming settings.</p>
     */
    inline GetAppInstanceStreamingConfigurationsResult& AddAppInstanceStreamingConfigurations(AppInstanceStreamingConfiguration&& value) { m_appInstanceStreamingConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAppInstanceStreamingConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAppInstanceStreamingConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAppInstanceStreamingConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AppInstanceStreamingConfiguration> m_appInstanceStreamingConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
