﻿/**
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
    AWS_HEALTH_API DescribeEventDetailsForOrganizationResult();
    AWS_HEALTH_API DescribeEventDetailsForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEventDetailsForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline const Aws::Vector<OrganizationEventDetails>& GetSuccessfulSet() const{ return m_successfulSet; }
    inline void SetSuccessfulSet(const Aws::Vector<OrganizationEventDetails>& value) { m_successfulSet = value; }
    inline void SetSuccessfulSet(Aws::Vector<OrganizationEventDetails>&& value) { m_successfulSet = std::move(value); }
    inline DescribeEventDetailsForOrganizationResult& WithSuccessfulSet(const Aws::Vector<OrganizationEventDetails>& value) { SetSuccessfulSet(value); return *this;}
    inline DescribeEventDetailsForOrganizationResult& WithSuccessfulSet(Aws::Vector<OrganizationEventDetails>&& value) { SetSuccessfulSet(std::move(value)); return *this;}
    inline DescribeEventDetailsForOrganizationResult& AddSuccessfulSet(const OrganizationEventDetails& value) { m_successfulSet.push_back(value); return *this; }
    inline DescribeEventDetailsForOrganizationResult& AddSuccessfulSet(OrganizationEventDetails&& value) { m_successfulSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline const Aws::Vector<OrganizationEventDetailsErrorItem>& GetFailedSet() const{ return m_failedSet; }
    inline void SetFailedSet(const Aws::Vector<OrganizationEventDetailsErrorItem>& value) { m_failedSet = value; }
    inline void SetFailedSet(Aws::Vector<OrganizationEventDetailsErrorItem>&& value) { m_failedSet = std::move(value); }
    inline DescribeEventDetailsForOrganizationResult& WithFailedSet(const Aws::Vector<OrganizationEventDetailsErrorItem>& value) { SetFailedSet(value); return *this;}
    inline DescribeEventDetailsForOrganizationResult& WithFailedSet(Aws::Vector<OrganizationEventDetailsErrorItem>&& value) { SetFailedSet(std::move(value)); return *this;}
    inline DescribeEventDetailsForOrganizationResult& AddFailedSet(const OrganizationEventDetailsErrorItem& value) { m_failedSet.push_back(value); return *this; }
    inline DescribeEventDetailsForOrganizationResult& AddFailedSet(OrganizationEventDetailsErrorItem&& value) { m_failedSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEventDetailsForOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEventDetailsForOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEventDetailsForOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationEventDetails> m_successfulSet;

    Aws::Vector<OrganizationEventDetailsErrorItem> m_failedSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
