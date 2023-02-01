/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/RelationalDatabase.h>
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
  class GetRelationalDatabaseResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseResult();
    AWS_LIGHTSAIL_API GetRelationalDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object describing the specified database.</p>
     */
    inline const RelationalDatabase& GetRelationalDatabase() const{ return m_relationalDatabase; }

    /**
     * <p>An object describing the specified database.</p>
     */
    inline void SetRelationalDatabase(const RelationalDatabase& value) { m_relationalDatabase = value; }

    /**
     * <p>An object describing the specified database.</p>
     */
    inline void SetRelationalDatabase(RelationalDatabase&& value) { m_relationalDatabase = std::move(value); }

    /**
     * <p>An object describing the specified database.</p>
     */
    inline GetRelationalDatabaseResult& WithRelationalDatabase(const RelationalDatabase& value) { SetRelationalDatabase(value); return *this;}

    /**
     * <p>An object describing the specified database.</p>
     */
    inline GetRelationalDatabaseResult& WithRelationalDatabase(RelationalDatabase&& value) { SetRelationalDatabase(std::move(value)); return *this;}

  private:

    RelationalDatabase m_relationalDatabase;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
