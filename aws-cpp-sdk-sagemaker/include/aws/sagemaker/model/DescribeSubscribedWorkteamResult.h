﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/SubscribedWorkteam.h>
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
  class AWS_SAGEMAKER_API DescribeSubscribedWorkteamResult
  {
  public:
    DescribeSubscribedWorkteamResult();
    DescribeSubscribedWorkteamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSubscribedWorkteamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>Workteam</code> instance that contains information about the work
     * team.</p>
     */
    inline const SubscribedWorkteam& GetSubscribedWorkteam() const{ return m_subscribedWorkteam; }

    /**
     * <p>A <code>Workteam</code> instance that contains information about the work
     * team.</p>
     */
    inline void SetSubscribedWorkteam(const SubscribedWorkteam& value) { m_subscribedWorkteam = value; }

    /**
     * <p>A <code>Workteam</code> instance that contains information about the work
     * team.</p>
     */
    inline void SetSubscribedWorkteam(SubscribedWorkteam&& value) { m_subscribedWorkteam = std::move(value); }

    /**
     * <p>A <code>Workteam</code> instance that contains information about the work
     * team.</p>
     */
    inline DescribeSubscribedWorkteamResult& WithSubscribedWorkteam(const SubscribedWorkteam& value) { SetSubscribedWorkteam(value); return *this;}

    /**
     * <p>A <code>Workteam</code> instance that contains information about the work
     * team.</p>
     */
    inline DescribeSubscribedWorkteamResult& WithSubscribedWorkteam(SubscribedWorkteam&& value) { SetSubscribedWorkteam(std::move(value)); return *this;}

  private:

    SubscribedWorkteam m_subscribedWorkteam;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
