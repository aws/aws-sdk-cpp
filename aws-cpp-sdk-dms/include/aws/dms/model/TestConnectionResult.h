/*
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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/Connection.h>

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
   * <p/>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API TestConnectionResult
  {
  public:
    TestConnectionResult();
    TestConnectionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestConnectionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The connection tested.</p>
     */
    inline const Connection& GetConnection() const{ return m_connection; }

    /**
     * <p>The connection tested.</p>
     */
    inline void SetConnection(const Connection& value) { m_connection = value; }

    /**
     * <p>The connection tested.</p>
     */
    inline void SetConnection(Connection&& value) { m_connection = value; }

    /**
     * <p>The connection tested.</p>
     */
    inline TestConnectionResult& WithConnection(const Connection& value) { SetConnection(value); return *this;}

    /**
     * <p>The connection tested.</p>
     */
    inline TestConnectionResult& WithConnection(Connection&& value) { SetConnection(value); return *this;}

  private:
    Connection m_connection;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
