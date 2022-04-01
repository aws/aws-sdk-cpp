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
  class AWS_SAGEMAKER_API CreateWorkteamResult
  {
  public:
    CreateWorkteamResult();
    CreateWorkteamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateWorkteamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the work team. You can use this ARN to
     * identify the work team.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team. You can use this ARN to
     * identify the work team.</p>
     */
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team. You can use this ARN to
     * identify the work team.</p>
     */
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team. You can use this ARN to
     * identify the work team.</p>
     */
    inline void SetWorkteamArn(const char* value) { m_workteamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team. You can use this ARN to
     * identify the work team.</p>
     */
    inline CreateWorkteamResult& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the work team. You can use this ARN to
     * identify the work team.</p>
     */
    inline CreateWorkteamResult& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the work team. You can use this ARN to
     * identify the work team.</p>
     */
    inline CreateWorkteamResult& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}

  private:

    Aws::String m_workteamArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
