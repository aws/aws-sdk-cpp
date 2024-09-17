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
#include <aws/license-manager/model/Tag.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class CreateLicenseManagerReportGeneratorRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseManagerReportGeneratorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLicenseManagerReportGenerator"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the report generator.</p>
     */
    inline const Aws::String& GetReportGeneratorName() const{ return m_reportGeneratorName; }
    inline bool ReportGeneratorNameHasBeenSet() const { return m_reportGeneratorNameHasBeenSet; }
    inline void SetReportGeneratorName(const Aws::String& value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName = value; }
    inline void SetReportGeneratorName(Aws::String&& value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName = std::move(value); }
    inline void SetReportGeneratorName(const char* value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName.assign(value); }
    inline CreateLicenseManagerReportGeneratorRequest& WithReportGeneratorName(const Aws::String& value) { SetReportGeneratorName(value); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& WithReportGeneratorName(Aws::String&& value) { SetReportGeneratorName(std::move(value)); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& WithReportGeneratorName(const char* value) { SetReportGeneratorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of reports to generate. The following report types an be generated:</p>
     * <ul> <li> <p>License configuration report - Reports the number and details of
     * consumed licenses for a license configuration.</p> </li> <li> <p>Resource report
     * - Reports the tracked licenses and resource consumption for a license
     * configuration.</p> </li> </ul>
     */
    inline const Aws::Vector<ReportType>& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::Vector<ReportType>& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::Vector<ReportType>&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateLicenseManagerReportGeneratorRequest& WithType(const Aws::Vector<ReportType>& value) { SetType(value); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& WithType(Aws::Vector<ReportType>&& value) { SetType(std::move(value)); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& AddType(const ReportType& value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }
    inline CreateLicenseManagerReportGeneratorRequest& AddType(ReportType&& value) { m_typeHasBeenSet = true; m_type.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the type of license configuration the report generator tracks.</p>
     */
    inline const ReportContext& GetReportContext() const{ return m_reportContext; }
    inline bool ReportContextHasBeenSet() const { return m_reportContextHasBeenSet; }
    inline void SetReportContext(const ReportContext& value) { m_reportContextHasBeenSet = true; m_reportContext = value; }
    inline void SetReportContext(ReportContext&& value) { m_reportContextHasBeenSet = true; m_reportContext = std::move(value); }
    inline CreateLicenseManagerReportGeneratorRequest& WithReportContext(const ReportContext& value) { SetReportContext(value); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& WithReportContext(ReportContext&& value) { SetReportContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Frequency by which reports are generated. Reports can be generated daily,
     * monthly, or weekly.</p>
     */
    inline const ReportFrequency& GetReportFrequency() const{ return m_reportFrequency; }
    inline bool ReportFrequencyHasBeenSet() const { return m_reportFrequencyHasBeenSet; }
    inline void SetReportFrequency(const ReportFrequency& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = value; }
    inline void SetReportFrequency(ReportFrequency&& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = std::move(value); }
    inline CreateLicenseManagerReportGeneratorRequest& WithReportFrequency(const ReportFrequency& value) { SetReportFrequency(value); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& WithReportFrequency(ReportFrequency&& value) { SetReportFrequency(std::move(value)); return *this;}
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
    inline CreateLicenseManagerReportGeneratorRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline CreateLicenseManagerReportGeneratorRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to add to the report generator.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateLicenseManagerReportGeneratorRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLicenseManagerReportGeneratorRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateLicenseManagerReportGeneratorRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
