/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/Database.h>
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
namespace Athena
{
namespace Model
{
  class GetDatabaseResult
  {
  public:
    AWS_ATHENA_API GetDatabaseResult();
    AWS_ATHENA_API GetDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The database returned.</p>
     */
    inline const Database& GetDatabase() const{ return m_database; }

    /**
     * <p>The database returned.</p>
     */
    inline void SetDatabase(const Database& value) { m_database = value; }

    /**
     * <p>The database returned.</p>
     */
    inline void SetDatabase(Database&& value) { m_database = std::move(value); }

    /**
     * <p>The database returned.</p>
     */
    inline GetDatabaseResult& WithDatabase(const Database& value) { SetDatabase(value); return *this;}

    /**
     * <p>The database returned.</p>
     */
    inline GetDatabaseResult& WithDatabase(Database&& value) { SetDatabase(std::move(value)); return *this;}

  private:

    Database m_database;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
