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
    AWS_AMPLIFY_API DeleteBackendEnvironmentResult();
    AWS_AMPLIFY_API DeleteBackendEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API DeleteBackendEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the backend environment for an Amplify app. </p>
     */
    inline const BackendEnvironment& GetBackendEnvironment() const{ return m_backendEnvironment; }

    /**
     * <p>Describes the backend environment for an Amplify app. </p>
     */
    inline void SetBackendEnvironment(const BackendEnvironment& value) { m_backendEnvironment = value; }

    /**
     * <p>Describes the backend environment for an Amplify app. </p>
     */
    inline void SetBackendEnvironment(BackendEnvironment&& value) { m_backendEnvironment = std::move(value); }

    /**
     * <p>Describes the backend environment for an Amplify app. </p>
     */
    inline DeleteBackendEnvironmentResult& WithBackendEnvironment(const BackendEnvironment& value) { SetBackendEnvironment(value); return *this;}

    /**
     * <p>Describes the backend environment for an Amplify app. </p>
     */
    inline DeleteBackendEnvironmentResult& WithBackendEnvironment(BackendEnvironment&& value) { SetBackendEnvironment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteBackendEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteBackendEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteBackendEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BackendEnvironment m_backendEnvironment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
