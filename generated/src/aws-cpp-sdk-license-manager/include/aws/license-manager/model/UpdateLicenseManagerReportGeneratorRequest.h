/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/ReportContext.h>
#include <aws/license-manager/model/ReportFrequency.h>
#include <aws/license-manager/model/ReportType.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class UpdateLicenseManagerReportGeneratorRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API UpdateLicenseManagerReportGeneratorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLicenseManagerReportGenerator"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the report generator to update.</p>
     */
    inline const Aws::String& GetLicenseManagerReportGeneratorArn() const { return m_licenseManagerReportGeneratorArn; }
    inline bool LicenseManagerReportGeneratorArnHasBeenSet() const { return m_licenseManagerReportGeneratorArnHasBeenSet; }
    template<typename LicenseManagerReportGeneratorArnT = Aws::String>
    void SetLicenseManagerReportGeneratorArn(LicenseManagerReportGeneratorArnT&& value) { m_licenseManagerReportGeneratorArnHasBeenSet = true; m_licenseManagerReportGeneratorArn = std::forward<LicenseManagerReportGeneratorArnT>(value); }
    template<typename LicenseManagerReportGeneratorArnT = Aws::String>
    UpdateLicenseManagerReportGeneratorRequest& WithLicenseManagerReportGeneratorArn(LicenseManagerReportGeneratorArnT&& value) { SetLicenseManagerReportGeneratorArn(std::forward<LicenseManagerReportGeneratorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the report generator.</p>
     */
    inline const Aws::String& GetReportGeneratorName() const { return m_reportGeneratorName; }
    inline bool ReportGeneratorNameHasBeenSet() const { return m_reportGeneratorNameHasBeenSet; }
    template<typename ReportGeneratorNameT = Aws::String>
    void SetReportGeneratorName(ReportGeneratorNameT&& value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName = std::forward<ReportGeneratorNameT>(value); }
    template<typename ReportGeneratorNameT = Aws::String>
    UpdateLicenseManagerReportGeneratorRequest& WithReportGeneratorName(ReportGeneratorNameT&& value) { SetReportGeneratorName(std::forward<ReportGeneratorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of reports to generate. The following report types are supported:</p>
     * <ul> <li> <p>License configuration report - Reports the number and details of
     * consumed licenses for a license configuration.</p> </li> <li> <p>Resource report
     * - Reports the tracked licenses and resource consumption for a license
     * configuration.</p> </li> </ul>
     */
    inline const Aws::Vector<ReportType>& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::Vector<ReportType>>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::Vector<ReportType>>
    UpdateLicenseManagerReportGeneratorRequest& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& AddType(ReportType value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The report context.</p>
     */
    inline const ReportContext& GetReportContext() const { return m_reportContext; }
    inline bool ReportContextHasBeenSet() const { return m_reportContextHasBeenSet; }
    template<typename ReportContextT = ReportContext>
    void SetReportContext(ReportContextT&& value) { m_reportContextHasBeenSet = true; m_reportContext = std::forward<ReportContextT>(value); }
    template<typename ReportContextT = ReportContext>
    UpdateLicenseManagerReportGeneratorRequest& WithReportContext(ReportContextT&& value) { SetReportContext(std::forward<ReportContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Frequency by which reports are generated.</p>
     */
    inline const ReportFrequency& GetReportFrequency() const { return m_reportFrequency; }
    inline bool ReportFrequencyHasBeenSet() const { return m_reportFrequencyHasBeenSet; }
    template<typename ReportFrequencyT = ReportFrequency>
    void SetReportFrequency(ReportFrequencyT&& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = std::forward<ReportFrequencyT>(value); }
    template<typename ReportFrequencyT = ReportFrequency>
    UpdateLicenseManagerReportGeneratorRequest& WithReportFrequency(ReportFrequencyT&& value) { SetReportFrequency(std::forward<ReportFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateLicenseManagerReportGeneratorRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the report generator.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateLicenseManagerReportGeneratorRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseManagerReportGeneratorArn;
    bool m_licenseManagerReportGeneratorArnHasBeenSet = false;

    Aws::String m_reportGeneratorName;
    bool m_reportGeneratorNameHasBeenSet = false;

    Aws::Vector<ReportType> m_type;
    bool m_typeHasBeenSet = false;

    ReportContext m_reportContext;
    bool m_reportContextHasBeenSet = false;

    ReportFrequency m_reportFrequency;
    bool m_reportFrequencyHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
