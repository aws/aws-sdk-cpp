/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{
  class CreateEnvironmentResult
  {
  public:
    AWS_FINSPACE_API CreateEnvironmentResult();
    AWS_FINSPACE_API CreateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API CreateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for FinSpace environment that you created.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier for FinSpace environment that you created.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>The unique identifier for FinSpace environment that you created.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier for FinSpace environment that you created.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>The unique identifier for FinSpace environment that you created.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier for FinSpace environment that you created.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for FinSpace environment that you created.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the FinSpace environment that you
     * created.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the FinSpace environment that you
     * created.</p>
     */
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the FinSpace environment that you
     * created.</p>
     */
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the FinSpace environment that you
     * created.</p>
     */
    inline void SetEnvironmentArn(const char* value) { m_environmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the FinSpace environment that you
     * created.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the FinSpace environment that you
     * created.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the FinSpace environment that you
     * created.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}


    /**
     * <p>The sign-in url for the web application of the FinSpace environment you
     * created.</p>
     */
    inline const Aws::String& GetEnvironmentUrl() const{ return m_environmentUrl; }

    /**
     * <p>The sign-in url for the web application of the FinSpace environment you
     * created.</p>
     */
    inline void SetEnvironmentUrl(const Aws::String& value) { m_environmentUrl = value; }

    /**
     * <p>The sign-in url for the web application of the FinSpace environment you
     * created.</p>
     */
    inline void SetEnvironmentUrl(Aws::String&& value) { m_environmentUrl = std::move(value); }

    /**
     * <p>The sign-in url for the web application of the FinSpace environment you
     * created.</p>
     */
    inline void SetEnvironmentUrl(const char* value) { m_environmentUrl.assign(value); }

    /**
     * <p>The sign-in url for the web application of the FinSpace environment you
     * created.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentUrl(const Aws::String& value) { SetEnvironmentUrl(value); return *this;}

    /**
     * <p>The sign-in url for the web application of the FinSpace environment you
     * created.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentUrl(Aws::String&& value) { SetEnvironmentUrl(std::move(value)); return *this;}

    /**
     * <p>The sign-in url for the web application of the FinSpace environment you
     * created.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentUrl(const char* value) { SetEnvironmentUrl(value); return *this;}

  private:

    Aws::String m_environmentId;

    Aws::String m_environmentArn;

    Aws::String m_environmentUrl;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
