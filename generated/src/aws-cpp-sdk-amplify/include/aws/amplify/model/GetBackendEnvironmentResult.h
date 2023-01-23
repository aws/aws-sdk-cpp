/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> The result structure for the get backend environment result. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBackendEnvironmentResult">AWS
   * API Reference</a></p>
   */
  class GetBackendEnvironmentResult
  {
  public:
    AWS_AMPLIFY_API GetBackendEnvironmentResult();
    AWS_AMPLIFY_API GetBackendEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API GetBackendEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Describes the backend environment for an Amplify app. </p>
     */
    inline const BackendEnvironment& GetBackendEnvironment() const{ return m_backendEnvironment; }

    /**
     * <p> Describes the backend environment for an Amplify app. </p>
     */
    inline void SetBackendEnvironment(const BackendEnvironment& value) { m_backendEnvironment = value; }

    /**
     * <p> Describes the backend environment for an Amplify app. </p>
     */
    inline void SetBackendEnvironment(BackendEnvironment&& value) { m_backendEnvironment = std::move(value); }

    /**
     * <p> Describes the backend environment for an Amplify app. </p>
     */
    inline GetBackendEnvironmentResult& WithBackendEnvironment(const BackendEnvironment& value) { SetBackendEnvironment(value); return *this;}

    /**
     * <p> Describes the backend environment for an Amplify app. </p>
     */
    inline GetBackendEnvironmentResult& WithBackendEnvironment(BackendEnvironment&& value) { SetBackendEnvironment(std::move(value)); return *this;}

  private:

    BackendEnvironment m_backendEnvironment;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
