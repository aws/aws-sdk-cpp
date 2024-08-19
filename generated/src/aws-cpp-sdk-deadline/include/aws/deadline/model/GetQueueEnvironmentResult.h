/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/EnvironmentTemplateType.h>
#include <aws/core/utils/DateTime.h>
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


    ///@{
    /**
     * <p>The queue environment ID.</p>
     */
    inline const Aws::String& GetQueueEnvironmentId() const{ return m_queueEnvironmentId; }
    inline void SetQueueEnvironmentId(const Aws::String& value) { m_queueEnvironmentId = value; }
    inline void SetQueueEnvironmentId(Aws::String&& value) { m_queueEnvironmentId = std::move(value); }
    inline void SetQueueEnvironmentId(const char* value) { m_queueEnvironmentId.assign(value); }
    inline GetQueueEnvironmentResult& WithQueueEnvironmentId(const Aws::String& value) { SetQueueEnvironmentId(value); return *this;}
    inline GetQueueEnvironmentResult& WithQueueEnvironmentId(Aws::String&& value) { SetQueueEnvironmentId(std::move(value)); return *this;}
    inline GetQueueEnvironmentResult& WithQueueEnvironmentId(const char* value) { SetQueueEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the queue environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetQueueEnvironmentResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetQueueEnvironmentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetQueueEnvironmentResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the queue environment.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline void SetPriority(int value) { m_priority = value; }
    inline GetQueueEnvironmentResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of template for the queue environment.</p>
     */
    inline const EnvironmentTemplateType& GetTemplateType() const{ return m_templateType; }
    inline void SetTemplateType(const EnvironmentTemplateType& value) { m_templateType = value; }
    inline void SetTemplateType(EnvironmentTemplateType&& value) { m_templateType = std::move(value); }
    inline GetQueueEnvironmentResult& WithTemplateType(const EnvironmentTemplateType& value) { SetTemplateType(value); return *this;}
    inline GetQueueEnvironmentResult& WithTemplateType(EnvironmentTemplateType&& value) { SetTemplateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the queue environment.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }
    inline void SetTemplate(const Aws::String& value) { m_template = value; }
    inline void SetTemplate(Aws::String&& value) { m_template = std::move(value); }
    inline void SetTemplate(const char* value) { m_template.assign(value); }
    inline GetQueueEnvironmentResult& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}
    inline GetQueueEnvironmentResult& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}
    inline GetQueueEnvironmentResult& WithTemplate(const char* value) { SetTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetQueueEnvironmentResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetQueueEnvironmentResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.&gt;</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetQueueEnvironmentResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetQueueEnvironmentResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetQueueEnvironmentResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetQueueEnvironmentResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetQueueEnvironmentResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetQueueEnvironmentResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetQueueEnvironmentResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetQueueEnvironmentResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueueEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueueEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueueEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_queueEnvironmentId;

    Aws::String m_name;

    int m_priority;

    EnvironmentTemplateType m_templateType;

    Aws::String m_template;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
