﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
  class AWS_SAGEMAKER_API DeleteWorkteamResult
  {
  public:
    DeleteWorkteamResult();
    DeleteWorkteamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteWorkteamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns <code>true</code> if the work team was successfully deleted;
     * otherwise, returns <code>false</code>.</p>
     */
    inline bool GetSuccess() const{ return m_success; }

    /**
     * <p>Returns <code>true</code> if the work team was successfully deleted;
     * otherwise, returns <code>false</code>.</p>
     */
    inline void SetSuccess(bool value) { m_success = value; }

    /**
     * <p>Returns <code>true</code> if the work team was successfully deleted;
     * otherwise, returns <code>false</code>.</p>
     */
    inline DeleteWorkteamResult& WithSuccess(bool value) { SetSuccess(value); return *this;}

  private:

    bool m_success;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
