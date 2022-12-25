/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ApplicationSummary.h>
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
namespace SsmSap
{
namespace Model
{
  class ListApplicationsResult
  {
  public:
    AWS_SSMSAP_API ListApplicationsResult();
    AWS_SSMSAP_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::Vector<ApplicationSummary>& GetApplications() const{ return m_applications; }

    /**
     * <p/>
     */
    inline void SetApplications(const Aws::Vector<ApplicationSummary>& value) { m_applications = value; }

    /**
     * <p/>
     */
    inline void SetApplications(Aws::Vector<ApplicationSummary>&& value) { m_applications = std::move(value); }

    /**
     * <p/>
     */
    inline ListApplicationsResult& WithApplications(const Aws::Vector<ApplicationSummary>& value) { SetApplications(value); return *this;}

    /**
     * <p/>
     */
    inline ListApplicationsResult& WithApplications(Aws::Vector<ApplicationSummary>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListApplicationsResult& AddApplications(const ApplicationSummary& value) { m_applications.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ListApplicationsResult& AddApplications(ApplicationSummary&& value) { m_applications.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p/>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p/>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p/>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p/>
     */
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p/>
     */
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationSummary> m_applications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
