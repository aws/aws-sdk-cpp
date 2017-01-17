﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/ResourcePendingMaintenanceActions.h>

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
  /**
   * <p>Data returned from the <b>DescribePendingMaintenanceActions</b>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PendingMaintenanceActionsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DescribePendingMaintenanceActionsResult
  {
  public:
    DescribePendingMaintenanceActionsResult();
    DescribePendingMaintenanceActionsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribePendingMaintenanceActionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline const Aws::Vector<ResourcePendingMaintenanceActions>& GetPendingMaintenanceActions() const{ return m_pendingMaintenanceActions; }

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline void SetPendingMaintenanceActions(const Aws::Vector<ResourcePendingMaintenanceActions>& value) { m_pendingMaintenanceActions = value; }

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline void SetPendingMaintenanceActions(Aws::Vector<ResourcePendingMaintenanceActions>&& value) { m_pendingMaintenanceActions = value; }

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline DescribePendingMaintenanceActionsResult& WithPendingMaintenanceActions(const Aws::Vector<ResourcePendingMaintenanceActions>& value) { SetPendingMaintenanceActions(value); return *this;}

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline DescribePendingMaintenanceActionsResult& WithPendingMaintenanceActions(Aws::Vector<ResourcePendingMaintenanceActions>&& value) { SetPendingMaintenanceActions(value); return *this;}

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline DescribePendingMaintenanceActionsResult& AddPendingMaintenanceActions(const ResourcePendingMaintenanceActions& value) { m_pendingMaintenanceActions.push_back(value); return *this; }

    /**
     * <p>A list of the pending maintenance actions for the resource.</p>
     */
    inline DescribePendingMaintenanceActionsResult& AddPendingMaintenanceActions(ResourcePendingMaintenanceActions&& value) { m_pendingMaintenanceActions.push_back(value); return *this; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline DescribePendingMaintenanceActionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline DescribePendingMaintenanceActionsResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribePendingMaintenanceActions</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to a number
     * of records specified by <code>MaxRecords</code>. </p>
     */
    inline DescribePendingMaintenanceActionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribePendingMaintenanceActionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribePendingMaintenanceActionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ResourcePendingMaintenanceActions> m_pendingMaintenanceActions;
    Aws::String m_marker;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws