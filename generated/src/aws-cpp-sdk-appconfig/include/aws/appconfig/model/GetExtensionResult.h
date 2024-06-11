/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appconfig/model/ActionPoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appconfig/model/Parameter.h>
#include <aws/appconfig/model/Action.h>
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
  class GetExtensionResult
  {
  public:
    AWS_APPCONFIG_API GetExtensionResult();
    AWS_APPCONFIG_API GetExtensionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API GetExtensionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The system-generated ID of the extension.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetExtensionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetExtensionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetExtensionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extension name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetExtensionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetExtensionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetExtensionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extension version number.</p>
     */
    inline int GetVersionNumber() const{ return m_versionNumber; }
    inline void SetVersionNumber(int value) { m_versionNumber = value; }
    inline GetExtensionResult& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetExtensionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetExtensionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetExtensionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the extension.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetExtensionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetExtensionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetExtensionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions defined in the extension.</p>
     */
    inline const Aws::Map<ActionPoint, Aws::Vector<Action>>& GetActions() const{ return m_actions; }
    inline void SetActions(const Aws::Map<ActionPoint, Aws::Vector<Action>>& value) { m_actions = value; }
    inline void SetActions(Aws::Map<ActionPoint, Aws::Vector<Action>>&& value) { m_actions = std::move(value); }
    inline GetExtensionResult& WithActions(const Aws::Map<ActionPoint, Aws::Vector<Action>>& value) { SetActions(value); return *this;}
    inline GetExtensionResult& WithActions(Aws::Map<ActionPoint, Aws::Vector<Action>>&& value) { SetActions(std::move(value)); return *this;}
    inline GetExtensionResult& AddActions(const ActionPoint& key, const Aws::Vector<Action>& value) { m_actions.emplace(key, value); return *this; }
    inline GetExtensionResult& AddActions(ActionPoint&& key, const Aws::Vector<Action>& value) { m_actions.emplace(std::move(key), value); return *this; }
    inline GetExtensionResult& AddActions(const ActionPoint& key, Aws::Vector<Action>&& value) { m_actions.emplace(key, std::move(value)); return *this; }
    inline GetExtensionResult& AddActions(ActionPoint&& key, Aws::Vector<Action>&& value) { m_actions.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline const Aws::Map<Aws::String, Parameter>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Map<Aws::String, Parameter>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Parameter>&& value) { m_parameters = std::move(value); }
    inline GetExtensionResult& WithParameters(const Aws::Map<Aws::String, Parameter>& value) { SetParameters(value); return *this;}
    inline GetExtensionResult& WithParameters(Aws::Map<Aws::String, Parameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline GetExtensionResult& AddParameters(const Aws::String& key, const Parameter& value) { m_parameters.emplace(key, value); return *this; }
    inline GetExtensionResult& AddParameters(Aws::String&& key, const Parameter& value) { m_parameters.emplace(std::move(key), value); return *this; }
    inline GetExtensionResult& AddParameters(const Aws::String& key, Parameter&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline GetExtensionResult& AddParameters(Aws::String&& key, Parameter&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline GetExtensionResult& AddParameters(const char* key, Parameter&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline GetExtensionResult& AddParameters(const char* key, const Parameter& value) { m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetExtensionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetExtensionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetExtensionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    int m_versionNumber;

    Aws::String m_arn;

    Aws::String m_description;

    Aws::Map<ActionPoint, Aws::Vector<Action>> m_actions;

    Aws::Map<Aws::String, Parameter> m_parameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
