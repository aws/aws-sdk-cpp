/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/ReferenceDataSourceDescription.h>
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
  class AddApplicationReferenceDataSourceResult
  {
  public:
    AWS_KINESISANALYTICSV2_API AddApplicationReferenceDataSourceResult() = default;
    AWS_KINESISANALYTICSV2_API AddApplicationReferenceDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API AddApplicationReferenceDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationARN() const { return m_applicationARN; }
    template<typename ApplicationARNT = Aws::String>
    void SetApplicationARN(ApplicationARNT&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::forward<ApplicationARNT>(value); }
    template<typename ApplicationARNT = Aws::String>
    AddApplicationReferenceDataSourceResult& WithApplicationARN(ApplicationARNT&& value) { SetApplicationARN(std::forward<ApplicationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated application version ID. Kinesis Data Analytics increments this ID
     * when the application is updated.</p>
     */
    inline long long GetApplicationVersionId() const { return m_applicationVersionId; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }
    inline AddApplicationReferenceDataSourceResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes reference data sources configured for the application. </p>
     */
    inline const Aws::Vector<ReferenceDataSourceDescription>& GetReferenceDataSourceDescriptions() const { return m_referenceDataSourceDescriptions; }
    template<typename ReferenceDataSourceDescriptionsT = Aws::Vector<ReferenceDataSourceDescription>>
    void SetReferenceDataSourceDescriptions(ReferenceDataSourceDescriptionsT&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions = std::forward<ReferenceDataSourceDescriptionsT>(value); }
    template<typename ReferenceDataSourceDescriptionsT = Aws::Vector<ReferenceDataSourceDescription>>
    AddApplicationReferenceDataSourceResult& WithReferenceDataSourceDescriptions(ReferenceDataSourceDescriptionsT&& value) { SetReferenceDataSourceDescriptions(std::forward<ReferenceDataSourceDescriptionsT>(value)); return *this;}
    template<typename ReferenceDataSourceDescriptionsT = ReferenceDataSourceDescription>
    AddApplicationReferenceDataSourceResult& AddReferenceDataSourceDescriptions(ReferenceDataSourceDescriptionsT&& value) { m_referenceDataSourceDescriptionsHasBeenSet = true; m_referenceDataSourceDescriptions.emplace_back(std::forward<ReferenceDataSourceDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddApplicationReferenceDataSourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    long long m_applicationVersionId{0};
    bool m_applicationVersionIdHasBeenSet = false;

    Aws::Vector<ReferenceDataSourceDescription> m_referenceDataSourceDescriptions;
    bool m_referenceDataSourceDescriptionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
