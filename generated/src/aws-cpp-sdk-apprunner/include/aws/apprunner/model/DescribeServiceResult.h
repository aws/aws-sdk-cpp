/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/Service.h>
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
namespace AppRunner
{
namespace Model
{
  class DescribeServiceResult
  {
  public:
    AWS_APPRUNNER_API DescribeServiceResult();
    AWS_APPRUNNER_API DescribeServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DescribeServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A full description of the App Runner service that you specified in this
     * request.</p>
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * <p>A full description of the App Runner service that you specified in this
     * request.</p>
     */
    inline void SetService(const Service& value) { m_service = value; }

    /**
     * <p>A full description of the App Runner service that you specified in this
     * request.</p>
     */
    inline void SetService(Service&& value) { m_service = std::move(value); }

    /**
     * <p>A full description of the App Runner service that you specified in this
     * request.</p>
     */
    inline DescribeServiceResult& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>A full description of the App Runner service that you specified in this
     * request.</p>
     */
    inline DescribeServiceResult& WithService(Service&& value) { SetService(std::move(value)); return *this;}

  private:

    Service m_service;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
