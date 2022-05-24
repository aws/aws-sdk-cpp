/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/OrganizationStatus.h>
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
  class AWS_NETWORKMANAGER_API StartOrganizationServiceAccessUpdateResult
  {
  public:
    StartOrganizationServiceAccessUpdateResult();
    StartOrganizationServiceAccessUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartOrganizationServiceAccessUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const OrganizationStatus& GetOrganizationStatus() const{ return m_organizationStatus; }

    
    inline void SetOrganizationStatus(const OrganizationStatus& value) { m_organizationStatus = value; }

    
    inline void SetOrganizationStatus(OrganizationStatus&& value) { m_organizationStatus = std::move(value); }

    
    inline StartOrganizationServiceAccessUpdateResult& WithOrganizationStatus(const OrganizationStatus& value) { SetOrganizationStatus(value); return *this;}

    
    inline StartOrganizationServiceAccessUpdateResult& WithOrganizationStatus(OrganizationStatus&& value) { SetOrganizationStatus(std::move(value)); return *this;}

  private:

    OrganizationStatus m_organizationStatus;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
