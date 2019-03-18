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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CognitoMemberDefinition.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines the Amazon Cognito user group that is part of a work
   * team.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MemberDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MemberDefinition
  {
  public:
    MemberDefinition();
    MemberDefinition(Aws::Utils::Json::JsonView jsonValue);
    MemberDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Cognito user group that is part of the work team.</p>
     */
    inline const CognitoMemberDefinition& GetCognitoMemberDefinition() const{ return m_cognitoMemberDefinition; }

    /**
     * <p>The Amazon Cognito user group that is part of the work team.</p>
     */
    inline bool CognitoMemberDefinitionHasBeenSet() const { return m_cognitoMemberDefinitionHasBeenSet; }

    /**
     * <p>The Amazon Cognito user group that is part of the work team.</p>
     */
    inline void SetCognitoMemberDefinition(const CognitoMemberDefinition& value) { m_cognitoMemberDefinitionHasBeenSet = true; m_cognitoMemberDefinition = value; }

    /**
     * <p>The Amazon Cognito user group that is part of the work team.</p>
     */
    inline void SetCognitoMemberDefinition(CognitoMemberDefinition&& value) { m_cognitoMemberDefinitionHasBeenSet = true; m_cognitoMemberDefinition = std::move(value); }

    /**
     * <p>The Amazon Cognito user group that is part of the work team.</p>
     */
    inline MemberDefinition& WithCognitoMemberDefinition(const CognitoMemberDefinition& value) { SetCognitoMemberDefinition(value); return *this;}

    /**
     * <p>The Amazon Cognito user group that is part of the work team.</p>
     */
    inline MemberDefinition& WithCognitoMemberDefinition(CognitoMemberDefinition&& value) { SetCognitoMemberDefinition(std::move(value)); return *this;}

  private:

    CognitoMemberDefinition m_cognitoMemberDefinition;
    bool m_cognitoMemberDefinitionHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
