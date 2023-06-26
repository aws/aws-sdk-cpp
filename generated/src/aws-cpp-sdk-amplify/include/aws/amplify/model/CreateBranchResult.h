/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/Branch.h>
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
   * <p> The result structure for create branch request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBranchResult">AWS
   * API Reference</a></p>
   */
  class CreateBranchResult
  {
  public:
    AWS_AMPLIFY_API CreateBranchResult();
    AWS_AMPLIFY_API CreateBranchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API CreateBranchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Describes the branch for an Amplify app, which maps to a third-party
     * repository branch. </p>
     */
    inline const Branch& GetBranch() const{ return m_branch; }

    /**
     * <p> Describes the branch for an Amplify app, which maps to a third-party
     * repository branch. </p>
     */
    inline void SetBranch(const Branch& value) { m_branch = value; }

    /**
     * <p> Describes the branch for an Amplify app, which maps to a third-party
     * repository branch. </p>
     */
    inline void SetBranch(Branch&& value) { m_branch = std::move(value); }

    /**
     * <p> Describes the branch for an Amplify app, which maps to a third-party
     * repository branch. </p>
     */
    inline CreateBranchResult& WithBranch(const Branch& value) { SetBranch(value); return *this;}

    /**
     * <p> Describes the branch for an Amplify app, which maps to a third-party
     * repository branch. </p>
     */
    inline CreateBranchResult& WithBranch(Branch&& value) { SetBranch(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateBranchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateBranchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateBranchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Branch m_branch;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
