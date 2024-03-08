/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/CollaborationPrivacyBudgetTemplate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CleanRooms
{
namespace Model
{
  class GetCollaborationPrivacyBudgetTemplateResult
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationPrivacyBudgetTemplateResult();
    AWS_CLEANROOMS_API GetCollaborationPrivacyBudgetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetCollaborationPrivacyBudgetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline const CollaborationPrivacyBudgetTemplate& GetCollaborationPrivacyBudgetTemplate() const{ return m_collaborationPrivacyBudgetTemplate; }

    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline void SetCollaborationPrivacyBudgetTemplate(const CollaborationPrivacyBudgetTemplate& value) { m_collaborationPrivacyBudgetTemplate = value; }

    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline void SetCollaborationPrivacyBudgetTemplate(CollaborationPrivacyBudgetTemplate&& value) { m_collaborationPrivacyBudgetTemplate = std::move(value); }

    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline GetCollaborationPrivacyBudgetTemplateResult& WithCollaborationPrivacyBudgetTemplate(const CollaborationPrivacyBudgetTemplate& value) { SetCollaborationPrivacyBudgetTemplate(value); return *this;}

    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline GetCollaborationPrivacyBudgetTemplateResult& WithCollaborationPrivacyBudgetTemplate(CollaborationPrivacyBudgetTemplate&& value) { SetCollaborationPrivacyBudgetTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCollaborationPrivacyBudgetTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCollaborationPrivacyBudgetTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCollaborationPrivacyBudgetTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CollaborationPrivacyBudgetTemplate m_collaborationPrivacyBudgetTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
