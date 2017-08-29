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
  class AWS_ATHENA_API CreateNamedQueryResult
  {
  public:
    CreateNamedQueryResult();
    CreateNamedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateNamedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
