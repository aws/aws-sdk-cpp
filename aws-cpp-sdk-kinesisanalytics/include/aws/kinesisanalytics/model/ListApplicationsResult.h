/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalytics/model/ApplicationSummary.h>
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
namespace KinesisAnalytics
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ListApplicationsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API ListApplicationsResult
  {
  public:
    ListApplicationsResult();
    ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of <code>ApplicationSummary</code> objects. </p>
     */
    inline const Aws::Vector<ApplicationSummary>& GetApplicationSummaries() const{ return m_applicationSummaries; }

    /**
     * <p>List of <code>ApplicationSummary</code> objects. </p>
     */
    inline void SetApplicationSummaries(const Aws::Vector<ApplicationSummary>& value) { m_applicationSummaries = value; }

    /**
     * <p>List of <code>ApplicationSummary</code> objects. </p>
     */
    inline void SetApplicationSummaries(Aws::Vector<ApplicationSummary>&& value) { m_applicationSummaries = std::move(value); }

    /**
     * <p>List of <code>ApplicationSummary</code> objects. </p>
     */
    inline ListApplicationsResult& WithApplicationSummaries(const Aws::Vector<ApplicationSummary>& value) { SetApplicationSummaries(value); return *this;}

    /**
     * <p>List of <code>ApplicationSummary</code> objects. </p>
     */
    inline ListApplicationsResult& WithApplicationSummaries(Aws::Vector<ApplicationSummary>&& value) { SetApplicationSummaries(std::move(value)); return *this;}

    /**
     * <p>List of <code>ApplicationSummary</code> objects. </p>
     */
    inline ListApplicationsResult& AddApplicationSummaries(const ApplicationSummary& value) { m_applicationSummaries.push_back(value); return *this; }

    /**
     * <p>List of <code>ApplicationSummary</code> objects. </p>
     */
    inline ListApplicationsResult& AddApplicationSummaries(ApplicationSummary&& value) { m_applicationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns true if there are more applications to retrieve.</p>
     */
    inline bool GetHasMoreApplications() const{ return m_hasMoreApplications; }

    /**
     * <p>Returns true if there are more applications to retrieve.</p>
     */
    inline void SetHasMoreApplications(bool value) { m_hasMoreApplications = value; }

    /**
     * <p>Returns true if there are more applications to retrieve.</p>
     */
    inline ListApplicationsResult& WithHasMoreApplications(bool value) { SetHasMoreApplications(value); return *this;}

  private:

    Aws::Vector<ApplicationSummary> m_applicationSummaries;

    bool m_hasMoreApplications;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
