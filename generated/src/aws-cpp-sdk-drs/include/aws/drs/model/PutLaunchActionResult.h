/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LaunchActionCategory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/drs/model/LaunchActionType.h>
#include <aws/drs/model/LaunchActionParameter.h>
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
namespace drs
{
namespace Model
{
  class PutLaunchActionResult
  {
  public:
    AWS_DRS_API PutLaunchActionResult();
    AWS_DRS_API PutLaunchActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API PutLaunchActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Launch action code.</p>
     */
    inline const Aws::String& GetActionCode() const{ return m_actionCode; }

    /**
     * <p>Launch action code.</p>
     */
    inline void SetActionCode(const Aws::String& value) { m_actionCode = value; }

    /**
     * <p>Launch action code.</p>
     */
    inline void SetActionCode(Aws::String&& value) { m_actionCode = std::move(value); }

    /**
     * <p>Launch action code.</p>
     */
    inline void SetActionCode(const char* value) { m_actionCode.assign(value); }

    /**
     * <p>Launch action code.</p>
     */
    inline PutLaunchActionResult& WithActionCode(const Aws::String& value) { SetActionCode(value); return *this;}

    /**
     * <p>Launch action code.</p>
     */
    inline PutLaunchActionResult& WithActionCode(Aws::String&& value) { SetActionCode(std::move(value)); return *this;}

    /**
     * <p>Launch action code.</p>
     */
    inline PutLaunchActionResult& WithActionCode(const char* value) { SetActionCode(value); return *this;}


    
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    
    inline void SetActionId(const Aws::String& value) { m_actionId = value; }

    
    inline void SetActionId(Aws::String&& value) { m_actionId = std::move(value); }

    
    inline void SetActionId(const char* value) { m_actionId.assign(value); }

    
    inline PutLaunchActionResult& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    
    inline PutLaunchActionResult& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    
    inline PutLaunchActionResult& WithActionId(const char* value) { SetActionId(value); return *this;}


    
    inline const Aws::String& GetActionVersion() const{ return m_actionVersion; }

    
    inline void SetActionVersion(const Aws::String& value) { m_actionVersion = value; }

    
    inline void SetActionVersion(Aws::String&& value) { m_actionVersion = std::move(value); }

    
    inline void SetActionVersion(const char* value) { m_actionVersion.assign(value); }

    
    inline PutLaunchActionResult& WithActionVersion(const Aws::String& value) { SetActionVersion(value); return *this;}

    
    inline PutLaunchActionResult& WithActionVersion(Aws::String&& value) { SetActionVersion(std::move(value)); return *this;}

    
    inline PutLaunchActionResult& WithActionVersion(const char* value) { SetActionVersion(value); return *this;}


    /**
     * <p>Whether the launch action is active.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Whether the launch action is active.</p>
     */
    inline void SetActive(bool value) { m_active = value; }

    /**
     * <p>Whether the launch action is active.</p>
     */
    inline PutLaunchActionResult& WithActive(bool value) { SetActive(value); return *this;}


    
    inline const LaunchActionCategory& GetCategory() const{ return m_category; }

    
    inline void SetCategory(const LaunchActionCategory& value) { m_category = value; }

    
    inline void SetCategory(LaunchActionCategory&& value) { m_category = std::move(value); }

    
    inline PutLaunchActionResult& WithCategory(const LaunchActionCategory& value) { SetCategory(value); return *this;}

    
    inline PutLaunchActionResult& WithCategory(LaunchActionCategory&& value) { SetCategory(std::move(value)); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_description.assign(value); }

    
    inline PutLaunchActionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline PutLaunchActionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline PutLaunchActionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_name.assign(value); }

    
    inline PutLaunchActionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline PutLaunchActionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline PutLaunchActionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Whether the launch will not be marked as failed if this action fails.</p>
     */
    inline bool GetOptional() const{ return m_optional; }

    /**
     * <p>Whether the launch will not be marked as failed if this action fails.</p>
     */
    inline void SetOptional(bool value) { m_optional = value; }

    /**
     * <p>Whether the launch will not be marked as failed if this action fails.</p>
     */
    inline PutLaunchActionResult& WithOptional(bool value) { SetOptional(value); return *this;}


    
    inline int GetOrder() const{ return m_order; }

    
    inline void SetOrder(int value) { m_order = value; }

    
    inline PutLaunchActionResult& WithOrder(int value) { SetOrder(value); return *this;}


    
    inline const Aws::Map<Aws::String, LaunchActionParameter>& GetParameters() const{ return m_parameters; }

    
    inline void SetParameters(const Aws::Map<Aws::String, LaunchActionParameter>& value) { m_parameters = value; }

    
    inline void SetParameters(Aws::Map<Aws::String, LaunchActionParameter>&& value) { m_parameters = std::move(value); }

    
    inline PutLaunchActionResult& WithParameters(const Aws::Map<Aws::String, LaunchActionParameter>& value) { SetParameters(value); return *this;}

    
    inline PutLaunchActionResult& WithParameters(Aws::Map<Aws::String, LaunchActionParameter>&& value) { SetParameters(std::move(value)); return *this;}

    
    inline PutLaunchActionResult& AddParameters(const Aws::String& key, const LaunchActionParameter& value) { m_parameters.emplace(key, value); return *this; }

    
    inline PutLaunchActionResult& AddParameters(Aws::String&& key, const LaunchActionParameter& value) { m_parameters.emplace(std::move(key), value); return *this; }

    
    inline PutLaunchActionResult& AddParameters(const Aws::String& key, LaunchActionParameter&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    
    inline PutLaunchActionResult& AddParameters(Aws::String&& key, LaunchActionParameter&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    
    inline PutLaunchActionResult& AddParameters(const char* key, LaunchActionParameter&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    
    inline PutLaunchActionResult& AddParameters(const char* key, const LaunchActionParameter& value) { m_parameters.emplace(key, value); return *this; }


    
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }

    
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }

    
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }

    
    inline PutLaunchActionResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    
    inline PutLaunchActionResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    
    inline PutLaunchActionResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Launch action type.</p>
     */
    inline const LaunchActionType& GetType() const{ return m_type; }

    /**
     * <p>Launch action type.</p>
     */
    inline void SetType(const LaunchActionType& value) { m_type = value; }

    /**
     * <p>Launch action type.</p>
     */
    inline void SetType(LaunchActionType&& value) { m_type = std::move(value); }

    /**
     * <p>Launch action type.</p>
     */
    inline PutLaunchActionResult& WithType(const LaunchActionType& value) { SetType(value); return *this;}

    /**
     * <p>Launch action type.</p>
     */
    inline PutLaunchActionResult& WithType(LaunchActionType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutLaunchActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutLaunchActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutLaunchActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_actionCode;

    Aws::String m_actionId;

    Aws::String m_actionVersion;

    bool m_active;

    LaunchActionCategory m_category;

    Aws::String m_description;

    Aws::String m_name;

    bool m_optional;

    int m_order;

    Aws::Map<Aws::String, LaunchActionParameter> m_parameters;

    Aws::String m_resourceId;

    LaunchActionType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
