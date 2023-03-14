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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRefreshSchemasStatusResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRefreshSchemasStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRefreshSchemasStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the schema.</p>
     */
    inline const RefreshSchemasStatus& GetRefreshSchemasStatus() const{ return m_refreshSchemasStatus; }

    /**
     * <p>The status of the schema.</p>
     */
    inline void SetRefreshSchemasStatus(const RefreshSchemasStatus& value) { m_refreshSchemasStatus = value; }

    /**
     * <p>The status of the schema.</p>
     */
    inline void SetRefreshSchemasStatus(RefreshSchemasStatus&& value) { m_refreshSchemasStatus = std::move(value); }

    /**
     * <p>The status of the schema.</p>
     */
    inline DescribeRefreshSchemasStatusResult& WithRefreshSchemasStatus(const RefreshSchemasStatus& value) { SetRefreshSchemasStatus(value); return *this;}

    /**
     * <p>The status of the schema.</p>
     */
    inline DescribeRefreshSchemasStatusResult& WithRefreshSchemasStatus(RefreshSchemasStatus&& value) { SetRefreshSchemasStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRefreshSchemasStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRefreshSchemasStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRefreshSchemasStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RefreshSchemasStatus m_refreshSchemasStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
