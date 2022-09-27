/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/OrganizationStatus.h>
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
namespace NetworkManager
{
namespace Model
{
  class AWS_NETWORKMANAGER_API ListOrganizationServiceAccessStatusResult
  {
  public:
    ListOrganizationServiceAccessStatusResult();
    ListOrganizationServiceAccessStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListOrganizationServiceAccessStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const OrganizationStatus& GetOrganizationStatus() const{ return m_organizationStatus; }

    
    inline void SetOrganizationStatus(const OrganizationStatus& value) { m_organizationStatus = value; }

    
    inline void SetOrganizationStatus(OrganizationStatus&& value) { m_organizationStatus = std::move(value); }

    
    inline ListOrganizationServiceAccessStatusResult& WithOrganizationStatus(const OrganizationStatus& value) { SetOrganizationStatus(value); return *this;}

    
    inline ListOrganizationServiceAccessStatusResult& WithOrganizationStatus(OrganizationStatus&& value) { SetOrganizationStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListOrganizationServiceAccessStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListOrganizationServiceAccessStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListOrganizationServiceAccessStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    OrganizationStatus m_organizationStatus;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
