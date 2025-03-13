/**
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
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationVersionResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetApplicationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The specific version of the application.</p>
     */
    inline int GetApplicationVersion() const { return m_applicationVersion; }
    inline void SetApplicationVersion(int value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }
    inline GetApplicationVersionResult& WithApplicationVersion(int value) { SetApplicationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the application version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetApplicationVersionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the application definition. This is a JSON object that
     * contains the resource configuration and definitions that identify an
     * application.</p>
     */
    inline const Aws::String& GetDefinitionContent() const { return m_definitionContent; }
    template<typename DefinitionContentT = Aws::String>
    void SetDefinitionContent(DefinitionContentT&& value) { m_definitionContentHasBeenSet = true; m_definitionContent = std::forward<DefinitionContentT>(value); }
    template<typename DefinitionContentT = Aws::String>
    GetApplicationVersionResult& WithDefinitionContent(DefinitionContentT&& value) { SetDefinitionContent(std::forward<DefinitionContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetApplicationVersionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application version.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetApplicationVersionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the application version.</p>
     */
    inline ApplicationVersionLifecycle GetStatus() const { return m_status; }
    inline void SetStatus(ApplicationVersionLifecycle value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetApplicationVersionResult& WithStatus(ApplicationVersionLifecycle value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetApplicationVersionResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_applicationVersion{0};
    bool m_applicationVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_definitionContent;
    bool m_definitionContentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ApplicationVersionLifecycle m_status{ApplicationVersionLifecycle::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
