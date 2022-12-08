/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentFrameworkMetadata.h>
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
namespace AuditManager
{
namespace Model
{
  class ListAssessmentFrameworksResult
  {
  public:
    AWS_AUDITMANAGER_API ListAssessmentFrameworksResult();
    AWS_AUDITMANAGER_API ListAssessmentFrameworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListAssessmentFrameworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of metadata objects for the framework. </p>
     */
    inline const Aws::Vector<AssessmentFrameworkMetadata>& GetFrameworkMetadataList() const{ return m_frameworkMetadataList; }

    /**
     * <p> The list of metadata objects for the framework. </p>
     */
    inline void SetFrameworkMetadataList(const Aws::Vector<AssessmentFrameworkMetadata>& value) { m_frameworkMetadataList = value; }

    /**
     * <p> The list of metadata objects for the framework. </p>
     */
    inline void SetFrameworkMetadataList(Aws::Vector<AssessmentFrameworkMetadata>&& value) { m_frameworkMetadataList = std::move(value); }

    /**
     * <p> The list of metadata objects for the framework. </p>
     */
    inline ListAssessmentFrameworksResult& WithFrameworkMetadataList(const Aws::Vector<AssessmentFrameworkMetadata>& value) { SetFrameworkMetadataList(value); return *this;}

    /**
     * <p> The list of metadata objects for the framework. </p>
     */
    inline ListAssessmentFrameworksResult& WithFrameworkMetadataList(Aws::Vector<AssessmentFrameworkMetadata>&& value) { SetFrameworkMetadataList(std::move(value)); return *this;}

    /**
     * <p> The list of metadata objects for the framework. </p>
     */
    inline ListAssessmentFrameworksResult& AddFrameworkMetadataList(const AssessmentFrameworkMetadata& value) { m_frameworkMetadataList.push_back(value); return *this; }

    /**
     * <p> The list of metadata objects for the framework. </p>
     */
    inline ListAssessmentFrameworksResult& AddFrameworkMetadataList(AssessmentFrameworkMetadata&& value) { m_frameworkMetadataList.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssessmentFrameworkMetadata> m_frameworkMetadataList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
