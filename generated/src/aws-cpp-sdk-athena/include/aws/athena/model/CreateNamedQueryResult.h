/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{
  class CreateNamedQueryResult
  {
  public:
    AWS_ATHENA_API CreateNamedQueryResult();
    AWS_ATHENA_API CreateNamedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API CreateNamedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the query.</p>
     */
    inline const Aws::String& GetNamedQueryId() const{ return m_namedQueryId; }

    /**
     * <p>The unique ID of the query.</p>
     */
    inline void SetNamedQueryId(const Aws::String& value) { m_namedQueryId = value; }

    /**
     * <p>The unique ID of the query.</p>
     */
    inline void SetNamedQueryId(Aws::String&& value) { m_namedQueryId = std::move(value); }

    /**
     * <p>The unique ID of the query.</p>
     */
    inline void SetNamedQueryId(const char* value) { m_namedQueryId.assign(value); }

    /**
     * <p>The unique ID of the query.</p>
     */
    inline CreateNamedQueryResult& WithNamedQueryId(const Aws::String& value) { SetNamedQueryId(value); return *this;}

    /**
     * <p>The unique ID of the query.</p>
     */
    inline CreateNamedQueryResult& WithNamedQueryId(Aws::String&& value) { SetNamedQueryId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the query.</p>
     */
    inline CreateNamedQueryResult& WithNamedQueryId(const char* value) { SetNamedQueryId(value); return *this;}

  private:

    Aws::String m_namedQueryId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
