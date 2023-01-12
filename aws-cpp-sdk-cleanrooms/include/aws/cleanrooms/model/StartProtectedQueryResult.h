/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQuery.h>
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
namespace CleanRooms
{
namespace Model
{
  class StartProtectedQueryResult
  {
  public:
    AWS_CLEANROOMS_API StartProtectedQueryResult();
    AWS_CLEANROOMS_API StartProtectedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API StartProtectedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The protected query.</p>
     */
    inline const ProtectedQuery& GetProtectedQuery() const{ return m_protectedQuery; }

    /**
     * <p>The protected query.</p>
     */
    inline void SetProtectedQuery(const ProtectedQuery& value) { m_protectedQuery = value; }

    /**
     * <p>The protected query.</p>
     */
    inline void SetProtectedQuery(ProtectedQuery&& value) { m_protectedQuery = std::move(value); }

    /**
     * <p>The protected query.</p>
     */
    inline StartProtectedQueryResult& WithProtectedQuery(const ProtectedQuery& value) { SetProtectedQuery(value); return *this;}

    /**
     * <p>The protected query.</p>
     */
    inline StartProtectedQueryResult& WithProtectedQuery(ProtectedQuery&& value) { SetProtectedQuery(std::move(value)); return *this;}

  private:

    ProtectedQuery m_protectedQuery;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
