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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a DeleteGitHubAccountToken operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeleteGitHubAccountTokenOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API DeleteGitHubAccountTokenResult
  {
  public:
    DeleteGitHubAccountTokenResult();
    DeleteGitHubAccountTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteGitHubAccountTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the GitHub account connection that was deleted.</p>
     */
    inline const Aws::String& GetTokenName() const{ return m_tokenName; }

    /**
     * <p>The name of the GitHub account connection that was deleted.</p>
     */
    inline void SetTokenName(const Aws::String& value) { m_tokenName = value; }

    /**
     * <p>The name of the GitHub account connection that was deleted.</p>
     */
    inline void SetTokenName(Aws::String&& value) { m_tokenName = std::move(value); }

    /**
     * <p>The name of the GitHub account connection that was deleted.</p>
     */
    inline void SetTokenName(const char* value) { m_tokenName.assign(value); }

    /**
     * <p>The name of the GitHub account connection that was deleted.</p>
     */
    inline DeleteGitHubAccountTokenResult& WithTokenName(const Aws::String& value) { SetTokenName(value); return *this;}

    /**
     * <p>The name of the GitHub account connection that was deleted.</p>
     */
    inline DeleteGitHubAccountTokenResult& WithTokenName(Aws::String&& value) { SetTokenName(std::move(value)); return *this;}

    /**
     * <p>The name of the GitHub account connection that was deleted.</p>
     */
    inline DeleteGitHubAccountTokenResult& WithTokenName(const char* value) { SetTokenName(value); return *this;}

  private:

    Aws::String m_tokenName;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
