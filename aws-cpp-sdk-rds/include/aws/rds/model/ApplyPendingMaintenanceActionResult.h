﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/ResourcePendingMaintenanceActions.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class AWS_RDS_API ApplyPendingMaintenanceActionResult
  {
  public:
    ApplyPendingMaintenanceActionResult();
    ApplyPendingMaintenanceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ApplyPendingMaintenanceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ResourcePendingMaintenanceActions& GetResourcePendingMaintenanceActions() const{ return m_resourcePendingMaintenanceActions; }

    
    inline void SetResourcePendingMaintenanceActions(const ResourcePendingMaintenanceActions& value) { m_resourcePendingMaintenanceActions = value; }

    
    inline void SetResourcePendingMaintenanceActions(ResourcePendingMaintenanceActions&& value) { m_resourcePendingMaintenanceActions = std::move(value); }

    
    inline ApplyPendingMaintenanceActionResult& WithResourcePendingMaintenanceActions(const ResourcePendingMaintenanceActions& value) { SetResourcePendingMaintenanceActions(value); return *this;}

    
    inline ApplyPendingMaintenanceActionResult& WithResourcePendingMaintenanceActions(ResourcePendingMaintenanceActions&& value) { SetResourcePendingMaintenanceActions(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ApplyPendingMaintenanceActionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ApplyPendingMaintenanceActionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ResourcePendingMaintenanceActions m_resourcePendingMaintenanceActions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
