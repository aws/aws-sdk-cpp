/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline const Aws::Vector<OrganizationEventDetails>& GetSuccessfulSet() const{ return m_successfulSet; }

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline void SetSuccessfulSet(const Aws::Vector<OrganizationEventDetails>& value) { m_successfulSet = value; }

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline void SetSuccessfulSet(Aws::Vector<OrganizationEventDetails>&& value) { m_successfulSet = std::move(value); }

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline DescribeEventDetailsForOrganizationResult& WithSuccessfulSet(const Aws::Vector<OrganizationEventDetails>& value) { SetSuccessfulSet(value); return *this;}

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline DescribeEventDetailsForOrganizationResult& WithSuccessfulSet(Aws::Vector<OrganizationEventDetails>&& value) { SetSuccessfulSet(std::move(value)); return *this;}

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline DescribeEventDetailsForOrganizationResult& AddSuccessfulSet(const OrganizationEventDetails& value) { m_successfulSet.push_back(value); return *this; }

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline DescribeEventDetailsForOrganizationResult& AddSuccessfulSet(OrganizationEventDetails&& value) { m_successfulSet.push_back(std::move(value)); return *this; }


    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline const Aws::Vector<OrganizationEventDetailsErrorItem>& GetFailedSet() const{ return m_failedSet; }

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline void SetFailedSet(const Aws::Vector<OrganizationEventDetailsErrorItem>& value) { m_failedSet = value; }

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline void SetFailedSet(Aws::Vector<OrganizationEventDetailsErrorItem>&& value) { m_failedSet = std::move(value); }

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline DescribeEventDetailsForOrganizationResult& WithFailedSet(const Aws::Vector<OrganizationEventDetailsErrorItem>& value) { SetFailedSet(value); return *this;}

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline DescribeEventDetailsForOrganizationResult& WithFailedSet(Aws::Vector<OrganizationEventDetailsErrorItem>&& value) { SetFailedSet(std::move(value)); return *this;}

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline DescribeEventDetailsForOrganizationResult& AddFailedSet(const OrganizationEventDetailsErrorItem& value) { m_failedSet.push_back(value); return *this; }

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline DescribeEventDetailsForOrganizationResult& AddFailedSet(OrganizationEventDetailsErrorItem&& value) { m_failedSet.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<OrganizationEventDetails> m_successfulSet;

    Aws::Vector<OrganizationEventDetailsErrorItem> m_failedSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
