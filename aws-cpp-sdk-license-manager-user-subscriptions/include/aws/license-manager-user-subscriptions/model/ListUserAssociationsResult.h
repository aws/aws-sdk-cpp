/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/InstanceUserSummary.h>
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
  class ListUserAssociationsResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListUserAssociationsResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListUserAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListUserAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata that describes the list user association operation.</p>
     */
    inline const Aws::Vector<InstanceUserSummary>& GetInstanceUserSummaries() const{ return m_instanceUserSummaries; }

    /**
     * <p>Metadata that describes the list user association operation.</p>
     */
    inline void SetInstanceUserSummaries(const Aws::Vector<InstanceUserSummary>& value) { m_instanceUserSummaries = value; }

    /**
     * <p>Metadata that describes the list user association operation.</p>
     */
    inline void SetInstanceUserSummaries(Aws::Vector<InstanceUserSummary>&& value) { m_instanceUserSummaries = std::move(value); }

    /**
     * <p>Metadata that describes the list user association operation.</p>
     */
    inline ListUserAssociationsResult& WithInstanceUserSummaries(const Aws::Vector<InstanceUserSummary>& value) { SetInstanceUserSummaries(value); return *this;}

    /**
     * <p>Metadata that describes the list user association operation.</p>
     */
    inline ListUserAssociationsResult& WithInstanceUserSummaries(Aws::Vector<InstanceUserSummary>&& value) { SetInstanceUserSummaries(std::move(value)); return *this;}

    /**
     * <p>Metadata that describes the list user association operation.</p>
     */
    inline ListUserAssociationsResult& AddInstanceUserSummaries(const InstanceUserSummary& value) { m_instanceUserSummaries.push_back(value); return *this; }

    /**
     * <p>Metadata that describes the list user association operation.</p>
     */
    inline ListUserAssociationsResult& AddInstanceUserSummaries(InstanceUserSummary&& value) { m_instanceUserSummaries.push_back(std::move(value)); return *this; }


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
    inline ListUserAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListUserAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListUserAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstanceUserSummary> m_instanceUserSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
