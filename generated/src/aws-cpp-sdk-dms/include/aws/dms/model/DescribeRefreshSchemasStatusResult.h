/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/RefreshSchemasStatus.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeRefreshSchemasStatusResponse">AWS
   * API Reference</a></p>
   */
  class DescribeRefreshSchemasStatusResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRefreshSchemasStatusResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRefreshSchemasStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRefreshSchemasStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the schema.</p>
     */
    inline const RefreshSchemasStatus& GetRefreshSchemasStatus() const { return m_refreshSchemasStatus; }
    template<typename RefreshSchemasStatusT = RefreshSchemasStatus>
    void SetRefreshSchemasStatus(RefreshSchemasStatusT&& value) { m_refreshSchemasStatusHasBeenSet = true; m_refreshSchemasStatus = std::forward<RefreshSchemasStatusT>(value); }
    template<typename RefreshSchemasStatusT = RefreshSchemasStatus>
    DescribeRefreshSchemasStatusResult& WithRefreshSchemasStatus(RefreshSchemasStatusT&& value) { SetRefreshSchemasStatus(std::forward<RefreshSchemasStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRefreshSchemasStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RefreshSchemasStatus m_refreshSchemasStatus;
    bool m_refreshSchemasStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
