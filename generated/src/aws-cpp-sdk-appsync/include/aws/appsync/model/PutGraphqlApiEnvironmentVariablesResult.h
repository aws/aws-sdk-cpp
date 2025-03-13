/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class PutGraphqlApiEnvironmentVariablesResult
  {
  public:
    AWS_APPSYNC_API PutGraphqlApiEnvironmentVariablesResult() = default;
    AWS_APPSYNC_API PutGraphqlApiEnvironmentVariablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API PutGraphqlApiEnvironmentVariablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The payload containing each environmental variable in the <code>"key" :
     * "value"</code> format.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    PutGraphqlApiEnvironmentVariablesResult& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    PutGraphqlApiEnvironmentVariablesResult& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutGraphqlApiEnvironmentVariablesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
