/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/CollaborationAnalysisTemplate.h>
#include <aws/cleanrooms/model/BatchGetCollaborationAnalysisTemplateError.h>
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
  class BatchGetCollaborationAnalysisTemplateResult
  {
  public:
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateResult();
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retrieved list of analysis templates within a collaboration.</p>
     */
    inline const Aws::Vector<CollaborationAnalysisTemplate>& GetCollaborationAnalysisTemplates() const{ return m_collaborationAnalysisTemplates; }

    /**
     * <p>The retrieved list of analysis templates within a collaboration.</p>
     */
    inline void SetCollaborationAnalysisTemplates(const Aws::Vector<CollaborationAnalysisTemplate>& value) { m_collaborationAnalysisTemplates = value; }

    /**
     * <p>The retrieved list of analysis templates within a collaboration.</p>
     */
    inline void SetCollaborationAnalysisTemplates(Aws::Vector<CollaborationAnalysisTemplate>&& value) { m_collaborationAnalysisTemplates = std::move(value); }

    /**
     * <p>The retrieved list of analysis templates within a collaboration.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateResult& WithCollaborationAnalysisTemplates(const Aws::Vector<CollaborationAnalysisTemplate>& value) { SetCollaborationAnalysisTemplates(value); return *this;}

    /**
     * <p>The retrieved list of analysis templates within a collaboration.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateResult& WithCollaborationAnalysisTemplates(Aws::Vector<CollaborationAnalysisTemplate>&& value) { SetCollaborationAnalysisTemplates(std::move(value)); return *this;}

    /**
     * <p>The retrieved list of analysis templates within a collaboration.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateResult& AddCollaborationAnalysisTemplates(const CollaborationAnalysisTemplate& value) { m_collaborationAnalysisTemplates.push_back(value); return *this; }

    /**
     * <p>The retrieved list of analysis templates within a collaboration.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateResult& AddCollaborationAnalysisTemplates(CollaborationAnalysisTemplate&& value) { m_collaborationAnalysisTemplates.push_back(std::move(value)); return *this; }


    /**
     * <p>Error reasons for collaboration analysis templates that could not be
     * retrieved. One error is returned for every collaboration analysis template that
     * could not be retrieved.</p>
     */
    inline const Aws::Vector<BatchGetCollaborationAnalysisTemplateError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Error reasons for collaboration analysis templates that could not be
     * retrieved. One error is returned for every collaboration analysis template that
     * could not be retrieved.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchGetCollaborationAnalysisTemplateError>& value) { m_errors = value; }

    /**
     * <p>Error reasons for collaboration analysis templates that could not be
     * retrieved. One error is returned for every collaboration analysis template that
     * could not be retrieved.</p>
     */
    inline void SetErrors(Aws::Vector<BatchGetCollaborationAnalysisTemplateError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Error reasons for collaboration analysis templates that could not be
     * retrieved. One error is returned for every collaboration analysis template that
     * could not be retrieved.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateResult& WithErrors(const Aws::Vector<BatchGetCollaborationAnalysisTemplateError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Error reasons for collaboration analysis templates that could not be
     * retrieved. One error is returned for every collaboration analysis template that
     * could not be retrieved.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateResult& WithErrors(Aws::Vector<BatchGetCollaborationAnalysisTemplateError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Error reasons for collaboration analysis templates that could not be
     * retrieved. One error is returned for every collaboration analysis template that
     * could not be retrieved.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateResult& AddErrors(const BatchGetCollaborationAnalysisTemplateError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Error reasons for collaboration analysis templates that could not be
     * retrieved. One error is returned for every collaboration analysis template that
     * could not be retrieved.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateResult& AddErrors(BatchGetCollaborationAnalysisTemplateError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetCollaborationAnalysisTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetCollaborationAnalysisTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetCollaborationAnalysisTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CollaborationAnalysisTemplate> m_collaborationAnalysisTemplates;

    Aws::Vector<BatchGetCollaborationAnalysisTemplateError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
