/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/RoutingCriteria.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/PromptRouterTargetModel.h>
#include <aws/bedrock/model/PromptRouterStatus.h>
#include <aws/bedrock/model/PromptRouterType.h>
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
namespace Bedrock
{
namespace Model
{
  class GetPromptRouterResult
  {
  public:
    AWS_BEDROCK_API GetPromptRouterResult();
    AWS_BEDROCK_API GetPromptRouterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetPromptRouterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The router's name.</p>
     */
    inline const Aws::String& GetPromptRouterName() const{ return m_promptRouterName; }
    inline void SetPromptRouterName(const Aws::String& value) { m_promptRouterName = value; }
    inline void SetPromptRouterName(Aws::String&& value) { m_promptRouterName = std::move(value); }
    inline void SetPromptRouterName(const char* value) { m_promptRouterName.assign(value); }
    inline GetPromptRouterResult& WithPromptRouterName(const Aws::String& value) { SetPromptRouterName(value); return *this;}
    inline GetPromptRouterResult& WithPromptRouterName(Aws::String&& value) { SetPromptRouterName(std::move(value)); return *this;}
    inline GetPromptRouterResult& WithPromptRouterName(const char* value) { SetPromptRouterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's routing criteria.</p>
     */
    inline const RoutingCriteria& GetRoutingCriteria() const{ return m_routingCriteria; }
    inline void SetRoutingCriteria(const RoutingCriteria& value) { m_routingCriteria = value; }
    inline void SetRoutingCriteria(RoutingCriteria&& value) { m_routingCriteria = std::move(value); }
    inline GetPromptRouterResult& WithRoutingCriteria(const RoutingCriteria& value) { SetRoutingCriteria(value); return *this;}
    inline GetPromptRouterResult& WithRoutingCriteria(RoutingCriteria&& value) { SetRoutingCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetPromptRouterResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetPromptRouterResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetPromptRouterResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the router was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetPromptRouterResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetPromptRouterResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the router was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetPromptRouterResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetPromptRouterResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt router's ARN</p>
     */
    inline const Aws::String& GetPromptRouterArn() const{ return m_promptRouterArn; }
    inline void SetPromptRouterArn(const Aws::String& value) { m_promptRouterArn = value; }
    inline void SetPromptRouterArn(Aws::String&& value) { m_promptRouterArn = std::move(value); }
    inline void SetPromptRouterArn(const char* value) { m_promptRouterArn.assign(value); }
    inline GetPromptRouterResult& WithPromptRouterArn(const Aws::String& value) { SetPromptRouterArn(value); return *this;}
    inline GetPromptRouterResult& WithPromptRouterArn(Aws::String&& value) { SetPromptRouterArn(std::move(value)); return *this;}
    inline GetPromptRouterResult& WithPromptRouterArn(const char* value) { SetPromptRouterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's models.</p>
     */
    inline const Aws::Vector<PromptRouterTargetModel>& GetModels() const{ return m_models; }
    inline void SetModels(const Aws::Vector<PromptRouterTargetModel>& value) { m_models = value; }
    inline void SetModels(Aws::Vector<PromptRouterTargetModel>&& value) { m_models = std::move(value); }
    inline GetPromptRouterResult& WithModels(const Aws::Vector<PromptRouterTargetModel>& value) { SetModels(value); return *this;}
    inline GetPromptRouterResult& WithModels(Aws::Vector<PromptRouterTargetModel>&& value) { SetModels(std::move(value)); return *this;}
    inline GetPromptRouterResult& AddModels(const PromptRouterTargetModel& value) { m_models.push_back(value); return *this; }
    inline GetPromptRouterResult& AddModels(PromptRouterTargetModel&& value) { m_models.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The router's fallback model.</p>
     */
    inline const PromptRouterTargetModel& GetFallbackModel() const{ return m_fallbackModel; }
    inline void SetFallbackModel(const PromptRouterTargetModel& value) { m_fallbackModel = value; }
    inline void SetFallbackModel(PromptRouterTargetModel&& value) { m_fallbackModel = std::move(value); }
    inline GetPromptRouterResult& WithFallbackModel(const PromptRouterTargetModel& value) { SetFallbackModel(value); return *this;}
    inline GetPromptRouterResult& WithFallbackModel(PromptRouterTargetModel&& value) { SetFallbackModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's status.</p>
     */
    inline const PromptRouterStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const PromptRouterStatus& value) { m_status = value; }
    inline void SetStatus(PromptRouterStatus&& value) { m_status = std::move(value); }
    inline GetPromptRouterResult& WithStatus(const PromptRouterStatus& value) { SetStatus(value); return *this;}
    inline GetPromptRouterResult& WithStatus(PromptRouterStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The router's type.</p>
     */
    inline const PromptRouterType& GetType() const{ return m_type; }
    inline void SetType(const PromptRouterType& value) { m_type = value; }
    inline void SetType(PromptRouterType&& value) { m_type = std::move(value); }
    inline GetPromptRouterResult& WithType(const PromptRouterType& value) { SetType(value); return *this;}
    inline GetPromptRouterResult& WithType(PromptRouterType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPromptRouterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPromptRouterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPromptRouterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_promptRouterName;

    RoutingCriteria m_routingCriteria;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_promptRouterArn;

    Aws::Vector<PromptRouterTargetModel> m_models;

    PromptRouterTargetModel m_fallbackModel;

    PromptRouterStatus m_status;

    PromptRouterType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
