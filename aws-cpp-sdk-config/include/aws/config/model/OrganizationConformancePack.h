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
    AWS_CONFIGSERVICE_API OrganizationConformancePack();
    AWS_CONFIGSERVICE_API OrganizationConformancePack(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationConformancePack& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name you assign to an organization conformance pack.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackName() const{ return m_organizationConformancePackName; }

    /**
     * <p>The name you assign to an organization conformance pack.</p>
     */
    inline bool OrganizationConformancePackNameHasBeenSet() const { return m_organizationConformancePackNameHasBeenSet; }

    /**
     * <p>The name you assign to an organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackName(const Aws::String& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = value; }

    /**
     * <p>The name you assign to an organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackName(Aws::String&& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = std::move(value); }

    /**
     * <p>The name you assign to an organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackName(const char* value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName.assign(value); }

    /**
     * <p>The name you assign to an organization conformance pack.</p>
     */
    inline OrganizationConformancePack& WithOrganizationConformancePackName(const Aws::String& value) { SetOrganizationConformancePackName(value); return *this;}

    /**
     * <p>The name you assign to an organization conformance pack.</p>
     */
    inline OrganizationConformancePack& WithOrganizationConformancePackName(Aws::String&& value) { SetOrganizationConformancePackName(std::move(value)); return *this;}

    /**
     * <p>The name you assign to an organization conformance pack.</p>
     */
    inline OrganizationConformancePack& WithOrganizationConformancePackName(const char* value) { SetOrganizationConformancePackName(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of organization conformance pack.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackArn() const{ return m_organizationConformancePackArn; }

    /**
     * <p>Amazon Resource Name (ARN) of organization conformance pack.</p>
     */
    inline bool OrganizationConformancePackArnHasBeenSet() const { return m_organizationConformancePackArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackArn(const Aws::String& value) { m_organizationConformancePackArnHasBeenSet = true; m_organizationConformancePackArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackArn(Aws::String&& value) { m_organizationConformancePackArnHasBeenSet = true; m_organizationConformancePackArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackArn(const char* value) { m_organizationConformancePackArnHasBeenSet = true; m_organizationConformancePackArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of organization conformance pack.</p>
     */
    inline OrganizationConformancePack& WithOrganizationConformancePackArn(const Aws::String& value) { SetOrganizationConformancePackArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of organization conformance pack.</p>
     */
    inline OrganizationConformancePack& WithOrganizationConformancePackArn(Aws::String&& value) { SetOrganizationConformancePackArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of organization conformance pack.</p>
     */
    inline OrganizationConformancePack& WithOrganizationConformancePackArn(const char* value) { SetOrganizationConformancePackArn(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3Bucket() const{ return m_deliveryS3Bucket; }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline bool DeliveryS3BucketHasBeenSet() const { return m_deliveryS3BucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline void SetDeliveryS3Bucket(const Aws::String& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline void SetDeliveryS3Bucket(Aws::String&& value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline void SetDeliveryS3Bucket(const char* value) { m_deliveryS3BucketHasBeenSet = true; m_deliveryS3Bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline OrganizationConformancePack& WithDeliveryS3Bucket(const Aws::String& value) { SetDeliveryS3Bucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline OrganizationConformancePack& WithDeliveryS3Bucket(Aws::String&& value) { SetDeliveryS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where Config stores conformance pack
     * templates. </p>  <p>This field is optional.</p> 
     */
    inline OrganizationConformancePack& WithDeliveryS3Bucket(const char* value) { SetDeliveryS3Bucket(value); return *this;}


    /**
     * <p>Any folder structure you want to add to an Amazon S3 bucket.</p> 
     * <p>This field is optional.</p> 
     */
    inline const Aws::String& GetDeliveryS3KeyPrefix() const{ return m_deliveryS3KeyPrefix; }

    /**
     * <p>Any folder structure you want to add to an Amazon S3 bucket.</p> 
     * <p>This field is optional.</p> 
     */
    inline bool DeliveryS3KeyPrefixHasBeenSet() const { return m_deliveryS3KeyPrefixHasBeenSet; }

    /**
     * <p>Any folder structure you want to add to an Amazon S3 bucket.</p> 
     * <p>This field is optional.</p> 
     */
    inline void SetDeliveryS3KeyPrefix(const Aws::String& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = value; }

    /**
     * <p>Any folder structure you want to add to an Amazon S3 bucket.</p> 
     * <p>This field is optional.</p> 
     */
    inline void SetDeliveryS3KeyPrefix(Aws::String&& value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix = std::move(value); }

    /**
     * <p>Any folder structure you want to add to an Amazon S3 bucket.</p> 
     * <p>This field is optional.</p> 
     */
    inline void SetDeliveryS3KeyPrefix(const char* value) { m_deliveryS3KeyPrefixHasBeenSet = true; m_deliveryS3KeyPrefix.assign(value); }

    /**
     * <p>Any folder structure you want to add to an Amazon S3 bucket.</p> 
     * <p>This field is optional.</p> 
     */
    inline OrganizationConformancePack& WithDeliveryS3KeyPrefix(const Aws::String& value) { SetDeliveryS3KeyPrefix(value); return *this;}

    /**
     * <p>Any folder structure you want to add to an Amazon S3 bucket.</p> 
     * <p>This field is optional.</p> 
     */
    inline OrganizationConformancePack& WithDeliveryS3KeyPrefix(Aws::String&& value) { SetDeliveryS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>Any folder structure you want to add to an Amazon S3 bucket.</p> 
     * <p>This field is optional.</p> 
     */
    inline OrganizationConformancePack& WithDeliveryS3KeyPrefix(const char* value) { SetDeliveryS3KeyPrefix(value); return *this;}


    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackInputParameter>& GetConformancePackInputParameters() const{ return m_conformancePackInputParameters; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline bool ConformancePackInputParametersHasBeenSet() const { return m_conformancePackInputParametersHasBeenSet; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline void SetConformancePackInputParameters(const Aws::Vector<ConformancePackInputParameter>& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters = value; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline void SetConformancePackInputParameters(Aws::Vector<ConformancePackInputParameter>&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters = std::move(value); }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline OrganizationConformancePack& WithConformancePackInputParameters(const Aws::Vector<ConformancePackInputParameter>& value) { SetConformancePackInputParameters(value); return *this;}

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline OrganizationConformancePack& WithConformancePackInputParameters(Aws::Vector<ConformancePackInputParameter>&& value) { SetConformancePackInputParameters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline OrganizationConformancePack& AddConformancePackInputParameters(const ConformancePackInputParameter& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>ConformancePackInputParameter</code> objects.</p>
     */
    inline OrganizationConformancePack& AddConformancePackInputParameters(ConformancePackInputParameter&& value) { m_conformancePackInputParametersHasBeenSet = true; m_conformancePackInputParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>A comma-separated list of accounts excluded from organization conformance
     * pack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedAccounts() const{ return m_excludedAccounts; }

    /**
     * <p>A comma-separated list of accounts excluded from organization conformance
     * pack.</p>
     */
    inline bool ExcludedAccountsHasBeenSet() const { return m_excludedAccountsHasBeenSet; }

    /**
     * <p>A comma-separated list of accounts excluded from organization conformance
     * pack.</p>
     */
    inline void SetExcludedAccounts(const Aws::Vector<Aws::String>& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = value; }

    /**
     * <p>A comma-separated list of accounts excluded from organization conformance
     * pack.</p>
     */
    inline void SetExcludedAccounts(Aws::Vector<Aws::String>&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts = std::move(value); }

    /**
     * <p>A comma-separated list of accounts excluded from organization conformance
     * pack.</p>
     */
    inline OrganizationConformancePack& WithExcludedAccounts(const Aws::Vector<Aws::String>& value) { SetExcludedAccounts(value); return *this;}

    /**
     * <p>A comma-separated list of accounts excluded from organization conformance
     * pack.</p>
     */
    inline OrganizationConformancePack& WithExcludedAccounts(Aws::Vector<Aws::String>&& value) { SetExcludedAccounts(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of accounts excluded from organization conformance
     * pack.</p>
     */
    inline OrganizationConformancePack& AddExcludedAccounts(const Aws::String& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }

    /**
     * <p>A comma-separated list of accounts excluded from organization conformance
     * pack.</p>
     */
    inline OrganizationConformancePack& AddExcludedAccounts(Aws::String&& value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of accounts excluded from organization conformance
     * pack.</p>
     */
    inline OrganizationConformancePack& AddExcludedAccounts(const char* value) { m_excludedAccountsHasBeenSet = true; m_excludedAccounts.push_back(value); return *this; }


    /**
     * <p>Last time when organization conformation pack was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>Last time when organization conformation pack was updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>Last time when organization conformation pack was updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>Last time when organization conformation pack was updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>Last time when organization conformation pack was updated.</p>
     */
    inline OrganizationConformancePack& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>Last time when organization conformation pack was updated.</p>
     */
    inline OrganizationConformancePack& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
