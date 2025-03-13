/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/ApplicationMaintenanceConfigurationDescription.h>
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
  class UpdateApplicationMaintenanceConfigurationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API UpdateApplicationMaintenanceConfigurationResult() = default;
    AWS_KINESISANALYTICSV2_API UpdateApplicationMaintenanceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API UpdateApplicationMaintenanceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const { return m_applicationARN; }
    template<typename ApplicationARNT = Aws::String>
    void SetApplicationARN(ApplicationARNT&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::forward<ApplicationARNT>(value); }
    template<typename ApplicationARNT = Aws::String>
    UpdateApplicationMaintenanceConfigurationResult& WithApplicationARN(ApplicationARNT&& value) { SetApplicationARN(std::forward<ApplicationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application maintenance configuration description after the update.</p>
     */
    inline const ApplicationMaintenanceConfigurationDescription& GetApplicationMaintenanceConfigurationDescription() const { return m_applicationMaintenanceConfigurationDescription; }
    template<typename ApplicationMaintenanceConfigurationDescriptionT = ApplicationMaintenanceConfigurationDescription>
    void SetApplicationMaintenanceConfigurationDescription(ApplicationMaintenanceConfigurationDescriptionT&& value) { m_applicationMaintenanceConfigurationDescriptionHasBeenSet = true; m_applicationMaintenanceConfigurationDescription = std::forward<ApplicationMaintenanceConfigurationDescriptionT>(value); }
    template<typename ApplicationMaintenanceConfigurationDescriptionT = ApplicationMaintenanceConfigurationDescription>
    UpdateApplicationMaintenanceConfigurationResult& WithApplicationMaintenanceConfigurationDescription(ApplicationMaintenanceConfigurationDescriptionT&& value) { SetApplicationMaintenanceConfigurationDescription(std::forward<ApplicationMaintenanceConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateApplicationMaintenanceConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    ApplicationMaintenanceConfigurationDescription m_applicationMaintenanceConfigurationDescription;
    bool m_applicationMaintenanceConfigurationDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
