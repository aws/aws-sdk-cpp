/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/EnvironmentState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appconfig/model/Monitor.h>
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
namespace AppConfig
{
namespace Model
{
  class CreateEnvironmentResult
  {
  public:
    AWS_APPCONFIG_API CreateEnvironmentResult();
    AWS_APPCONFIG_API CreateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API CreateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline CreateEnvironmentResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CreateEnvironmentResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateEnvironmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateEnvironmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateEnvironmentResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateEnvironmentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateEnvironmentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEnvironmentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the environment. An environment can be in one of the following
     * states: <code>READY_FOR_DEPLOYMENT</code>, <code>DEPLOYING</code>,
     * <code>ROLLING_BACK</code>, or <code>ROLLED_BACK</code> </p>
     */
    inline const EnvironmentState& GetState() const{ return m_state; }
    inline void SetState(const EnvironmentState& value) { m_state = value; }
    inline void SetState(EnvironmentState&& value) { m_state = std::move(value); }
    inline CreateEnvironmentResult& WithState(const EnvironmentState& value) { SetState(value); return *this;}
    inline CreateEnvironmentResult& WithState(EnvironmentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon CloudWatch alarms monitored during the deployment.</p>
     */
    inline const Aws::Vector<Monitor>& GetMonitors() const{ return m_monitors; }
    inline void SetMonitors(const Aws::Vector<Monitor>& value) { m_monitors = value; }
    inline void SetMonitors(Aws::Vector<Monitor>&& value) { m_monitors = std::move(value); }
    inline CreateEnvironmentResult& WithMonitors(const Aws::Vector<Monitor>& value) { SetMonitors(value); return *this;}
    inline CreateEnvironmentResult& WithMonitors(Aws::Vector<Monitor>&& value) { SetMonitors(std::move(value)); return *this;}
    inline CreateEnvironmentResult& AddMonitors(const Monitor& value) { m_monitors.push_back(value); return *this; }
    inline CreateEnvironmentResult& AddMonitors(Monitor&& value) { m_monitors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    EnvironmentState m_state;

    Aws::Vector<Monitor> m_monitors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
