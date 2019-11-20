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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{
  class AWS_CODECOMMIT_API GetPullRequestOverrideStateResult
  {
  public:
    GetPullRequestOverrideStateResult();
    GetPullRequestOverrideStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPullRequestOverrideStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A Boolean value that indicates whether a pull request has had its rules set
     * aside (TRUE) or whether all approval rules still apply (FALSE).</p>
     */
    inline bool GetOverridden() const{ return m_overridden; }

    /**
     * <p>A Boolean value that indicates whether a pull request has had its rules set
     * aside (TRUE) or whether all approval rules still apply (FALSE).</p>
     */
    inline void SetOverridden(bool value) { m_overridden = value; }

    /**
     * <p>A Boolean value that indicates whether a pull request has had its rules set
     * aside (TRUE) or whether all approval rules still apply (FALSE).</p>
     */
    inline GetPullRequestOverrideStateResult& WithOverridden(bool value) { SetOverridden(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user or identity that overrode the
     * rules and their requirements for the pull request.</p>
     */
    inline const Aws::String& GetOverrider() const{ return m_overrider; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user or identity that overrode the
     * rules and their requirements for the pull request.</p>
     */
    inline void SetOverrider(const Aws::String& value) { m_overrider = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user or identity that overrode the
     * rules and their requirements for the pull request.</p>
     */
    inline void SetOverrider(Aws::String&& value) { m_overrider = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user or identity that overrode the
     * rules and their requirements for the pull request.</p>
     */
    inline void SetOverrider(const char* value) { m_overrider.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user or identity that overrode the
     * rules and their requirements for the pull request.</p>
     */
    inline GetPullRequestOverrideStateResult& WithOverrider(const Aws::String& value) { SetOverrider(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user or identity that overrode the
     * rules and their requirements for the pull request.</p>
     */
    inline GetPullRequestOverrideStateResult& WithOverrider(Aws::String&& value) { SetOverrider(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user or identity that overrode the
     * rules and their requirements for the pull request.</p>
     */
    inline GetPullRequestOverrideStateResult& WithOverrider(const char* value) { SetOverrider(value); return *this;}

  private:

    bool m_overridden;

    Aws::String m_overrider;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
