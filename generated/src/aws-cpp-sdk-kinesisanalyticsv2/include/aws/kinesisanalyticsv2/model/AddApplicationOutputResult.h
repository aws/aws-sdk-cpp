﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/OutputDescription.h>
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
  class AddApplicationOutputResult
  {
  public:
    AWS_KINESISANALYTICSV2_API AddApplicationOutputResult();
    AWS_KINESISANALYTICSV2_API AddApplicationOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API AddApplicationOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }
    inline AddApplicationOutputResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}
    inline AddApplicationOutputResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}
    inline AddApplicationOutputResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated application version ID. Kinesis Data Analytics increments this ID
     * when the application is updated.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }
    inline AddApplicationOutputResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline const Aws::Vector<OutputDescription>& GetOutputDescriptions() const{ return m_outputDescriptions; }
    inline void SetOutputDescriptions(const Aws::Vector<OutputDescription>& value) { m_outputDescriptions = value; }
    inline void SetOutputDescriptions(Aws::Vector<OutputDescription>&& value) { m_outputDescriptions = std::move(value); }
    inline AddApplicationOutputResult& WithOutputDescriptions(const Aws::Vector<OutputDescription>& value) { SetOutputDescriptions(value); return *this;}
    inline AddApplicationOutputResult& WithOutputDescriptions(Aws::Vector<OutputDescription>&& value) { SetOutputDescriptions(std::move(value)); return *this;}
    inline AddApplicationOutputResult& AddOutputDescriptions(const OutputDescription& value) { m_outputDescriptions.push_back(value); return *this; }
    inline AddApplicationOutputResult& AddOutputDescriptions(OutputDescription&& value) { m_outputDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddApplicationOutputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddApplicationOutputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddApplicationOutputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    Aws::Vector<OutputDescription> m_outputDescriptions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
