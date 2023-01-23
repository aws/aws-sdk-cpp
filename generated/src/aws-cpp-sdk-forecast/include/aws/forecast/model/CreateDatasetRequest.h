/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/Domain.h>
#include <aws/forecast/model/DatasetType.h>
#include <aws/forecast/model/Schema.h>
#include <aws/forecast/model/EncryptionConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class CreateDatasetRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>A name for the dataset.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>A name for the dataset.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>A name for the dataset.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>A name for the dataset.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>A name for the dataset.</p>
     */
    inline CreateDatasetRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>A name for the dataset.</p>
     */
    inline CreateDatasetRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>A name for the dataset.</p>
     */
    inline CreateDatasetRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The domain associated with the dataset. When you add a dataset to a dataset
     * group, this value and the value specified for the <code>Domain</code> parameter
     * of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in the training data that you import to the dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields to be present in your
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Importing
     * datasets</a>.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain associated with the dataset. When you add a dataset to a dataset
     * group, this value and the value specified for the <code>Domain</code> parameter
     * of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in the training data that you import to the dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields to be present in your
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Importing
     * datasets</a>.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain associated with the dataset. When you add a dataset to a dataset
     * group, this value and the value specified for the <code>Domain</code> parameter
     * of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in the training data that you import to the dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields to be present in your
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Importing
     * datasets</a>.</p>
     */
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain associated with the dataset. When you add a dataset to a dataset
     * group, this value and the value specified for the <code>Domain</code> parameter
     * of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in the training data that you import to the dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields to be present in your
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Importing
     * datasets</a>.</p>
     */
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain associated with the dataset. When you add a dataset to a dataset
     * group, this value and the value specified for the <code>Domain</code> parameter
     * of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in the training data that you import to the dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields to be present in your
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Importing
     * datasets</a>.</p>
     */
    inline CreateDatasetRequest& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain associated with the dataset. When you add a dataset to a dataset
     * group, this value and the value specified for the <code>Domain</code> parameter
     * of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in the training data that you import to the dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields to be present in your
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Importing
     * datasets</a>.</p>
     */
    inline CreateDatasetRequest& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}


    /**
     * <p>The dataset type. Valid values depend on the chosen <code>Domain</code>.</p>
     */
    inline const DatasetType& GetDatasetType() const{ return m_datasetType; }

    /**
     * <p>The dataset type. Valid values depend on the chosen <code>Domain</code>.</p>
     */
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }

    /**
     * <p>The dataset type. Valid values depend on the chosen <code>Domain</code>.</p>
     */
    inline void SetDatasetType(const DatasetType& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }

    /**
     * <p>The dataset type. Valid values depend on the chosen <code>Domain</code>.</p>
     */
    inline void SetDatasetType(DatasetType&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }

    /**
     * <p>The dataset type. Valid values depend on the chosen <code>Domain</code>.</p>
     */
    inline CreateDatasetRequest& WithDatasetType(const DatasetType& value) { SetDatasetType(value); return *this;}

    /**
     * <p>The dataset type. Valid values depend on the chosen <code>Domain</code>.</p>
     */
    inline CreateDatasetRequest& WithDatasetType(DatasetType&& value) { SetDatasetType(std::move(value)); return *this;}


    /**
     * <p>The frequency of data collection. This parameter is required for
     * RELATED_TIME_SERIES datasets.</p> <p>Valid intervals are Y (Year), M (Month), W
     * (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes), 10min (10
     * minutes), 5min (5 minutes), and 1min (1 minute). For example, "D" indicates
     * every day and "15min" indicates every 15 minutes.</p>
     */
    inline const Aws::String& GetDataFrequency() const{ return m_dataFrequency; }

    /**
     * <p>The frequency of data collection. This parameter is required for
     * RELATED_TIME_SERIES datasets.</p> <p>Valid intervals are Y (Year), M (Month), W
     * (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes), 10min (10
     * minutes), 5min (5 minutes), and 1min (1 minute). For example, "D" indicates
     * every day and "15min" indicates every 15 minutes.</p>
     */
    inline bool DataFrequencyHasBeenSet() const { return m_dataFrequencyHasBeenSet; }

    /**
     * <p>The frequency of data collection. This parameter is required for
     * RELATED_TIME_SERIES datasets.</p> <p>Valid intervals are Y (Year), M (Month), W
     * (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes), 10min (10
     * minutes), 5min (5 minutes), and 1min (1 minute). For example, "D" indicates
     * every day and "15min" indicates every 15 minutes.</p>
     */
    inline void SetDataFrequency(const Aws::String& value) { m_dataFrequencyHasBeenSet = true; m_dataFrequency = value; }

    /**
     * <p>The frequency of data collection. This parameter is required for
     * RELATED_TIME_SERIES datasets.</p> <p>Valid intervals are Y (Year), M (Month), W
     * (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes), 10min (10
     * minutes), 5min (5 minutes), and 1min (1 minute). For example, "D" indicates
     * every day and "15min" indicates every 15 minutes.</p>
     */
    inline void SetDataFrequency(Aws::String&& value) { m_dataFrequencyHasBeenSet = true; m_dataFrequency = std::move(value); }

    /**
     * <p>The frequency of data collection. This parameter is required for
     * RELATED_TIME_SERIES datasets.</p> <p>Valid intervals are Y (Year), M (Month), W
     * (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes), 10min (10
     * minutes), 5min (5 minutes), and 1min (1 minute). For example, "D" indicates
     * every day and "15min" indicates every 15 minutes.</p>
     */
    inline void SetDataFrequency(const char* value) { m_dataFrequencyHasBeenSet = true; m_dataFrequency.assign(value); }

    /**
     * <p>The frequency of data collection. This parameter is required for
     * RELATED_TIME_SERIES datasets.</p> <p>Valid intervals are Y (Year), M (Month), W
     * (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes), 10min (10
     * minutes), 5min (5 minutes), and 1min (1 minute). For example, "D" indicates
     * every day and "15min" indicates every 15 minutes.</p>
     */
    inline CreateDatasetRequest& WithDataFrequency(const Aws::String& value) { SetDataFrequency(value); return *this;}

    /**
     * <p>The frequency of data collection. This parameter is required for
     * RELATED_TIME_SERIES datasets.</p> <p>Valid intervals are Y (Year), M (Month), W
     * (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes), 10min (10
     * minutes), 5min (5 minutes), and 1min (1 minute). For example, "D" indicates
     * every day and "15min" indicates every 15 minutes.</p>
     */
    inline CreateDatasetRequest& WithDataFrequency(Aws::String&& value) { SetDataFrequency(std::move(value)); return *this;}

    /**
     * <p>The frequency of data collection. This parameter is required for
     * RELATED_TIME_SERIES datasets.</p> <p>Valid intervals are Y (Year), M (Month), W
     * (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes), 10min (10
     * minutes), 5min (5 minutes), and 1min (1 minute). For example, "D" indicates
     * every day and "15min" indicates every 15 minutes.</p>
     */
    inline CreateDatasetRequest& WithDataFrequency(const char* value) { SetDataFrequency(value); return *this;}


    /**
     * <p>The schema for the dataset. The schema attributes and their order must match
     * the fields in your data. The dataset <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the minimum required fields
     * in your training data. For information about the required fields for a specific
     * dataset domain and type, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-domains-ds-types.html">Dataset
     * Domains and Dataset Types</a>.</p>
     */
    inline const Schema& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema for the dataset. The schema attributes and their order must match
     * the fields in your data. The dataset <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the minimum required fields
     * in your training data. For information about the required fields for a specific
     * dataset domain and type, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-domains-ds-types.html">Dataset
     * Domains and Dataset Types</a>.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The schema for the dataset. The schema attributes and their order must match
     * the fields in your data. The dataset <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the minimum required fields
     * in your training data. For information about the required fields for a specific
     * dataset domain and type, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-domains-ds-types.html">Dataset
     * Domains and Dataset Types</a>.</p>
     */
    inline void SetSchema(const Schema& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The schema for the dataset. The schema attributes and their order must match
     * the fields in your data. The dataset <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the minimum required fields
     * in your training data. For information about the required fields for a specific
     * dataset domain and type, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-domains-ds-types.html">Dataset
     * Domains and Dataset Types</a>.</p>
     */
    inline void SetSchema(Schema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The schema for the dataset. The schema attributes and their order must match
     * the fields in your data. The dataset <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the minimum required fields
     * in your training data. For information about the required fields for a specific
     * dataset domain and type, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-domains-ds-types.html">Dataset
     * Domains and Dataset Types</a>.</p>
     */
    inline CreateDatasetRequest& WithSchema(const Schema& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema for the dataset. The schema attributes and their order must match
     * the fields in your data. The dataset <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the minimum required fields
     * in your training data. For information about the required fields for a specific
     * dataset domain and type, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-domains-ds-types.html">Dataset
     * Domains and Dataset Types</a>.</p>
     */
    inline CreateDatasetRequest& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}


    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline CreateDatasetRequest& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline CreateDatasetRequest& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}


    /**
     * <p>The optional metadata that you apply to the dataset to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The optional metadata that you apply to the dataset to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The optional metadata that you apply to the dataset to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The optional metadata that you apply to the dataset to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The optional metadata that you apply to the dataset to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateDatasetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The optional metadata that you apply to the dataset to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateDatasetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The optional metadata that you apply to the dataset to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateDatasetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The optional metadata that you apply to the dataset to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateDatasetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Domain m_domain;
    bool m_domainHasBeenSet = false;

    DatasetType m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    Aws::String m_dataFrequency;
    bool m_dataFrequencyHasBeenSet = false;

    Schema m_schema;
    bool m_schemaHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
