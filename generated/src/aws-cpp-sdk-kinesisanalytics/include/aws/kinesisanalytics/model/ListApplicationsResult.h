/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListApplicationsResult
  {
  public:
    AWS_KINESISANALYTICS_API ListApplicationsResult() = default;
    AWS_KINESISANALYTICS_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICS_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of <code>ApplicationSummary</code> objects. </p>
     */
    inline const Aws::Vector<ApplicationSummary>& GetApplicationSummaries() const { return m_applicationSummaries; }
    template<typename ApplicationSummariesT = Aws::Vector<ApplicationSummary>>
    void SetApplicationSummaries(ApplicationSummariesT&& value) { m_applicationSummariesHasBeenSet = true; m_applicationSummaries = std::forward<ApplicationSummariesT>(value); }
    template<typename ApplicationSummariesT = Aws::Vector<ApplicationSummary>>
    ListApplicationsResult& WithApplicationSummaries(ApplicationSummariesT&& value) { SetApplicationSummaries(std::forward<ApplicationSummariesT>(value)); return *this;}
    template<typename ApplicationSummariesT = ApplicationSummary>
    ListApplicationsResult& AddApplicationSummaries(ApplicationSummariesT&& value) { m_applicationSummariesHasBeenSet = true; m_applicationSummaries.emplace_back(std::forward<ApplicationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns true if there are more applications to retrieve.</p>
     */
    inline bool GetHasMoreApplications() const { return m_hasMoreApplications; }
    inline void SetHasMoreApplications(bool value) { m_hasMoreApplicationsHasBeenSet = true; m_hasMoreApplications = value; }
    inline ListApplicationsResult& WithHasMoreApplications(bool value) { SetHasMoreApplications(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationSummary> m_applicationSummaries;
    bool m_applicationSummariesHasBeenSet = false;

    bool m_hasMoreApplications{false};
    bool m_hasMoreApplicationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
