/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/ReportType.h>
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
namespace IoT
{
namespace Model
{
  class ListThingRegistrationTaskReportsResult
  {
  public:
    AWS_IOT_API ListThingRegistrationTaskReportsResult() = default;
    AWS_IOT_API ListThingRegistrationTaskReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingRegistrationTaskReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Links to the task resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceLinks() const { return m_resourceLinks; }
    template<typename ResourceLinksT = Aws::Vector<Aws::String>>
    void SetResourceLinks(ResourceLinksT&& value) { m_resourceLinksHasBeenSet = true; m_resourceLinks = std::forward<ResourceLinksT>(value); }
    template<typename ResourceLinksT = Aws::Vector<Aws::String>>
    ListThingRegistrationTaskReportsResult& WithResourceLinks(ResourceLinksT&& value) { SetResourceLinks(std::forward<ResourceLinksT>(value)); return *this;}
    template<typename ResourceLinksT = Aws::String>
    ListThingRegistrationTaskReportsResult& AddResourceLinks(ResourceLinksT&& value) { m_resourceLinksHasBeenSet = true; m_resourceLinks.emplace_back(std::forward<ResourceLinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of task report.</p>
     */
    inline ReportType GetReportType() const { return m_reportType; }
    inline void SetReportType(ReportType value) { m_reportTypeHasBeenSet = true; m_reportType = value; }
    inline ListThingRegistrationTaskReportsResult& WithReportType(ReportType value) { SetReportType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThingRegistrationTaskReportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListThingRegistrationTaskReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceLinks;
    bool m_resourceLinksHasBeenSet = false;

    ReportType m_reportType{ReportType::NOT_SET};
    bool m_reportTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
