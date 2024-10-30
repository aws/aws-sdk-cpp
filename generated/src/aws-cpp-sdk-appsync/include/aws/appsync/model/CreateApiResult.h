/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/Api.h>
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
namespace AppSync
{
namespace Model
{
  class CreateApiResult
  {
  public:
    AWS_APPSYNC_API CreateApiResult();
    AWS_APPSYNC_API CreateApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API CreateApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>Api</code> object.</p>
     */
    inline const Api& GetApi() const{ return m_api; }
    inline void SetApi(const Api& value) { m_api = value; }
    inline void SetApi(Api&& value) { m_api = std::move(value); }
    inline CreateApiResult& WithApi(const Api& value) { SetApi(value); return *this;}
    inline CreateApiResult& WithApi(Api&& value) { SetApi(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateApiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateApiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateApiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Api m_api;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
