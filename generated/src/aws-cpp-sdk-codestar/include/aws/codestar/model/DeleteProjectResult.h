/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
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
namespace CodeStar
{
namespace Model
{
  class DeleteProjectResult
  {
  public:
    AWS_CODESTAR_API DeleteProjectResult();
    AWS_CODESTAR_API DeleteProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTAR_API DeleteProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the primary stack in AWS CloudFormation that will be deleted as
     * part of deleting the project and its resources.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackId.assign(value); }
    inline DeleteProjectResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline DeleteProjectResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline DeleteProjectResult& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deleted project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }
    inline DeleteProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline DeleteProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline DeleteProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_stackId;

    Aws::String m_projectArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
