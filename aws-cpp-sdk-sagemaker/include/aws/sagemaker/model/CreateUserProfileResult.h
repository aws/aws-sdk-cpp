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
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API CreateUserProfileResult
  {
  public:
    CreateUserProfileResult();
    CreateUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetUserProfileArn() const{ return m_userProfileArn; }

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline void SetUserProfileArn(const Aws::String& value) { m_userProfileArn = value; }

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline void SetUserProfileArn(Aws::String&& value) { m_userProfileArn = std::move(value); }

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline void SetUserProfileArn(const char* value) { m_userProfileArn.assign(value); }

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline CreateUserProfileResult& WithUserProfileArn(const Aws::String& value) { SetUserProfileArn(value); return *this;}

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline CreateUserProfileResult& WithUserProfileArn(Aws::String&& value) { SetUserProfileArn(std::move(value)); return *this;}

    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline CreateUserProfileResult& WithUserProfileArn(const char* value) { SetUserProfileArn(value); return *this;}

  private:

    Aws::String m_userProfileArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
