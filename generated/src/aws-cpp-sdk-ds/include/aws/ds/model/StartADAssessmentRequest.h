/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/ds/model/AssessmentConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class StartADAssessmentRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API StartADAssessmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartADAssessment"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Configuration parameters for the directory assessment, including DNS server
     * information, domain name, Amazon VPC subnet, and Amazon Web Services System
     * Manager managed node details.</p>
     */
    inline const AssessmentConfiguration& GetAssessmentConfiguration() const { return m_assessmentConfiguration; }
    inline bool AssessmentConfigurationHasBeenSet() const { return m_assessmentConfigurationHasBeenSet; }
    template<typename AssessmentConfigurationT = AssessmentConfiguration>
    void SetAssessmentConfiguration(AssessmentConfigurationT&& value) { m_assessmentConfigurationHasBeenSet = true; m_assessmentConfiguration = std::forward<AssessmentConfigurationT>(value); }
    template<typename AssessmentConfigurationT = AssessmentConfiguration>
    StartADAssessmentRequest& WithAssessmentConfiguration(AssessmentConfigurationT&& value) { SetAssessmentConfiguration(std::forward<AssessmentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory for which to perform the assessment. This
     * should be an existing directory. If the assessment is not for an existing
     * directory, this parameter should be omitted.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    StartADAssessmentRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}
  private:

    AssessmentConfiguration m_assessmentConfiguration;
    bool m_assessmentConfigurationHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
