﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ActionType.h>

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
  /**
   * <p>Represents the output of a create custom action operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreateCustomActionTypeOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API CreateCustomActionTypeResult
  {
  public:
    CreateCustomActionTypeResult();
    CreateCustomActionTypeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCustomActionTypeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const ActionType& GetActionType() const{ return m_actionType; }

    
    inline void SetActionType(const ActionType& value) { m_actionType = value; }

    
    inline void SetActionType(ActionType&& value) { m_actionType = value; }

    
    inline CreateCustomActionTypeResult& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    
    inline CreateCustomActionTypeResult& WithActionType(ActionType&& value) { SetActionType(value); return *this;}

  private:
    ActionType m_actionType;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
