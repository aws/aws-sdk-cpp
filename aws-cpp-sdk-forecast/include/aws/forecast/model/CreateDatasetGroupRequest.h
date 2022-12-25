/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/Domain.h>
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
  class CreateDatasetGroupRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateDatasetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatasetGroup"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupName() const{ return m_datasetGroupName; }

    /**
     * <p>A name for the dataset group.</p>
     */
    inline bool DatasetGroupNameHasBeenSet() const { return m_datasetGroupNameHasBeenSet; }

    /**
     * <p>A name for the dataset group.</p>
     */
    inline void SetDatasetGroupName(const Aws::String& value) { m_datasetGroupNameHasBeenSet = true; m_datasetGroupName = value; }

    /**
     * <p>A name for the dataset group.</p>
     */
    inline void SetDatasetGroupName(Aws::String&& value) { m_datasetGroupNameHasBeenSet = true; m_datasetGroupName = std::move(value); }

    /**
     * <p>A name for the dataset group.</p>
     */
    inline void SetDatasetGroupName(const char* value) { m_datasetGroupNameHasBeenSet = true; m_datasetGroupName.assign(value); }

    /**
     * <p>A name for the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithDatasetGroupName(const Aws::String& value) { SetDatasetGroupName(value); return *this;}

    /**
     * <p>A name for the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithDatasetGroupName(Aws::String&& value) { SetDatasetGroupName(std::move(value)); return *this;}

    /**
     * <p>A name for the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithDatasetGroupName(const char* value) { SetDatasetGroupName(value); return *this;}


    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in training data that you import to a dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires that <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields are present in your data.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Dataset
     * groups</a>.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in training data that you import to a dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires that <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields are present in your data.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Dataset
     * groups</a>.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in training data that you import to a dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires that <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields are present in your data.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Dataset
     * groups</a>.</p>
     */
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in training data that you import to a dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires that <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields are present in your data.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Dataset
     * groups</a>.</p>
     */
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in training data that you import to a dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires that <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields are present in your data.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Dataset
     * groups</a>.</p>
     */
    inline CreateDatasetGroupRequest& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain associated with the dataset group. When you add a dataset to a
     * dataset group, this value and the value specified for the <code>Domain</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation must match.</p> <p>The <code>Domain</code> and
     * <code>DatasetType</code> that you choose determine the fields that must be
     * present in training data that you import to a dataset. For example, if you
     * choose the <code>RETAIL</code> domain and <code>TARGET_TIME_SERIES</code> as the
     * <code>DatasetType</code>, Amazon Forecast requires that <code>item_id</code>,
     * <code>timestamp</code>, and <code>demand</code> fields are present in your data.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Dataset
     * groups</a>.</p>
     */
    inline CreateDatasetGroupRequest& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}


    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetArns() const{ return m_datasetArns; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline bool DatasetArnsHasBeenSet() const { return m_datasetArnsHasBeenSet; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline void SetDatasetArns(const Aws::Vector<Aws::String>& value) { m_datasetArnsHasBeenSet = true; m_datasetArns = value; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline void SetDatasetArns(Aws::Vector<Aws::String>&& value) { m_datasetArnsHasBeenSet = true; m_datasetArns = std::move(value); }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithDatasetArns(const Aws::Vector<Aws::String>& value) { SetDatasetArns(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& WithDatasetArns(Aws::Vector<Aws::String>&& value) { SetDatasetArns(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& AddDatasetArns(const Aws::String& value) { m_datasetArnsHasBeenSet = true; m_datasetArns.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& AddDatasetArns(Aws::String&& value) { m_datasetArnsHasBeenSet = true; m_datasetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets that you want to
     * include in the dataset group.</p>
     */
    inline CreateDatasetGroupRequest& AddDatasetArns(const char* value) { m_datasetArnsHasBeenSet = true; m_datasetArns.push_back(value); return *this; }


    /**
     * <p>The optional metadata that you apply to the dataset group to help you
     * categorize and organize them. Each tag consists of a key and an optional value,
     * both of which you define.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
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
     * <p>The optional metadata that you apply to the dataset group to help you
     * categorize and organize them. Each tag consists of a key and an optional value,
     * both of which you define.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
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
     * <p>The optional metadata that you apply to the dataset group to help you
     * categorize and organize them. Each tag consists of a key and an optional value,
     * both of which you define.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
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
     * <p>The optional metadata that you apply to the dataset group to help you
     * categorize and organize them. Each tag consists of a key and an optional value,
     * both of which you define.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
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
     * <p>The optional metadata that you apply to the dataset group to help you
     * categorize and organize them. Each tag consists of a key and an optional value,
     * both of which you define.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
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
    inline CreateDatasetGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The optional metadata that you apply to the dataset group to help you
     * categorize and organize them. Each tag consists of a key and an optional value,
     * both of which you define.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
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
    inline CreateDatasetGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The optional metadata that you apply to the dataset group to help you
     * categorize and organize them. Each tag consists of a key and an optional value,
     * both of which you define.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
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
    inline CreateDatasetGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The optional metadata that you apply to the dataset group to help you
     * categorize and organize them. Each tag consists of a key and an optional value,
     * both of which you define.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
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
    inline CreateDatasetGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_datasetGroupName;
    bool m_datasetGroupNameHasBeenSet = false;

    Domain m_domain;
    bool m_domainHasBeenSet = false;

    Aws::Vector<Aws::String> m_datasetArns;
    bool m_datasetArnsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
