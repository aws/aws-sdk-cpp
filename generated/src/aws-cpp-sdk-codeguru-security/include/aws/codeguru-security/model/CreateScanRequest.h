/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/codeguru-security/model/AnalysisType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/ResourceId.h>
#include <aws/codeguru-security/model/ScanType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   */
  class CreateScanRequest : public CodeGuruSecurityRequest
  {
  public:
    AWS_CODEGURUSECURITY_API CreateScanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScan"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of analysis you want CodeGuru Security to perform in the scan,
     * either <code>Security</code> or <code>All</code>. The <code>Security</code> type
     * only generates findings related to security. The <code>All</code> type generates
     * both security findings and quality findings. Defaults to <code>Security</code>
     * type if missing.</p>
     */
    inline const AnalysisType& GetAnalysisType() const{ return m_analysisType; }

    /**
     * <p>The type of analysis you want CodeGuru Security to perform in the scan,
     * either <code>Security</code> or <code>All</code>. The <code>Security</code> type
     * only generates findings related to security. The <code>All</code> type generates
     * both security findings and quality findings. Defaults to <code>Security</code>
     * type if missing.</p>
     */
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }

    /**
     * <p>The type of analysis you want CodeGuru Security to perform in the scan,
     * either <code>Security</code> or <code>All</code>. The <code>Security</code> type
     * only generates findings related to security. The <code>All</code> type generates
     * both security findings and quality findings. Defaults to <code>Security</code>
     * type if missing.</p>
     */
    inline void SetAnalysisType(const AnalysisType& value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }

    /**
     * <p>The type of analysis you want CodeGuru Security to perform in the scan,
     * either <code>Security</code> or <code>All</code>. The <code>Security</code> type
     * only generates findings related to security. The <code>All</code> type generates
     * both security findings and quality findings. Defaults to <code>Security</code>
     * type if missing.</p>
     */
    inline void SetAnalysisType(AnalysisType&& value) { m_analysisTypeHasBeenSet = true; m_analysisType = std::move(value); }

    /**
     * <p>The type of analysis you want CodeGuru Security to perform in the scan,
     * either <code>Security</code> or <code>All</code>. The <code>Security</code> type
     * only generates findings related to security. The <code>All</code> type generates
     * both security findings and quality findings. Defaults to <code>Security</code>
     * type if missing.</p>
     */
    inline CreateScanRequest& WithAnalysisType(const AnalysisType& value) { SetAnalysisType(value); return *this;}

    /**
     * <p>The type of analysis you want CodeGuru Security to perform in the scan,
     * either <code>Security</code> or <code>All</code>. The <code>Security</code> type
     * only generates findings related to security. The <code>All</code> type generates
     * both security findings and quality findings. Defaults to <code>Security</code>
     * type if missing.</p>
     */
    inline CreateScanRequest& WithAnalysisType(AnalysisType&& value) { SetAnalysisType(std::move(value)); return *this;}


    /**
     * <p>The idempotency token for the request. Amazon CodeGuru Security uses this
     * value to prevent the accidental creation of duplicate scans if there are
     * failures and retries.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token for the request. Amazon CodeGuru Security uses this
     * value to prevent the accidental creation of duplicate scans if there are
     * failures and retries.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token for the request. Amazon CodeGuru Security uses this
     * value to prevent the accidental creation of duplicate scans if there are
     * failures and retries.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token for the request. Amazon CodeGuru Security uses this
     * value to prevent the accidental creation of duplicate scans if there are
     * failures and retries.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token for the request. Amazon CodeGuru Security uses this
     * value to prevent the accidental creation of duplicate scans if there are
     * failures and retries.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token for the request. Amazon CodeGuru Security uses this
     * value to prevent the accidental creation of duplicate scans if there are
     * failures and retries.</p>
     */
    inline CreateScanRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token for the request. Amazon CodeGuru Security uses this
     * value to prevent the accidental creation of duplicate scans if there are
     * failures and retries.</p>
     */
    inline CreateScanRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token for the request. Amazon CodeGuru Security uses this
     * value to prevent the accidental creation of duplicate scans if there are
     * failures and retries.</p>
     */
    inline CreateScanRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The identifier for an input resource used to create a scan.</p>
     */
    inline const ResourceId& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier for an input resource used to create a scan.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier for an input resource used to create a scan.</p>
     */
    inline void SetResourceId(const ResourceId& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier for an input resource used to create a scan.</p>
     */
    inline void SetResourceId(ResourceId&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier for an input resource used to create a scan.</p>
     */
    inline CreateScanRequest& WithResourceId(const ResourceId& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier for an input resource used to create a scan.</p>
     */
    inline CreateScanRequest& WithResourceId(ResourceId&& value) { SetResourceId(std::move(value)); return *this;}


    /**
     * <p>The unique name that CodeGuru Security uses to track revisions across
     * multiple scans of the same resource. Only allowed for a <code>STANDARD</code>
     * scan type. If not specified, it will be auto generated. </p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }

    /**
     * <p>The unique name that CodeGuru Security uses to track revisions across
     * multiple scans of the same resource. Only allowed for a <code>STANDARD</code>
     * scan type. If not specified, it will be auto generated. </p>
     */
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }

    /**
     * <p>The unique name that CodeGuru Security uses to track revisions across
     * multiple scans of the same resource. Only allowed for a <code>STANDARD</code>
     * scan type. If not specified, it will be auto generated. </p>
     */
    inline void SetScanName(const Aws::String& value) { m_scanNameHasBeenSet = true; m_scanName = value; }

    /**
     * <p>The unique name that CodeGuru Security uses to track revisions across
     * multiple scans of the same resource. Only allowed for a <code>STANDARD</code>
     * scan type. If not specified, it will be auto generated. </p>
     */
    inline void SetScanName(Aws::String&& value) { m_scanNameHasBeenSet = true; m_scanName = std::move(value); }

    /**
     * <p>The unique name that CodeGuru Security uses to track revisions across
     * multiple scans of the same resource. Only allowed for a <code>STANDARD</code>
     * scan type. If not specified, it will be auto generated. </p>
     */
    inline void SetScanName(const char* value) { m_scanNameHasBeenSet = true; m_scanName.assign(value); }

    /**
     * <p>The unique name that CodeGuru Security uses to track revisions across
     * multiple scans of the same resource. Only allowed for a <code>STANDARD</code>
     * scan type. If not specified, it will be auto generated. </p>
     */
    inline CreateScanRequest& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}

    /**
     * <p>The unique name that CodeGuru Security uses to track revisions across
     * multiple scans of the same resource. Only allowed for a <code>STANDARD</code>
     * scan type. If not specified, it will be auto generated. </p>
     */
    inline CreateScanRequest& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}

    /**
     * <p>The unique name that CodeGuru Security uses to track revisions across
     * multiple scans of the same resource. Only allowed for a <code>STANDARD</code>
     * scan type. If not specified, it will be auto generated. </p>
     */
    inline CreateScanRequest& WithScanName(const char* value) { SetScanName(value); return *this;}


    /**
     * <p>The type of scan, either <code>Standard</code> or <code>Express</code>.
     * Defaults to <code>Standard</code> type if missing.</p> <p> <code>Express</code>
     * scans run on limited resources and use a limited set of detectors to analyze
     * your code in near-real time. <code>Standard</code> scans have standard resource
     * limits and use the full set of detectors to analyze your code.</p>
     */
    inline const ScanType& GetScanType() const{ return m_scanType; }

    /**
     * <p>The type of scan, either <code>Standard</code> or <code>Express</code>.
     * Defaults to <code>Standard</code> type if missing.</p> <p> <code>Express</code>
     * scans run on limited resources and use a limited set of detectors to analyze
     * your code in near-real time. <code>Standard</code> scans have standard resource
     * limits and use the full set of detectors to analyze your code.</p>
     */
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }

    /**
     * <p>The type of scan, either <code>Standard</code> or <code>Express</code>.
     * Defaults to <code>Standard</code> type if missing.</p> <p> <code>Express</code>
     * scans run on limited resources and use a limited set of detectors to analyze
     * your code in near-real time. <code>Standard</code> scans have standard resource
     * limits and use the full set of detectors to analyze your code.</p>
     */
    inline void SetScanType(const ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }

    /**
     * <p>The type of scan, either <code>Standard</code> or <code>Express</code>.
     * Defaults to <code>Standard</code> type if missing.</p> <p> <code>Express</code>
     * scans run on limited resources and use a limited set of detectors to analyze
     * your code in near-real time. <code>Standard</code> scans have standard resource
     * limits and use the full set of detectors to analyze your code.</p>
     */
    inline void SetScanType(ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }

    /**
     * <p>The type of scan, either <code>Standard</code> or <code>Express</code>.
     * Defaults to <code>Standard</code> type if missing.</p> <p> <code>Express</code>
     * scans run on limited resources and use a limited set of detectors to analyze
     * your code in near-real time. <code>Standard</code> scans have standard resource
     * limits and use the full set of detectors to analyze your code.</p>
     */
    inline CreateScanRequest& WithScanType(const ScanType& value) { SetScanType(value); return *this;}

    /**
     * <p>The type of scan, either <code>Standard</code> or <code>Express</code>.
     * Defaults to <code>Standard</code> type if missing.</p> <p> <code>Express</code>
     * scans run on limited resources and use a limited set of detectors to analyze
     * your code in near-real time. <code>Standard</code> scans have standard resource
     * limits and use the full set of detectors to analyze your code.</p>
     */
    inline CreateScanRequest& WithScanType(ScanType&& value) { SetScanType(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline CreateScanRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline CreateScanRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline CreateScanRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline CreateScanRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline CreateScanRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline CreateScanRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline CreateScanRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline CreateScanRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline CreateScanRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    AnalysisType m_analysisType;
    bool m_analysisTypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ResourceId m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    ScanType m_scanType;
    bool m_scanTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
