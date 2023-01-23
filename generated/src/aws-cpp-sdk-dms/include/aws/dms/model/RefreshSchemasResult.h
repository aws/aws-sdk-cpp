/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/RefreshSchemasStatus.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RefreshSchemasResponse">AWS
   * API Reference</a></p>
   */
  class RefreshSchemasResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasResult();
    AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the refreshed schema.</p>
     */
    inline const RefreshSchemasStatus& GetRefreshSchemasStatus() const{ return m_refreshSchemasStatus; }

    /**
     * <p>The status of the refreshed schema.</p>
     */
    inline void SetRefreshSchemasStatus(const RefreshSchemasStatus& value) { m_refreshSchemasStatus = value; }

    /**
     * <p>The status of the refreshed schema.</p>
     */
    inline void SetRefreshSchemasStatus(RefreshSchemasStatus&& value) { m_refreshSchemasStatus = std::move(value); }

    /**
     * <p>The status of the refreshed schema.</p>
     */
    inline RefreshSchemasResult& WithRefreshSchemasStatus(const RefreshSchemasStatus& value) { SetRefreshSchemasStatus(value); return *this;}

    /**
     * <p>The status of the refreshed schema.</p>
     */
    inline RefreshSchemasResult& WithRefreshSchemasStatus(RefreshSchemasStatus&& value) { SetRefreshSchemasStatus(std::move(value)); return *this;}

  private:

    RefreshSchemasStatus m_refreshSchemasStatus;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
