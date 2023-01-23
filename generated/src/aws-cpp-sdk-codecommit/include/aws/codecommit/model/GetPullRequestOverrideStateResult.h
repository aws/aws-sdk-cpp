/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetPullRequestOverrideStateResult
  {
  public:
    AWS_CODECOMMIT_API GetPullRequestOverrideStateResult();
    AWS_CODECOMMIT_API GetPullRequestOverrideStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetPullRequestOverrideStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
