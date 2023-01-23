/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/Application.h>
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
namespace EMRServerless
{
namespace Model
{
  class GetApplicationResult
  {
  public:
    AWS_EMRSERVERLESS_API GetApplicationResult();
    AWS_EMRSERVERLESS_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The output displays information about the specified application.</p>
     */
    inline const Application& GetApplication() const{ return m_application; }

    /**
     * <p>The output displays information about the specified application.</p>
     */
    inline void SetApplication(const Application& value) { m_application = value; }

    /**
     * <p>The output displays information about the specified application.</p>
     */
    inline void SetApplication(Application&& value) { m_application = std::move(value); }

    /**
     * <p>The output displays information about the specified application.</p>
     */
    inline GetApplicationResult& WithApplication(const Application& value) { SetApplication(value); return *this;}

    /**
     * <p>The output displays information about the specified application.</p>
     */
    inline GetApplicationResult& WithApplication(Application&& value) { SetApplication(std::move(value)); return *this;}

  private:

    Application m_application;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
