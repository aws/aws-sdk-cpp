/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{
  class CreateApplicationResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API CreateApplicationResult();
    AWS_MAINFRAMEMODERNIZATION_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline CreateApplicationResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline CreateApplicationResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline CreateApplicationResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The unique application identifier.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique application identifier.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The unique application identifier.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The unique application identifier.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The unique application identifier.</p>
     */
    inline CreateApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique application identifier.</p>
     */
    inline CreateApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique application identifier.</p>
     */
    inline CreateApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The version number of the application.</p>
     */
    inline int GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p>The version number of the application.</p>
     */
    inline void SetApplicationVersion(int value) { m_applicationVersion = value; }

    /**
     * <p>The version number of the application.</p>
     */
    inline CreateApplicationResult& WithApplicationVersion(int value) { SetApplicationVersion(value); return *this;}

  private:

    Aws::String m_applicationArn;

    Aws::String m_applicationId;

    int m_applicationVersion;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
