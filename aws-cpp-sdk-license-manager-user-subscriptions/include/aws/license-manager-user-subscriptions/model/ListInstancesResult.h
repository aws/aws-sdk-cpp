/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/InstanceSummary.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class ListInstancesResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListInstancesResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata that describes the list instances operation.</p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstanceSummaries() const{ return m_instanceSummaries; }

    /**
     * <p>Metadata that describes the list instances operation.</p>
     */
    inline void SetInstanceSummaries(const Aws::Vector<InstanceSummary>& value) { m_instanceSummaries = value; }

    /**
     * <p>Metadata that describes the list instances operation.</p>
     */
    inline void SetInstanceSummaries(Aws::Vector<InstanceSummary>&& value) { m_instanceSummaries = std::move(value); }

    /**
     * <p>Metadata that describes the list instances operation.</p>
     */
    inline ListInstancesResult& WithInstanceSummaries(const Aws::Vector<InstanceSummary>& value) { SetInstanceSummaries(value); return *this;}

    /**
     * <p>Metadata that describes the list instances operation.</p>
     */
    inline ListInstancesResult& WithInstanceSummaries(Aws::Vector<InstanceSummary>&& value) { SetInstanceSummaries(std::move(value)); return *this;}

    /**
     * <p>Metadata that describes the list instances operation.</p>
     */
    inline ListInstancesResult& AddInstanceSummaries(const InstanceSummary& value) { m_instanceSummaries.push_back(value); return *this; }

    /**
     * <p>Metadata that describes the list instances operation.</p>
     */
    inline ListInstancesResult& AddInstanceSummaries(InstanceSummary&& value) { m_instanceSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstanceSummary> m_instanceSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
