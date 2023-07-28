/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class GetSourceRepositoryResult
  {
  public:
    AWS_CODECATALYST_API GetSourceRepositoryResult();
    AWS_CODECATALYST_API GetSourceRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetSourceRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline GetSourceRepositoryResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline GetSourceRepositoryResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline GetSourceRepositoryResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline GetSourceRepositoryResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline GetSourceRepositoryResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline GetSourceRepositoryResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The name of the source repository.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the source repository.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the source repository.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the source repository.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the source repository.</p>
     */
    inline GetSourceRepositoryResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the source repository.</p>
     */
    inline GetSourceRepositoryResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the source repository.</p>
     */
    inline GetSourceRepositoryResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the source repository.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the source repository.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the source repository.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the source repository.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the source repository.</p>
     */
    inline GetSourceRepositoryResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the source repository.</p>
     */
    inline GetSourceRepositoryResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the source repository.</p>
     */
    inline GetSourceRepositoryResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline GetSourceRepositoryResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline GetSourceRepositoryResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline GetSourceRepositoryResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline GetSourceRepositoryResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSourceRepositoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSourceRepositoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSourceRepositoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
