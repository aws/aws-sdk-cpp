/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EMRContainers
{
namespace Model
{
  class CreateJobTemplateResult
  {
  public:
    AWS_EMRCONTAINERS_API CreateJobTemplateResult();
    AWS_EMRCONTAINERS_API CreateJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API CreateJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This output display the created job template ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>This output display the created job template ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>This output display the created job template ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>This output display the created job template ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>This output display the created job template ID.</p>
     */
    inline CreateJobTemplateResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>This output display the created job template ID.</p>
     */
    inline CreateJobTemplateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>This output display the created job template ID.</p>
     */
    inline CreateJobTemplateResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>This output displays the name of the created job template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>This output displays the name of the created job template.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>This output displays the name of the created job template.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>This output displays the name of the created job template.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>This output displays the name of the created job template.</p>
     */
    inline CreateJobTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>This output displays the name of the created job template.</p>
     */
    inline CreateJobTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>This output displays the name of the created job template.</p>
     */
    inline CreateJobTemplateResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>This output display the ARN of the created job template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>This output display the ARN of the created job template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>This output display the ARN of the created job template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>This output display the ARN of the created job template.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>This output display the ARN of the created job template.</p>
     */
    inline CreateJobTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>This output display the ARN of the created job template.</p>
     */
    inline CreateJobTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>This output display the ARN of the created job template.</p>
     */
    inline CreateJobTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>This output displays the date and time when the job template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>This output displays the date and time when the job template was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>This output displays the date and time when the job template was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>This output displays the date and time when the job template was created.</p>
     */
    inline CreateJobTemplateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>This output displays the date and time when the job template was created.</p>
     */
    inline CreateJobTemplateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
