/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetRelationalDatabaseSnapshotResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotResult();
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
