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
    AWS_LICENSEMANAGER_API UpdateLicenseManagerReportGeneratorRequest();

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
    inline const Aws::String& GetLicenseManagerReportGeneratorArn() const{ return m_licenseManagerReportGeneratorArn; }
    inline bool LicenseManagerReportGeneratorArnHasBeenSet() const { return m_licenseManagerReportGeneratorArnHasBeenSet; }
    inline void SetLicenseManagerReportGeneratorArn(const Aws::String& value) { m_licenseManagerReportGeneratorArnHasBeenSet = true; m_licenseManagerReportGeneratorArn = value; }
    inline void SetLicenseManagerReportGeneratorArn(Aws::String&& value) { m_licenseManagerReportGeneratorArnHasBeenSet = true; m_licenseManagerReportGeneratorArn = std::move(value); }
    inline void SetLicenseManagerReportGeneratorArn(const char* value) { m_licenseManagerReportGeneratorArnHasBeenSet = true; m_licenseManagerReportGeneratorArn.assign(value); }
    inline UpdateLicenseManagerReportGeneratorRequest& WithLicenseManagerReportGeneratorArn(const Aws::String& value) { SetLicenseManagerReportGeneratorArn(value); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithLicenseManagerReportGeneratorArn(Aws::String&& value) { SetLicenseManagerReportGeneratorArn(std::move(value)); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithLicenseManagerReportGeneratorArn(const char* value) { SetLicenseManagerReportGeneratorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the report generator.</p>
     */
    inline const Aws::String& GetReportGeneratorName() const{ return m_reportGeneratorName; }
    inline bool ReportGeneratorNameHasBeenSet() const { return m_reportGeneratorNameHasBeenSet; }
    inline void SetReportGeneratorName(const Aws::String& value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName = value; }
    inline void SetReportGeneratorName(Aws::String&& value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName = std::move(value); }
    inline void SetReportGeneratorName(const char* value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName.assign(value); }
    inline UpdateLicenseManagerReportGeneratorRequest& WithReportGeneratorName(const Aws::String& value) { SetReportGeneratorName(value); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithReportGeneratorName(Aws::String&& value) { SetReportGeneratorName(std::move(value)); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithReportGeneratorName(const char* value) { SetReportGeneratorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of reports to generate. The following report types are supported:</p>
     * <ul> <li> <p>License configuration report - Reports the number and details of
     * consumed licenses for a license configuration.</p> </li> <li> <p>Resource report
     * - Reports the tracked licenses and resource consumption for a license
     * configuration.</p> </li> </ul>
     */
    inline const Aws::Vector<ReportType>& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::Vector<ReportType>& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::Vector<ReportType>&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UpdateLicenseManagerReportGeneratorRequest& WithType(const Aws::Vector<ReportType>& value) { SetType(value); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithType(Aws::Vector<ReportType>&& value) { SetType(std::move(value)); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& AddType(const ReportType& value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }
    inline UpdateLicenseManagerReportGeneratorRequest& AddType(ReportType&& value) { m_typeHasBeenSet = true; m_type.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The report context.</p>
     */
    inline const ReportContext& GetReportContext() const{ return m_reportContext; }
    inline bool ReportContextHasBeenSet() const { return m_reportContextHasBeenSet; }
    inline void SetReportContext(const ReportContext& value) { m_reportContextHasBeenSet = true; m_reportContext = value; }
    inline void SetReportContext(ReportContext&& value) { m_reportContextHasBeenSet = true; m_reportContext = std::move(value); }
    inline UpdateLicenseManagerReportGeneratorRequest& WithReportContext(const ReportContext& value) { SetReportContext(value); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithReportContext(ReportContext&& value) { SetReportContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Frequency by which reports are generated.</p>
     */
    inline const ReportFrequency& GetReportFrequency() const{ return m_reportFrequency; }
    inline bool ReportFrequencyHasBeenSet() const { return m_reportFrequencyHasBeenSet; }
    inline void SetReportFrequency(const ReportFrequency& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = value; }
    inline void SetReportFrequency(ReportFrequency&& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = std::move(value); }
    inline UpdateLicenseManagerReportGeneratorRequest& WithReportFrequency(const ReportFrequency& value) { SetReportFrequency(value); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithReportFrequency(ReportFrequency&& value) { SetReportFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateLicenseManagerReportGeneratorRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the report generator.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateLicenseManagerReportGeneratorRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateLicenseManagerReportGeneratorRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
