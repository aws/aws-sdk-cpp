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
   * <p> Result structure for list backend environments result. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBackendEnvironmentsResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API ListBackendEnvironmentsResult
  {
  public:
    ListBackendEnvironmentsResult();
    ListBackendEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListBackendEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> List of backend environments for an Amplify App. </p>
     */
    inline const Aws::Vector<BackendEnvironment>& GetBackendEnvironments() const{ return m_backendEnvironments; }

    /**
     * <p> List of backend environments for an Amplify App. </p>
     */
    inline void SetBackendEnvironments(const Aws::Vector<BackendEnvironment>& value) { m_backendEnvironments = value; }

    /**
     * <p> List of backend environments for an Amplify App. </p>
     */
    inline void SetBackendEnvironments(Aws::Vector<BackendEnvironment>&& value) { m_backendEnvironments = std::move(value); }

    /**
     * <p> List of backend environments for an Amplify App. </p>
     */
    inline ListBackendEnvironmentsResult& WithBackendEnvironments(const Aws::Vector<BackendEnvironment>& value) { SetBackendEnvironments(value); return *this;}

    /**
     * <p> List of backend environments for an Amplify App. </p>
     */
    inline ListBackendEnvironmentsResult& WithBackendEnvironments(Aws::Vector<BackendEnvironment>&& value) { SetBackendEnvironments(std::move(value)); return *this;}

    /**
     * <p> List of backend environments for an Amplify App. </p>
     */
    inline ListBackendEnvironmentsResult& AddBackendEnvironments(const BackendEnvironment& value) { m_backendEnvironments.push_back(value); return *this; }

    /**
     * <p> List of backend environments for an Amplify App. </p>
     */
    inline ListBackendEnvironmentsResult& AddBackendEnvironments(BackendEnvironment&& value) { m_backendEnvironments.push_back(std::move(value)); return *this; }


    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListBackendEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListBackendEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListBackendEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BackendEnvironment> m_backendEnvironments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
