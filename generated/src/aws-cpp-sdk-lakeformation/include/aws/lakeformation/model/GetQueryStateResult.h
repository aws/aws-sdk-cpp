﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/QueryStateString.h>
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
namespace LakeFormation
{
namespace Model
{
  /**
   * <p>A structure for the output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetQueryStateResponse">AWS
   * API Reference</a></p>
   */
  class GetQueryStateResult
  {
  public:
    AWS_LAKEFORMATION_API GetQueryStateResult();
    AWS_LAKEFORMATION_API GetQueryStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetQueryStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An error message when the operation fails.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline void SetError(const Aws::String& value) { m_error = value; }
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }
    inline void SetError(const char* value) { m_error.assign(value); }
    inline GetQueryStateResult& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline GetQueryStateResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline GetQueryStateResult& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a query previously submitted. The possible states are:</p> <ul>
     * <li> <p>PENDING: the query is pending.</p> </li> <li> <p>WORKUNITS_AVAILABLE:
     * some work units are ready for retrieval and execution.</p> </li> <li>
     * <p>FINISHED: the query planning finished successfully, and all work units are
     * ready for retrieval and execution.</p> </li> <li> <p>ERROR: an error occurred
     * with the query, such as an invalid query ID or a backend error.</p> </li> </ul>
     */
    inline const QueryStateString& GetState() const{ return m_state; }
    inline void SetState(const QueryStateString& value) { m_state = value; }
    inline void SetState(QueryStateString&& value) { m_state = std::move(value); }
    inline GetQueryStateResult& WithState(const QueryStateString& value) { SetState(value); return *this;}
    inline GetQueryStateResult& WithState(QueryStateString&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueryStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueryStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueryStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_error;

    QueryStateString m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
