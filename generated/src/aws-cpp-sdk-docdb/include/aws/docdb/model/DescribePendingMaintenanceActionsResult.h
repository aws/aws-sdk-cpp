/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/model/ResponseMetadata.h>
#include <aws/docdb/model/ResourcePendingMaintenanceActions.h>
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
namespace DocDB
{
namespace Model
{
  /**
   * <p>Represents the output of
   * <a>DescribePendingMaintenanceActions</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/PendingMaintenanceActionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribePendingMaintenanceActionsResult
  {
  public:
    AWS_DOCDB_API DescribePendingMaintenanceActionsResult() = default;
    AWS_DOCDB_API DescribePendingMaintenanceActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API DescribePendingMaintenanceActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The maintenance actions to be applied.</p>
     */
    inline const Aws::Vector<ResourcePendingMaintenanceActions>& GetPendingMaintenanceActions() const { return m_pendingMaintenanceActions; }
    template<typename PendingMaintenanceActionsT = Aws::Vector<ResourcePendingMaintenanceActions>>
    void SetPendingMaintenanceActions(PendingMaintenanceActionsT&& value) { m_pendingMaintenanceActionsHasBeenSet = true; m_pendingMaintenanceActions = std::forward<PendingMaintenanceActionsT>(value); }
    template<typename PendingMaintenanceActionsT = Aws::Vector<ResourcePendingMaintenanceActions>>
    DescribePendingMaintenanceActionsResult& WithPendingMaintenanceActions(PendingMaintenanceActionsT&& value) { SetPendingMaintenanceActions(std::forward<PendingMaintenanceActionsT>(value)); return *this;}
    template<typename PendingMaintenanceActionsT = ResourcePendingMaintenanceActions>
    DescribePendingMaintenanceActionsResult& AddPendingMaintenanceActions(PendingMaintenanceActionsT&& value) { m_pendingMaintenanceActionsHasBeenSet = true; m_pendingMaintenanceActions.emplace_back(std::forward<PendingMaintenanceActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribePendingMaintenanceActionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribePendingMaintenanceActionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourcePendingMaintenanceActions> m_pendingMaintenanceActions;
    bool m_pendingMaintenanceActionsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
