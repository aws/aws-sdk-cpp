/**
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
    AWS_KINESISANALYTICSV2_API AddApplicationOutputResult() = default;
    AWS_KINESISANALYTICSV2_API AddApplicationOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API AddApplicationOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationARN() const { return m_applicationARN; }
    template<typename ApplicationARNT = Aws::String>
    void SetApplicationARN(ApplicationARNT&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::forward<ApplicationARNT>(value); }
    template<typename ApplicationARNT = Aws::String>
    AddApplicationOutputResult& WithApplicationARN(ApplicationARNT&& value) { SetApplicationARN(std::forward<ApplicationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated application version ID. Kinesis Data Analytics increments this ID
     * when the application is updated.</p>
     */
    inline long long GetApplicationVersionId() const { return m_applicationVersionId; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }
    inline AddApplicationOutputResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the application output configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>. </p>
     */
    inline const Aws::Vector<OutputDescription>& GetOutputDescriptions() const { return m_outputDescriptions; }
    template<typename OutputDescriptionsT = Aws::Vector<OutputDescription>>
    void SetOutputDescriptions(OutputDescriptionsT&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions = std::forward<OutputDescriptionsT>(value); }
    template<typename OutputDescriptionsT = Aws::Vector<OutputDescription>>
    AddApplicationOutputResult& WithOutputDescriptions(OutputDescriptionsT&& value) { SetOutputDescriptions(std::forward<OutputDescriptionsT>(value)); return *this;}
    template<typename OutputDescriptionsT = OutputDescription>
    AddApplicationOutputResult& AddOutputDescriptions(OutputDescriptionsT&& value) { m_outputDescriptionsHasBeenSet = true; m_outputDescriptions.emplace_back(std::forward<OutputDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddApplicationOutputResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    long long m_applicationVersionId{0};
    bool m_applicationVersionIdHasBeenSet = false;

    Aws::Vector<OutputDescription> m_outputDescriptions;
    bool m_outputDescriptionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
