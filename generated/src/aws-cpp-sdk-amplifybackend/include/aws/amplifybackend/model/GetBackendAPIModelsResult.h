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
    AWS_AMPLIFYBACKEND_API GetBackendAPIModelsResult();
    AWS_AMPLIFYBACKEND_API GetBackendAPIModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API GetBackendAPIModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Stringified JSON of the datastore model.</p>
     */
    inline const Aws::String& GetModels() const{ return m_models; }

    /**
     * <p>Stringified JSON of the datastore model.</p>
     */
    inline void SetModels(const Aws::String& value) { m_models = value; }

    /**
     * <p>Stringified JSON of the datastore model.</p>
     */
    inline void SetModels(Aws::String&& value) { m_models = std::move(value); }

    /**
     * <p>Stringified JSON of the datastore model.</p>
     */
    inline void SetModels(const char* value) { m_models.assign(value); }

    /**
     * <p>Stringified JSON of the datastore model.</p>
     */
    inline GetBackendAPIModelsResult& WithModels(const Aws::String& value) { SetModels(value); return *this;}

    /**
     * <p>Stringified JSON of the datastore model.</p>
     */
    inline GetBackendAPIModelsResult& WithModels(Aws::String&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>Stringified JSON of the datastore model.</p>
     */
    inline GetBackendAPIModelsResult& WithModels(const char* value) { SetModels(value); return *this;}


    /**
     * <p>The current status of the request.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the request.</p>
     */
    inline GetBackendAPIModelsResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the request.</p>
     */
    inline GetBackendAPIModelsResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Stringified JSON of the model introspection schema for an existing backend
     * API resource.</p>
     */
    inline const Aws::String& GetModelIntrospectionSchema() const{ return m_modelIntrospectionSchema; }

    /**
     * <p>Stringified JSON of the model introspection schema for an existing backend
     * API resource.</p>
     */
    inline void SetModelIntrospectionSchema(const Aws::String& value) { m_modelIntrospectionSchema = value; }

    /**
     * <p>Stringified JSON of the model introspection schema for an existing backend
     * API resource.</p>
     */
    inline void SetModelIntrospectionSchema(Aws::String&& value) { m_modelIntrospectionSchema = std::move(value); }

    /**
     * <p>Stringified JSON of the model introspection schema for an existing backend
     * API resource.</p>
     */
    inline void SetModelIntrospectionSchema(const char* value) { m_modelIntrospectionSchema.assign(value); }

    /**
     * <p>Stringified JSON of the model introspection schema for an existing backend
     * API resource.</p>
     */
    inline GetBackendAPIModelsResult& WithModelIntrospectionSchema(const Aws::String& value) { SetModelIntrospectionSchema(value); return *this;}

    /**
     * <p>Stringified JSON of the model introspection schema for an existing backend
     * API resource.</p>
     */
    inline GetBackendAPIModelsResult& WithModelIntrospectionSchema(Aws::String&& value) { SetModelIntrospectionSchema(std::move(value)); return *this;}

    /**
     * <p>Stringified JSON of the model introspection schema for an existing backend
     * API resource.</p>
     */
    inline GetBackendAPIModelsResult& WithModelIntrospectionSchema(const char* value) { SetModelIntrospectionSchema(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetBackendAPIModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetBackendAPIModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetBackendAPIModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_models;

    Status m_status;

    Aws::String m_modelIntrospectionSchema;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
