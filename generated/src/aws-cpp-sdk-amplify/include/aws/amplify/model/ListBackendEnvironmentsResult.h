/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/BackendEnvironment.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p>The result structure for the list backend environments result. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBackendEnvironmentsResult">AWS
   * API Reference</a></p>
   */
  class ListBackendEnvironmentsResult
  {
  public:
    AWS_AMPLIFY_API ListBackendEnvironmentsResult() = default;
    AWS_AMPLIFY_API ListBackendEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListBackendEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of backend environments for an Amplify app. </p>
     */
    inline const Aws::Vector<BackendEnvironment>& GetBackendEnvironments() const { return m_backendEnvironments; }
    template<typename BackendEnvironmentsT = Aws::Vector<BackendEnvironment>>
    void SetBackendEnvironments(BackendEnvironmentsT&& value) { m_backendEnvironmentsHasBeenSet = true; m_backendEnvironments = std::forward<BackendEnvironmentsT>(value); }
    template<typename BackendEnvironmentsT = Aws::Vector<BackendEnvironment>>
    ListBackendEnvironmentsResult& WithBackendEnvironments(BackendEnvironmentsT&& value) { SetBackendEnvironments(std::forward<BackendEnvironmentsT>(value)); return *this;}
    template<typename BackendEnvironmentsT = BackendEnvironment>
    ListBackendEnvironmentsResult& AddBackendEnvironments(BackendEnvironmentsT&& value) { m_backendEnvironmentsHasBeenSet = true; m_backendEnvironments.emplace_back(std::forward<BackendEnvironmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBackendEnvironmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBackendEnvironmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BackendEnvironment> m_backendEnvironments;
    bool m_backendEnvironmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
