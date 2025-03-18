/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/Status.h>
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
namespace AmplifyBackend
{
namespace Model
{
  class GetBackendAPIModelsResult
  {
  public:
    AWS_AMPLIFYBACKEND_API GetBackendAPIModelsResult() = default;
    AWS_AMPLIFYBACKEND_API GetBackendAPIModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API GetBackendAPIModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Stringified JSON of the datastore model.</p>
     */
    inline const Aws::String& GetModels() const { return m_models; }
    template<typename ModelsT = Aws::String>
    void SetModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models = std::forward<ModelsT>(value); }
    template<typename ModelsT = Aws::String>
    GetBackendAPIModelsResult& WithModels(ModelsT&& value) { SetModels(std::forward<ModelsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the request.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetBackendAPIModelsResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stringified JSON of the model introspection schema for an existing backend
     * API resource.</p>
     */
    inline const Aws::String& GetModelIntrospectionSchema() const { return m_modelIntrospectionSchema; }
    template<typename ModelIntrospectionSchemaT = Aws::String>
    void SetModelIntrospectionSchema(ModelIntrospectionSchemaT&& value) { m_modelIntrospectionSchemaHasBeenSet = true; m_modelIntrospectionSchema = std::forward<ModelIntrospectionSchemaT>(value); }
    template<typename ModelIntrospectionSchemaT = Aws::String>
    GetBackendAPIModelsResult& WithModelIntrospectionSchema(ModelIntrospectionSchemaT&& value) { SetModelIntrospectionSchema(std::forward<ModelIntrospectionSchemaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBackendAPIModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_models;
    bool m_modelsHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_modelIntrospectionSchema;
    bool m_modelIntrospectionSchemaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
