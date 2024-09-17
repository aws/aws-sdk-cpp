/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class DeleteApplicationInputProcessingConfigurationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API DeleteApplicationInputProcessingConfigurationResult();
    AWS_KINESISANALYTICSV2_API DeleteApplicationInputProcessingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DeleteApplicationInputProcessingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }
    inline DeleteApplicationInputProcessingConfigurationResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}
    inline DeleteApplicationInputProcessingConfigurationResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}
    inline DeleteApplicationInputProcessingConfigurationResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current application version ID.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }
    inline DeleteApplicationInputProcessingConfigurationResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteApplicationInputProcessingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteApplicationInputProcessingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteApplicationInputProcessingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
