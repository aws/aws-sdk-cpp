﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/ApplicationVersionLifecycle.h>
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
namespace MainframeModernization
{
namespace Model
{
  class GetApplicationVersionResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationVersionResult();
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The specific version of the application.</p>
     */
    inline int GetApplicationVersion() const{ return m_applicationVersion; }
    inline void SetApplicationVersion(int value) { m_applicationVersion = value; }
    inline GetApplicationVersionResult& WithApplicationVersion(int value) { SetApplicationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the application version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetApplicationVersionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetApplicationVersionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the application definition. This is a JSON object that
     * contains the resource configuration and definitions that identify an
     * application.</p>
     */
    inline const Aws::String& GetDefinitionContent() const{ return m_definitionContent; }
    inline void SetDefinitionContent(const Aws::String& value) { m_definitionContent = value; }
    inline void SetDefinitionContent(Aws::String&& value) { m_definitionContent = std::move(value); }
    inline void SetDefinitionContent(const char* value) { m_definitionContent.assign(value); }
    inline GetApplicationVersionResult& WithDefinitionContent(const Aws::String& value) { SetDefinitionContent(value); return *this;}
    inline GetApplicationVersionResult& WithDefinitionContent(Aws::String&& value) { SetDefinitionContent(std::move(value)); return *this;}
    inline GetApplicationVersionResult& WithDefinitionContent(const char* value) { SetDefinitionContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetApplicationVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetApplicationVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetApplicationVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application version.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetApplicationVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetApplicationVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetApplicationVersionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the application version.</p>
     */
    inline const ApplicationVersionLifecycle& GetStatus() const{ return m_status; }
    inline void SetStatus(const ApplicationVersionLifecycle& value) { m_status = value; }
    inline void SetStatus(ApplicationVersionLifecycle&& value) { m_status = std::move(value); }
    inline GetApplicationVersionResult& WithStatus(const ApplicationVersionLifecycle& value) { SetStatus(value); return *this;}
    inline GetApplicationVersionResult& WithStatus(ApplicationVersionLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetApplicationVersionResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetApplicationVersionResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetApplicationVersionResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetApplicationVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetApplicationVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetApplicationVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_applicationVersion;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_definitionContent;

    Aws::String m_description;

    Aws::String m_name;

    ApplicationVersionLifecycle m_status;

    Aws::String m_statusReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
