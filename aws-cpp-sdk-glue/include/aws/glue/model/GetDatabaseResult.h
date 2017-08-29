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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Database.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetDatabaseResult
  {
  public:
    GetDatabaseResult();
    GetDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The definition of the specified database in the catalog.</p>
     */
    inline const Database& GetDatabase() const{ return m_database; }

    /**
     * <p>The definition of the specified database in the catalog.</p>
     */
    inline void SetDatabase(const Database& value) { m_database = value; }

    /**
     * <p>The definition of the specified database in the catalog.</p>
     */
    inline void SetDatabase(Database&& value) { m_database = std::move(value); }

    /**
     * <p>The definition of the specified database in the catalog.</p>
     */
    inline GetDatabaseResult& WithDatabase(const Database& value) { SetDatabase(value); return *this;}

    /**
     * <p>The definition of the specified database in the catalog.</p>
     */
    inline GetDatabaseResult& WithDatabase(Database&& value) { SetDatabase(std::move(value)); return *this;}

  private:

    Database m_database;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
