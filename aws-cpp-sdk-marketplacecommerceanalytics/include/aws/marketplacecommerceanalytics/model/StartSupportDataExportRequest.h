/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsRequest.h>
#include <aws/marketplacecommerceanalytics/model/SupportDataSetType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MarketplaceCommerceAnalytics
{
namespace Model
{

  /**
   * Container for the parameters to the StartSupportDataExport operation.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplacecommerceanalytics-2015-07-01/StartSupportDataExportRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACECOMMERCEANALYTICS_API StartSupportDataExportRequest : public MarketplaceCommerceAnalyticsRequest
  {
  public:
    StartSupportDataExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSupportDataExport"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Specifies the data set type to be written to the output csv file. The data
     * set types customer_support_contacts_data and test_customer_support_contacts_data
     * both result in a csv file containing the following fields: Product Id, Product
     * Code, Customer Guid, Subscription Guid, Subscription Start Date, Organization,
     * AWS Account Id, Given Name, Surname, Telephone Number, Email, Title, Country
     * Code, ZIP Code, Operation Type, and Operation Time. </p> <p> <ul>
     * <li><i>customer_support_contacts_data</i> Customer support contact data. The
     * data set will contain all changes (Creates, Updates, and Deletes) to customer
     * support contact data from the date specified in the from_date parameter.</li>
     * <li><i>test_customer_support_contacts_data</i> An example data set containing
     * static test data in the same format as customer_support_contacts_data</li> </ul>
     * </p>
     */
    inline const SupportDataSetType& GetDataSetType() const{ return m_dataSetType; }

    /**
     * <p> Specifies the data set type to be written to the output csv file. The data
     * set types customer_support_contacts_data and test_customer_support_contacts_data
     * both result in a csv file containing the following fields: Product Id, Product
     * Code, Customer Guid, Subscription Guid, Subscription Start Date, Organization,
     * AWS Account Id, Given Name, Surname, Telephone Number, Email, Title, Country
     * Code, ZIP Code, Operation Type, and Operation Time. </p> <p> <ul>
     * <li><i>customer_support_contacts_data</i> Customer support contact data. The
     * data set will contain all changes (Creates, Updates, and Deletes) to customer
     * support contact data from the date specified in the from_date parameter.</li>
     * <li><i>test_customer_support_contacts_data</i> An example data set containing
     * static test data in the same format as customer_support_contacts_data</li> </ul>
     * </p>
     */
    inline bool DataSetTypeHasBeenSet() const { return m_dataSetTypeHasBeenSet; }

    /**
     * <p> Specifies the data set type to be written to the output csv file. The data
     * set types customer_support_contacts_data and test_customer_support_contacts_data
     * both result in a csv file containing the following fields: Product Id, Product
     * Code, Customer Guid, Subscription Guid, Subscription Start Date, Organization,
     * AWS Account Id, Given Name, Surname, Telephone Number, Email, Title, Country
     * Code, ZIP Code, Operation Type, and Operation Time. </p> <p> <ul>
     * <li><i>customer_support_contacts_data</i> Customer support contact data. The
     * data set will contain all changes (Creates, Updates, and Deletes) to customer
     * support contact data from the date specified in the from_date parameter.</li>
     * <li><i>test_customer_support_contacts_data</i> An example data set containing
     * static test data in the same format as customer_support_contacts_data</li> </ul>
     * </p>
     */
    inline void SetDataSetType(const SupportDataSetType& value) { m_dataSetTypeHasBeenSet = true; m_dataSetType = value; }

    /**
     * <p> Specifies the data set type to be written to the output csv file. The data
     * set types customer_support_contacts_data and test_customer_support_contacts_data
     * both result in a csv file containing the following fields: Product Id, Product
     * Code, Customer Guid, Subscription Guid, Subscription Start Date, Organization,
     * AWS Account Id, Given Name, Surname, Telephone Number, Email, Title, Country
     * Code, ZIP Code, Operation Type, and Operation Time. </p> <p> <ul>
     * <li><i>customer_support_contacts_data</i> Customer support contact data. The
     * data set will contain all changes (Creates, Updates, and Deletes) to customer
     * support contact data from the date specified in the from_date parameter.</li>
     * <li><i>test_customer_support_contacts_data</i> An example data set containing
     * static test data in the same format as customer_support_contacts_data</li> </ul>
     * </p>
     */
    inline void SetDataSetType(SupportDataSetType&& value) { m_dataSetTypeHasBeenSet = true; m_dataSetType = std::move(value); }

    /**
     * <p> Specifies the data set type to be written to the output csv file. The data
     * set types customer_support_contacts_data and test_customer_support_contacts_data
     * both result in a csv file containing the following fields: Product Id, Product
     * Code, Customer Guid, Subscription Guid, Subscription Start Date, Organization,
     * AWS Account Id, Given Name, Surname, Telephone Number, Email, Title, Country
     * Code, ZIP Code, Operation Type, and Operation Time. </p> <p> <ul>
     * <li><i>customer_support_contacts_data</i> Customer support contact data. The
     * data set will contain all changes (Creates, Updates, and Deletes) to customer
     * support contact data from the date specified in the from_date parameter.</li>
     * <li><i>test_customer_support_contacts_data</i> An example data set containing
     * static test data in the same format as customer_support_contacts_data</li> </ul>
     * </p>
     */
    inline StartSupportDataExportRequest& WithDataSetType(const SupportDataSetType& value) { SetDataSetType(value); return *this;}

    /**
     * <p> Specifies the data set type to be written to the output csv file. The data
     * set types customer_support_contacts_data and test_customer_support_contacts_data
     * both result in a csv file containing the following fields: Product Id, Product
     * Code, Customer Guid, Subscription Guid, Subscription Start Date, Organization,
     * AWS Account Id, Given Name, Surname, Telephone Number, Email, Title, Country
     * Code, ZIP Code, Operation Type, and Operation Time. </p> <p> <ul>
     * <li><i>customer_support_contacts_data</i> Customer support contact data. The
     * data set will contain all changes (Creates, Updates, and Deletes) to customer
     * support contact data from the date specified in the from_date parameter.</li>
     * <li><i>test_customer_support_contacts_data</i> An example data set containing
     * static test data in the same format as customer_support_contacts_data</li> </ul>
     * </p>
     */
    inline StartSupportDataExportRequest& WithDataSetType(SupportDataSetType&& value) { SetDataSetType(std::move(value)); return *this;}


    /**
     * The start date from which to retrieve the data set in UTC. This parameter only
     * affects the customer_support_contacts_data data set type.
     */
    inline const Aws::Utils::DateTime& GetFromDate() const{ return m_fromDate; }

    /**
     * The start date from which to retrieve the data set in UTC. This parameter only
     * affects the customer_support_contacts_data data set type.
     */
    inline bool FromDateHasBeenSet() const { return m_fromDateHasBeenSet; }

    /**
     * The start date from which to retrieve the data set in UTC. This parameter only
     * affects the customer_support_contacts_data data set type.
     */
    inline void SetFromDate(const Aws::Utils::DateTime& value) { m_fromDateHasBeenSet = true; m_fromDate = value; }

    /**
     * The start date from which to retrieve the data set in UTC. This parameter only
     * affects the customer_support_contacts_data data set type.
     */
    inline void SetFromDate(Aws::Utils::DateTime&& value) { m_fromDateHasBeenSet = true; m_fromDate = std::move(value); }

    /**
     * The start date from which to retrieve the data set in UTC. This parameter only
     * affects the customer_support_contacts_data data set type.
     */
    inline StartSupportDataExportRequest& WithFromDate(const Aws::Utils::DateTime& value) { SetFromDate(value); return *this;}

    /**
     * The start date from which to retrieve the data set in UTC. This parameter only
     * affects the customer_support_contacts_data data set type.
     */
    inline StartSupportDataExportRequest& WithFromDate(Aws::Utils::DateTime&& value) { SetFromDate(std::move(value)); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline const Aws::String& GetRoleNameArn() const{ return m_roleNameArn; }

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline bool RoleNameArnHasBeenSet() const { return m_roleNameArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline void SetRoleNameArn(const Aws::String& value) { m_roleNameArnHasBeenSet = true; m_roleNameArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline void SetRoleNameArn(Aws::String&& value) { m_roleNameArnHasBeenSet = true; m_roleNameArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline void SetRoleNameArn(const char* value) { m_roleNameArnHasBeenSet = true; m_roleNameArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline StartSupportDataExportRequest& WithRoleNameArn(const Aws::String& value) { SetRoleNameArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline StartSupportDataExportRequest& WithRoleNameArn(Aws::String&& value) { SetRoleNameArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Role with an attached permissions policy
     * to interact with the provided AWS services.
     */
    inline StartSupportDataExportRequest& WithRoleNameArn(const char* value) { SetRoleNameArn(value); return *this;}


    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline const Aws::String& GetDestinationS3BucketName() const{ return m_destinationS3BucketName; }

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline bool DestinationS3BucketNameHasBeenSet() const { return m_destinationS3BucketNameHasBeenSet; }

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline void SetDestinationS3BucketName(const Aws::String& value) { m_destinationS3BucketNameHasBeenSet = true; m_destinationS3BucketName = value; }

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline void SetDestinationS3BucketName(Aws::String&& value) { m_destinationS3BucketNameHasBeenSet = true; m_destinationS3BucketName = std::move(value); }

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline void SetDestinationS3BucketName(const char* value) { m_destinationS3BucketNameHasBeenSet = true; m_destinationS3BucketName.assign(value); }

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline StartSupportDataExportRequest& WithDestinationS3BucketName(const Aws::String& value) { SetDestinationS3BucketName(value); return *this;}

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline StartSupportDataExportRequest& WithDestinationS3BucketName(Aws::String&& value) { SetDestinationS3BucketName(std::move(value)); return *this;}

    /**
     * The name (friendly name, not ARN) of the destination S3 bucket.
     */
    inline StartSupportDataExportRequest& WithDestinationS3BucketName(const char* value) { SetDestinationS3BucketName(value); return *this;}


    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline const Aws::String& GetDestinationS3Prefix() const{ return m_destinationS3Prefix; }

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline bool DestinationS3PrefixHasBeenSet() const { return m_destinationS3PrefixHasBeenSet; }

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline void SetDestinationS3Prefix(const Aws::String& value) { m_destinationS3PrefixHasBeenSet = true; m_destinationS3Prefix = value; }

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline void SetDestinationS3Prefix(Aws::String&& value) { m_destinationS3PrefixHasBeenSet = true; m_destinationS3Prefix = std::move(value); }

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline void SetDestinationS3Prefix(const char* value) { m_destinationS3PrefixHasBeenSet = true; m_destinationS3Prefix.assign(value); }

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline StartSupportDataExportRequest& WithDestinationS3Prefix(const Aws::String& value) { SetDestinationS3Prefix(value); return *this;}

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline StartSupportDataExportRequest& WithDestinationS3Prefix(Aws::String&& value) { SetDestinationS3Prefix(std::move(value)); return *this;}

    /**
     * (Optional) The desired S3 prefix for the published data set, similar to a
     * directory path in standard file systems. For example, if given the bucket name
     * "mybucket" and the prefix "myprefix/mydatasets", the output file "outputfile"
     * would be published to "s3://mybucket/myprefix/mydatasets/outputfile". If the
     * prefix directory structure does not exist, it will be created. If no prefix is
     * provided, the data set will be published to the S3 bucket root.
     */
    inline StartSupportDataExportRequest& WithDestinationS3Prefix(const char* value) { SetDestinationS3Prefix(value); return *this;}


    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline StartSupportDataExportRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline StartSupportDataExportRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * Amazon Resource Name (ARN) for the SNS Topic that will be notified when the data
     * set has been published or if an error has occurred.
     */
    inline StartSupportDataExportRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerDefinedValues() const{ return m_customerDefinedValues; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline bool CustomerDefinedValuesHasBeenSet() const { return m_customerDefinedValuesHasBeenSet; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline void SetCustomerDefinedValues(const Aws::Map<Aws::String, Aws::String>& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues = value; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline void SetCustomerDefinedValues(Aws::Map<Aws::String, Aws::String>&& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues = std::move(value); }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline StartSupportDataExportRequest& WithCustomerDefinedValues(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomerDefinedValues(value); return *this;}

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline StartSupportDataExportRequest& WithCustomerDefinedValues(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomerDefinedValues(std::move(value)); return *this;}

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline StartSupportDataExportRequest& AddCustomerDefinedValues(const Aws::String& key, const Aws::String& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(key, value); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline StartSupportDataExportRequest& AddCustomerDefinedValues(Aws::String&& key, const Aws::String& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(std::move(key), value); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline StartSupportDataExportRequest& AddCustomerDefinedValues(const Aws::String& key, Aws::String&& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(key, std::move(value)); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline StartSupportDataExportRequest& AddCustomerDefinedValues(Aws::String&& key, Aws::String&& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline StartSupportDataExportRequest& AddCustomerDefinedValues(const char* key, Aws::String&& value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(key, std::move(value)); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline StartSupportDataExportRequest& AddCustomerDefinedValues(Aws::String&& key, const char* value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(std::move(key), value); return *this; }

    /**
     * (Optional) Key-value pairs which will be returned, unmodified, in the Amazon SNS
     * notification message and the data set metadata file.
     */
    inline StartSupportDataExportRequest& AddCustomerDefinedValues(const char* key, const char* value) { m_customerDefinedValuesHasBeenSet = true; m_customerDefinedValues.emplace(key, value); return *this; }

  private:

    SupportDataSetType m_dataSetType;
    bool m_dataSetTypeHasBeenSet;

    Aws::Utils::DateTime m_fromDate;
    bool m_fromDateHasBeenSet;

    Aws::String m_roleNameArn;
    bool m_roleNameArnHasBeenSet;

    Aws::String m_destinationS3BucketName;
    bool m_destinationS3BucketNameHasBeenSet;

    Aws::String m_destinationS3Prefix;
    bool m_destinationS3PrefixHasBeenSet;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_customerDefinedValues;
    bool m_customerDefinedValuesHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
