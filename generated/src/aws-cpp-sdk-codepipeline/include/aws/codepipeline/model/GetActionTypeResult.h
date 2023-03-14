/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ActionTypeDeclaration.h>
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
namespace CodePipeline
{
namespace Model
{
  class GetActionTypeResult
  {
  public:
    AWS_CODEPIPELINE_API GetActionTypeResult();
    AWS_CODEPIPELINE_API GetActionTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API GetActionTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The action type information for the requested action type, such as the action
     * type ID.</p>
     */
    inline const ActionTypeDeclaration& GetActionType() const{ return m_actionType; }

    /**
     * <p>The action type information for the requested action type, such as the action
     * type ID.</p>
     */
    inline void SetActionType(const ActionTypeDeclaration& value) { m_actionType = value; }

    /**
     * <p>The action type information for the requested action type, such as the action
     * type ID.</p>
     */
    inline void SetActionType(ActionTypeDeclaration&& value) { m_actionType = std::move(value); }

    /**
     * <p>The action type information for the requested action type, such as the action
     * type ID.</p>
     */
    inline GetActionTypeResult& WithActionType(const ActionTypeDeclaration& value) { SetActionType(value); return *this;}

    /**
     * <p>The action type information for the requested action type, such as the action
     * type ID.</p>
     */
    inline GetActionTypeResult& WithActionType(ActionTypeDeclaration&& value) { SetActionType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetActionTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetActionTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetActionTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ActionTypeDeclaration m_actionType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
