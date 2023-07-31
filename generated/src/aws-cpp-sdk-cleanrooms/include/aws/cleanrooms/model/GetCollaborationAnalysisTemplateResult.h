/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/CollaborationAnalysisTemplate.h>
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
  class GetCollaborationAnalysisTemplateResult
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationAnalysisTemplateResult();
    AWS_CLEANROOMS_API GetCollaborationAnalysisTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetCollaborationAnalysisTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The analysis template within a collaboration.</p>
     */
    inline const CollaborationAnalysisTemplate& GetCollaborationAnalysisTemplate() const{ return m_collaborationAnalysisTemplate; }

    /**
     * <p>The analysis template within a collaboration.</p>
     */
    inline void SetCollaborationAnalysisTemplate(const CollaborationAnalysisTemplate& value) { m_collaborationAnalysisTemplate = value; }

    /**
     * <p>The analysis template within a collaboration.</p>
     */
    inline void SetCollaborationAnalysisTemplate(CollaborationAnalysisTemplate&& value) { m_collaborationAnalysisTemplate = std::move(value); }

    /**
     * <p>The analysis template within a collaboration.</p>
     */
    inline GetCollaborationAnalysisTemplateResult& WithCollaborationAnalysisTemplate(const CollaborationAnalysisTemplate& value) { SetCollaborationAnalysisTemplate(value); return *this;}

    /**
     * <p>The analysis template within a collaboration.</p>
     */
    inline GetCollaborationAnalysisTemplateResult& WithCollaborationAnalysisTemplate(CollaborationAnalysisTemplate&& value) { SetCollaborationAnalysisTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCollaborationAnalysisTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCollaborationAnalysisTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCollaborationAnalysisTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CollaborationAnalysisTemplate m_collaborationAnalysisTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
