﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/Branch.h>
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
   * <p> The result structure for the update branch request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateBranchResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API UpdateBranchResult
  {
  public:
    UpdateBranchResult();
    UpdateBranchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateBranchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The branch for an Amplify app, which maps to a third-party repository
     * branch. </p>
     */
    inline const Branch& GetBranch() const{ return m_branch; }

    /**
     * <p> The branch for an Amplify app, which maps to a third-party repository
     * branch. </p>
     */
    inline void SetBranch(const Branch& value) { m_branch = value; }

    /**
     * <p> The branch for an Amplify app, which maps to a third-party repository
     * branch. </p>
     */
    inline void SetBranch(Branch&& value) { m_branch = std::move(value); }

    /**
     * <p> The branch for an Amplify app, which maps to a third-party repository
     * branch. </p>
     */
    inline UpdateBranchResult& WithBranch(const Branch& value) { SetBranch(value); return *this;}

    /**
     * <p> The branch for an Amplify app, which maps to a third-party repository
     * branch. </p>
     */
    inline UpdateBranchResult& WithBranch(Branch&& value) { SetBranch(std::move(value)); return *this;}

  private:

    Branch m_branch;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
