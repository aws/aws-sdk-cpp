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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/NamedQuery.h>
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
  class AWS_ATHENA_API GetNamedQueryResult
  {
  public:
    GetNamedQueryResult();
    GetNamedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetNamedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the query.</p>
     */
    inline const NamedQuery& GetNamedQuery() const{ return m_namedQuery; }

    /**
     * <p>Information about the query.</p>
     */
    inline void SetNamedQuery(const NamedQuery& value) { m_namedQuery = value; }

    /**
     * <p>Information about the query.</p>
     */
    inline void SetNamedQuery(NamedQuery&& value) { m_namedQuery = std::move(value); }

    /**
     * <p>Information about the query.</p>
     */
    inline GetNamedQueryResult& WithNamedQuery(const NamedQuery& value) { SetNamedQuery(value); return *this;}

    /**
     * <p>Information about the query.</p>
     */
    inline GetNamedQueryResult& WithNamedQuery(NamedQuery&& value) { SetNamedQuery(std::move(value)); return *this;}

  private:

    NamedQuery m_namedQuery;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
