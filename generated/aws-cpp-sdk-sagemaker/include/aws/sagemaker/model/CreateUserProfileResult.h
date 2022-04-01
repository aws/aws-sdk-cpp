﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
