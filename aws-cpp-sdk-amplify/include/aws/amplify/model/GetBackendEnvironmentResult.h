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
   * <p> Result structure for get backend environment result. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBackendEnvironmentResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API GetBackendEnvironmentResult
  {
  public:
    GetBackendEnvironmentResult();
    GetBackendEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBackendEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Backend environment structure for an an Amplify App. </p>
     */
    inline const BackendEnvironment& GetBackendEnvironment() const{ return m_backendEnvironment; }

    /**
     * <p> Backend environment structure for an an Amplify App. </p>
     */
    inline void SetBackendEnvironment(const BackendEnvironment& value) { m_backendEnvironment = value; }

    /**
     * <p> Backend environment structure for an an Amplify App. </p>
     */
    inline void SetBackendEnvironment(BackendEnvironment&& value) { m_backendEnvironment = std::move(value); }

    /**
     * <p> Backend environment structure for an an Amplify App. </p>
     */
    inline GetBackendEnvironmentResult& WithBackendEnvironment(const BackendEnvironment& value) { SetBackendEnvironment(value); return *this;}

    /**
     * <p> Backend environment structure for an an Amplify App. </p>
     */
    inline GetBackendEnvironmentResult& WithBackendEnvironment(BackendEnvironment&& value) { SetBackendEnvironment(std::move(value)); return *this;}

  private:

    BackendEnvironment m_backendEnvironment;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
