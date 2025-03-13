/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/BackendEnvironment.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p>The result structure of the delete backend environment result. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBackendEnvironmentResult">AWS
   * API Reference</a></p>
   */
  class DeleteBackendEnvironmentResult
  {
  public:
    AWS_AMPLIFY_API DeleteBackendEnvironmentResult() = default;
    AWS_AMPLIFY_API DeleteBackendEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API DeleteBackendEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the backend environment for an Amplify app. </p>
     */
    inline const BackendEnvironment& GetBackendEnvironment() const { return m_backendEnvironment; }
    template<typename BackendEnvironmentT = BackendEnvironment>
    void SetBackendEnvironment(BackendEnvironmentT&& value) { m_backendEnvironmentHasBeenSet = true; m_backendEnvironment = std::forward<BackendEnvironmentT>(value); }
    template<typename BackendEnvironmentT = BackendEnvironment>
    DeleteBackendEnvironmentResult& WithBackendEnvironment(BackendEnvironmentT&& value) { SetBackendEnvironment(std::forward<BackendEnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteBackendEnvironmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BackendEnvironment m_backendEnvironment;
    bool m_backendEnvironmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
