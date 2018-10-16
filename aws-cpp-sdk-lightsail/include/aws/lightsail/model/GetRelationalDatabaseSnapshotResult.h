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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/RelationalDatabaseSnapshot.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotResult
  {
  public:
    GetRelationalDatabaseSnapshotResult();
    GetRelationalDatabaseSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRelationalDatabaseSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object describing the specified database snapshot.</p>
     */
    inline const RelationalDatabaseSnapshot& GetRelationalDatabaseSnapshot() const{ return m_relationalDatabaseSnapshot; }

    /**
     * <p>An object describing the specified database snapshot.</p>
     */
    inline void SetRelationalDatabaseSnapshot(const RelationalDatabaseSnapshot& value) { m_relationalDatabaseSnapshot = value; }

    /**
     * <p>An object describing the specified database snapshot.</p>
     */
    inline void SetRelationalDatabaseSnapshot(RelationalDatabaseSnapshot&& value) { m_relationalDatabaseSnapshot = std::move(value); }

    /**
     * <p>An object describing the specified database snapshot.</p>
     */
    inline GetRelationalDatabaseSnapshotResult& WithRelationalDatabaseSnapshot(const RelationalDatabaseSnapshot& value) { SetRelationalDatabaseSnapshot(value); return *this;}

    /**
     * <p>An object describing the specified database snapshot.</p>
     */
    inline GetRelationalDatabaseSnapshotResult& WithRelationalDatabaseSnapshot(RelationalDatabaseSnapshot&& value) { SetRelationalDatabaseSnapshot(std::move(value)); return *this;}

  private:

    RelationalDatabaseSnapshot m_relationalDatabaseSnapshot;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
