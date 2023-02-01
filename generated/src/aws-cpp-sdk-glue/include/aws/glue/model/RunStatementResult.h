/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
  class RunStatementResult
  {
  public:
    AWS_GLUE_API RunStatementResult();
    AWS_GLUE_API RunStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API RunStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the Id of the statement that was run.</p>
     */
    inline int GetId() const{ return m_id; }

    /**
     * <p>Returns the Id of the statement that was run.</p>
     */
    inline void SetId(int value) { m_id = value; }

    /**
     * <p>Returns the Id of the statement that was run.</p>
     */
    inline RunStatementResult& WithId(int value) { SetId(value); return *this;}

  private:

    int m_id;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
