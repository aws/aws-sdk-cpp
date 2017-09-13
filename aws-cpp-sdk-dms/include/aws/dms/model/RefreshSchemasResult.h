/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasResult
  {
  public:
    RefreshSchemasResult();
    RefreshSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RefreshSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
