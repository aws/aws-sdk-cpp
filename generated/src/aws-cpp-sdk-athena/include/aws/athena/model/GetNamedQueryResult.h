/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetNamedQueryResult
  {
  public:
    AWS_ATHENA_API GetNamedQueryResult();
    AWS_ATHENA_API GetNamedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetNamedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
