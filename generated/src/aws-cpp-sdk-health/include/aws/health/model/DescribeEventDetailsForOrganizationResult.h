/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/OrganizationEventDetails.h>
#include <aws/health/model/OrganizationEventDetailsErrorItem.h>
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
namespace Health
{
namespace Model
{
  class DescribeEventDetailsForOrganizationResult
  {
  public:
    AWS_HEALTH_API DescribeEventDetailsForOrganizationResult() = default;
    AWS_HEALTH_API DescribeEventDetailsForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEventDetailsForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline const Aws::Vector<OrganizationEventDetails>& GetSuccessfulSet() const { return m_successfulSet; }
    template<typename SuccessfulSetT = Aws::Vector<OrganizationEventDetails>>
    void SetSuccessfulSet(SuccessfulSetT&& value) { m_successfulSetHasBeenSet = true; m_successfulSet = std::forward<SuccessfulSetT>(value); }
    template<typename SuccessfulSetT = Aws::Vector<OrganizationEventDetails>>
    DescribeEventDetailsForOrganizationResult& WithSuccessfulSet(SuccessfulSetT&& value) { SetSuccessfulSet(std::forward<SuccessfulSetT>(value)); return *this;}
    template<typename SuccessfulSetT = OrganizationEventDetails>
    DescribeEventDetailsForOrganizationResult& AddSuccessfulSet(SuccessfulSetT&& value) { m_successfulSetHasBeenSet = true; m_successfulSet.emplace_back(std::forward<SuccessfulSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline const Aws::Vector<OrganizationEventDetailsErrorItem>& GetFailedSet() const { return m_failedSet; }
    template<typename FailedSetT = Aws::Vector<OrganizationEventDetailsErrorItem>>
    void SetFailedSet(FailedSetT&& value) { m_failedSetHasBeenSet = true; m_failedSet = std::forward<FailedSetT>(value); }
    template<typename FailedSetT = Aws::Vector<OrganizationEventDetailsErrorItem>>
    DescribeEventDetailsForOrganizationResult& WithFailedSet(FailedSetT&& value) { SetFailedSet(std::forward<FailedSetT>(value)); return *this;}
    template<typename FailedSetT = OrganizationEventDetailsErrorItem>
    DescribeEventDetailsForOrganizationResult& AddFailedSet(FailedSetT&& value) { m_failedSetHasBeenSet = true; m_failedSet.emplace_back(std::forward<FailedSetT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEventDetailsForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationEventDetails> m_successfulSet;
    bool m_successfulSetHasBeenSet = false;

    Aws::Vector<OrganizationEventDetailsErrorItem> m_failedSet;
    bool m_failedSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
