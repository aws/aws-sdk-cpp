/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/ConformancePackInputParameter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>An organization conformance pack that has information about conformance packs
   * that Config creates in member accounts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationConformancePack">AWS
   * API Reference</a></p>
   */
  class OrganizationConformancePack
  {
  public:
    AWS_CONFIGSERVICE_API OrganizationConformancePack() = default;
    AWS_CONFIGSERVICE_API OrganizationConformancePack(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationConformancePack& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name you assign to an organization conformance pack.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackName() const { return m_organizationConformancePackName; }
    inline bool OrganizationConformancePackNameHasBeenSet() const { return m_organizationConformancePackNameHasBeenSet; }
    template<typename OrganizationConformancePackNameT = Aws::String>
    void SetOrganizationConformancePackName(OrganizationConformancePackNameT&& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = std::forward<OrganizationConformancePackNameT>(value); }
    template<typename OrganizationConformancePackNameT = Aws::String>
    OrganizationConformancePack& WithOrganizationConformancePackName(OrganizationConformancePackNameT&& value) { SetOrganizationConformancePackName(std::forward<OrganizationConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of organization conformance pack.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackArn() const { return m_organizationConformancePackArn; }
    inline bool OrganizationConformancePackArnHasBeenSet() const { return m_organizationConformancePackArnHasBeenSet; }
    template<typename OrganizationConformancePackArnT = Aws::String>
    void SetOrganizationConformancePackArn(OrganizationConformancePackArnT&& value) { m_organizationConformancePackArnHasBeenSet = true; m_organizationConformancePackArn = std::forward<OrganizationConformancePackArnT>(value); }
    template<typename OrganizationConformancePackArnT = Aws::String>
    OrganizationConformancePack& WithOrganizationConformancePackArn(OrganizationConformancePackArnT&& value) { SetOrganizationConformancePackArn(std::forward<OrganizationConformancePackArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3Bucket() const { return m_deliveryS3Bucket; }
    inline bool DeliveryS3BucketHasBeenSet() const { return m_deliveryS3BucketHasBeenSet; }
    template<typename DeliveryS3BucketT = Aws::String>
    void SetDeliveryS3Bucket(DeliveryS3BucketT&& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = std::forward<DeliveryS3BucketT>(value); }
    template<typename DeliveryS3BucketT = Aws::String>
    OrganizationConformancePack& WithDeliveryS3Bucket(DeliveryS3BucketT&& value) { SetDeliveryS3Bucket(std::forward<DeliveryS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any folder structure you want to add to an Amazon S3 bucket.</p> 
     * <p>This field is optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3KeyPrefix() const { return m_deliveryS3KeyPrefix; }
    inline bool DeliveryS3KeyPrefixHasBeenSet() const { return m_deliveryS3KeyPrefixHasBeenSet; }
    template<typename DeliveryS3KeyPrefixT = Aws::String>
    void SetDeliveryS3KeyPrefix(DeliveryS3KeyPrefixT&& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = std::forward<DeliveryS3KeyPrefixT>(value); }
    template<typename DeliveryS3KeyPrefixT = Aws::String>
    OrganizationConformancePack& WithDeliveryS3KeyPrefix(DeliveryS3KeyPrefixT&& value) { SetDeliveryS3KeyPrefix(std::forward<DeliveryS3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackInputParameter>& GetConformancePackInputParameters() const { return m_conformancePackInputParameters; }
    inline bool ConformancePackInputParametersHasBeenSet() const { return m_conformancePackInputParametersHasBeenSet; }
    template<typename ConformancePackInputParametersT = Aws::Vector<ConformancePackInputParameter>>
    void SetConformancePackInputParameters(ConformancePackInputParametersT&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters = std::forward<ConformancePackInputParametersT>(value); }
    template<typename ConformancePackInputParametersT = Aws::Vector<ConformancePackInputParameter>>
    OrganizationConformancePack& WithConformancePackInputParameters(ConformancePackInputParametersT&& value) { SetConformancePackInputParameters(std::forward<ConformancePackInputParametersT>(value)); return *this;}
    template<typename ConformancePackInputParametersT = ConformancePackInputParameter>
    OrganizationConformancePack& AddConformancePackInputParameters(ConformancePackInputParametersT&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.emplace_back(std::forward<ConformancePackInputParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of accounts excluded from organization conformance
     * pack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const { return m_excludedAccounts; }
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }
    template<typename ExcludedAccountsT = Aws::Vector<Aws::String>>
    void SetExcludedAccounts(ExcludedAccountsT&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::forward<ExcludedAccountsT>(value); }
    template<typename ExcludedAccountsT = Aws::Vector<Aws::String>>
    OrganizationConformancePack& WithExcludedAccounts(ExcludedAccountsT&& value) { SetExcludedAccounts(std::forward<ExcludedAccountsT>(value)); return *this;}
    template<typename ExcludedAccountsT = Aws::String>
    OrganizationConformancePack& AddExcludedAccounts(ExcludedAccountsT&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.emplace_back(std::forward<ExcludedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Last time when organization conformation pack was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    OrganizationConformancePack& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConformancePackName;
    bool m_organizationConformancePackNameHasBeenSet = false;

    Aws::String m_organizationConformancePackArn;
    bool m_organizationConformancePackArnHasBeenSet = false;

    Aws::String m_deliveryS3Bucket;
    bool m_deliveryS3BucketHasBeenSet = false;

    Aws::String m_deliveryS3KeyPrefix;
    bool m_deliveryS3KeyPrefixHasBeenSet = false;

    Aws::Vector<ConformancePackInputParameter> m_conformancePackInputParameters;
    bool m_conformancePackInputParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedAccounts;
    bool m_excludedAccountsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
