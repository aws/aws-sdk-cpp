/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/EnvironmentTemplateType.h>
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
namespace deadline
{
namespace Model
{
  class GetQueueEnvironmentResult
  {
  public:
    AWS_DEADLINE_API GetQueueEnvironmentResult();
    AWS_DEADLINE_API GetQueueEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetQueueEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetQueueEnvironmentResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetQueueEnvironmentResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that created this resource.&gt;</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user or system that created this resource.&gt;</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The user or system that created this resource.&gt;</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The user or system that created this resource.&gt;</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The user or system that created this resource.&gt;</p>
     */
    inline GetQueueEnvironmentResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.&gt;</p>
     */
    inline GetQueueEnvironmentResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.&gt;</p>
     */
    inline GetQueueEnvironmentResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The name of the queue environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the queue environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the queue environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the queue environment.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the queue environment.</p>
     */
    inline GetQueueEnvironmentResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the queue environment.</p>
     */
    inline GetQueueEnvironmentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the queue environment.</p>
     */
    inline GetQueueEnvironmentResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The priority of the queue environment.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the queue environment.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>The priority of the queue environment.</p>
     */
    inline GetQueueEnvironmentResult& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The queue environment ID.</p>
     */
    inline const Aws::String& GetQueueEnvironmentId() const{ return m_queueEnvironmentId; }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(const Aws::String& value) { m_queueEnvironmentId = value; }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(Aws::String&& value) { m_queueEnvironmentId = std::move(value); }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(const char* value) { m_queueEnvironmentId.assign(value); }

    /**
     * <p>The queue environment ID.</p>
     */
    inline GetQueueEnvironmentResult& WithQueueEnvironmentId(const Aws::String& value) { SetQueueEnvironmentId(value); return *this;}

    /**
     * <p>The queue environment ID.</p>
     */
    inline GetQueueEnvironmentResult& WithQueueEnvironmentId(Aws::String&& value) { SetQueueEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The queue environment ID.</p>
     */
    inline GetQueueEnvironmentResult& WithQueueEnvironmentId(const char* value) { SetQueueEnvironmentId(value); return *this;}


    /**
     * <p>The template for the queue environment.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The template for the queue environment.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_template = value; }

    /**
     * <p>The template for the queue environment.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_template = std::move(value); }

    /**
     * <p>The template for the queue environment.</p>
     */
    inline void SetTemplate(const char* value) { m_template.assign(value); }

    /**
     * <p>The template for the queue environment.</p>
     */
    inline GetQueueEnvironmentResult& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The template for the queue environment.</p>
     */
    inline GetQueueEnvironmentResult& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The template for the queue environment.</p>
     */
    inline GetQueueEnvironmentResult& WithTemplate(const char* value) { SetTemplate(value); return *this;}


    /**
     * <p>The type of template for the queue environment.</p>
     */
    inline const EnvironmentTemplateType& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The type of template for the queue environment.</p>
     */
    inline void SetTemplateType(const EnvironmentTemplateType& value) { m_templateType = value; }

    /**
     * <p>The type of template for the queue environment.</p>
     */
    inline void SetTemplateType(EnvironmentTemplateType&& value) { m_templateType = std::move(value); }

    /**
     * <p>The type of template for the queue environment.</p>
     */
    inline GetQueueEnvironmentResult& WithTemplateType(const EnvironmentTemplateType& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The type of template for the queue environment.</p>
     */
    inline GetQueueEnvironmentResult& WithTemplateType(EnvironmentTemplateType&& value) { SetTemplateType(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetQueueEnvironmentResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetQueueEnvironmentResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetQueueEnvironmentResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetQueueEnvironmentResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetQueueEnvironmentResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetQueueEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetQueueEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetQueueEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_name;

    int m_priority;

    Aws::String m_queueEnvironmentId;

    Aws::String m_template;

    EnvironmentTemplateType m_templateType;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
