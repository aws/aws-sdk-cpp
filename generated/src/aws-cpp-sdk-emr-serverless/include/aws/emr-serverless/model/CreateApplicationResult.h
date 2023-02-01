/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{
  class CreateApplicationResult
  {
  public:
    AWS_EMRSERVERLESS_API CreateApplicationResult();
    AWS_EMRSERVERLESS_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The output contains the application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The output contains the application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The output contains the application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The output contains the application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The output contains the application ID.</p>
     */
    inline CreateApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The output contains the application ID.</p>
     */
    inline CreateApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The output contains the application ID.</p>
     */
    inline CreateApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The output contains the name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The output contains the name of the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The output contains the name of the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The output contains the name of the application.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The output contains the name of the application.</p>
     */
    inline CreateApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The output contains the name of the application.</p>
     */
    inline CreateApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The output contains the name of the application.</p>
     */
    inline CreateApplicationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The output contains the ARN of the application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The output contains the ARN of the application.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The output contains the ARN of the application.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The output contains the ARN of the application.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The output contains the ARN of the application.</p>
     */
    inline CreateApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The output contains the ARN of the application.</p>
     */
    inline CreateApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The output contains the ARN of the application.</p>
     */
    inline CreateApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_name;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
