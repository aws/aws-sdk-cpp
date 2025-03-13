/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/ApplicationSummary.h>
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
namespace KinesisAnalytics
{
namespace Model
{
  /**
   * <p>TBD</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CreateApplicationResponse">AWS
   * API Reference</a></p>
   */
  class CreateApplicationResult
  {
  public:
    AWS_KINESISANALYTICS_API CreateApplicationResult() = default;
    AWS_KINESISANALYTICS_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICS_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>In response to your <code>CreateApplication</code> request, Amazon Kinesis
     * Analytics returns a response with a summary of the application it created,
     * including the application Amazon Resource Name (ARN), name, and status.</p>
     */
    inline const ApplicationSummary& GetApplicationSummary() const { return m_applicationSummary; }
    template<typename ApplicationSummaryT = ApplicationSummary>
    void SetApplicationSummary(ApplicationSummaryT&& value) { m_applicationSummaryHasBeenSet = true; m_applicationSummary = std::forward<ApplicationSummaryT>(value); }
    template<typename ApplicationSummaryT = ApplicationSummary>
    CreateApplicationResult& WithApplicationSummary(ApplicationSummaryT&& value) { SetApplicationSummary(std::forward<ApplicationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationSummary m_applicationSummary;
    bool m_applicationSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
