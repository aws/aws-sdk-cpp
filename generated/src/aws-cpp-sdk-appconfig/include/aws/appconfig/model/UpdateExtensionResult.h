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
  class UpdateExtensionResult
  {
  public:
    AWS_APPCONFIG_API UpdateExtensionResult();
    AWS_APPCONFIG_API UpdateExtensionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API UpdateExtensionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The system-generated ID of the extension.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated ID of the extension.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The system-generated ID of the extension.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The system-generated ID of the extension.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The system-generated ID of the extension.</p>
     */
    inline UpdateExtensionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated ID of the extension.</p>
     */
    inline UpdateExtensionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the extension.</p>
     */
    inline UpdateExtensionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The extension name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The extension name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The extension name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The extension name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The extension name.</p>
     */
    inline UpdateExtensionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The extension name.</p>
     */
    inline UpdateExtensionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The extension name.</p>
     */
    inline UpdateExtensionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The extension version number.</p>
     */
    inline int GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The extension version number.</p>
     */
    inline void SetVersionNumber(int value) { m_versionNumber = value; }

    /**
     * <p>The extension version number.</p>
     */
    inline UpdateExtensionResult& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}


    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline UpdateExtensionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline UpdateExtensionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The system-generated Amazon Resource Name (ARN) for the extension.</p>
     */
    inline UpdateExtensionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Information about the extension.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Information about the extension.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Information about the extension.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Information about the extension.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Information about the extension.</p>
     */
    inline UpdateExtensionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the extension.</p>
     */
    inline UpdateExtensionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Information about the extension.</p>
     */
    inline UpdateExtensionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The actions defined in the extension.</p>
     */
    inline const Aws::Map<ActionPoint, Aws::Vector<Action>>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline void SetActions(const Aws::Map<ActionPoint, Aws::Vector<Action>>& value) { m_actions = value; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline void SetActions(Aws::Map<ActionPoint, Aws::Vector<Action>>&& value) { m_actions = std::move(value); }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline UpdateExtensionResult& WithActions(const Aws::Map<ActionPoint, Aws::Vector<Action>>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline UpdateExtensionResult& WithActions(Aws::Map<ActionPoint, Aws::Vector<Action>>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline UpdateExtensionResult& AddActions(const ActionPoint& key, const Aws::Vector<Action>& value) { m_actions.emplace(key, value); return *this; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline UpdateExtensionResult& AddActions(ActionPoint&& key, const Aws::Vector<Action>& value) { m_actions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline UpdateExtensionResult& AddActions(const ActionPoint& key, Aws::Vector<Action>&& value) { m_actions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline UpdateExtensionResult& AddActions(ActionPoint&& key, Aws::Vector<Action>&& value) { m_actions.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline const Aws::Map<Aws::String, Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Parameter>& value) { m_parameters = value; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Parameter>&& value) { m_parameters = std::move(value); }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline UpdateExtensionResult& WithParameters(const Aws::Map<Aws::String, Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline UpdateExtensionResult& WithParameters(Aws::Map<Aws::String, Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline UpdateExtensionResult& AddParameters(const Aws::String& key, const Parameter& value) { m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline UpdateExtensionResult& AddParameters(Aws::String&& key, const Parameter& value) { m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline UpdateExtensionResult& AddParameters(const Aws::String& key, Parameter&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline UpdateExtensionResult& AddParameters(Aws::String&& key, Parameter&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline UpdateExtensionResult& AddParameters(const char* key, Parameter&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline UpdateExtensionResult& AddParameters(const char* key, const Parameter& value) { m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_id;

    Aws::String m_name;

    int m_versionNumber;

    Aws::String m_arn;

    Aws::String m_description;

    Aws::Map<ActionPoint, Aws::Vector<Action>> m_actions;

    Aws::Map<Aws::String, Parameter> m_parameters;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
