/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/UpdateSubscriptionsToEventBridgeResponse">AWS
   * API Reference</a></p>
   */
  class UpdateSubscriptionsToEventBridgeResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API UpdateSubscriptionsToEventBridgeResult();
    AWS_DATABASEMIGRATIONSERVICE_API UpdateSubscriptionsToEventBridgeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API UpdateSubscriptionsToEventBridgeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string that indicates how many event subscriptions were migrated and how
     * many remain to be migrated.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>A string that indicates how many event subscriptions were migrated and how
     * many remain to be migrated.</p>
     */
    inline void SetResult(const Aws::String& value) { m_result = value; }

    /**
     * <p>A string that indicates how many event subscriptions were migrated and how
     * many remain to be migrated.</p>
     */
    inline void SetResult(Aws::String&& value) { m_result = std::move(value); }

    /**
     * <p>A string that indicates how many event subscriptions were migrated and how
     * many remain to be migrated.</p>
     */
    inline void SetResult(const char* value) { m_result.assign(value); }

    /**
     * <p>A string that indicates how many event subscriptions were migrated and how
     * many remain to be migrated.</p>
     */
    inline UpdateSubscriptionsToEventBridgeResult& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>A string that indicates how many event subscriptions were migrated and how
     * many remain to be migrated.</p>
     */
    inline UpdateSubscriptionsToEventBridgeResult& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>A string that indicates how many event subscriptions were migrated and how
     * many remain to be migrated.</p>
     */
    inline UpdateSubscriptionsToEventBridgeResult& WithResult(const char* value) { SetResult(value); return *this;}

  private:

    Aws::String m_result;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
