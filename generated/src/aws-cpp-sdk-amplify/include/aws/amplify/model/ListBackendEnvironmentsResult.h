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
    AWS_AMPLIFY_API ListBackendEnvironmentsResult();
    AWS_AMPLIFY_API ListBackendEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListBackendEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of backend environments for an Amplify app. </p>
     */
    inline const Aws::Vector<BackendEnvironment>& GetBackendEnvironments() const{ return m_backendEnvironments; }
    inline void SetBackendEnvironments(const Aws::Vector<BackendEnvironment>& value) { m_backendEnvironments = value; }
    inline void SetBackendEnvironments(Aws::Vector<BackendEnvironment>&& value) { m_backendEnvironments = std::move(value); }
    inline ListBackendEnvironmentsResult& WithBackendEnvironments(const Aws::Vector<BackendEnvironment>& value) { SetBackendEnvironments(value); return *this;}
    inline ListBackendEnvironmentsResult& WithBackendEnvironments(Aws::Vector<BackendEnvironment>&& value) { SetBackendEnvironments(std::move(value)); return *this;}
    inline ListBackendEnvironmentsResult& AddBackendEnvironments(const BackendEnvironment& value) { m_backendEnvironments.push_back(value); return *this; }
    inline ListBackendEnvironmentsResult& AddBackendEnvironments(BackendEnvironment&& value) { m_backendEnvironments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBackendEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBackendEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBackendEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBackendEnvironmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBackendEnvironmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBackendEnvironmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BackendEnvironment> m_backendEnvironments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
