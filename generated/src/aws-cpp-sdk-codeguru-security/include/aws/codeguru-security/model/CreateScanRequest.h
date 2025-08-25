/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/ResourceId.h>
#include <aws/codeguru-security/model/ScanType.h>
#include <aws/codeguru-security/model/AnalysisType.h>
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
    AWS_CODEGURUSECURITY_API CreateScanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScan"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The idempotency token for the request. Amazon CodeGuru Security uses this
     * value to prevent the accidental creation of duplicate scans if there are
     * failures and retries.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateScanRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the resource object to be scanned.</p>
     */
    inline const ResourceId& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = ResourceId>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = ResourceId>
    CreateScanRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name that CodeGuru Security uses to track revisions across
     * multiple scans of the same resource. Only allowed for a <code>STANDARD</code>
     * scan type. </p>
     */
    inline const Aws::String& GetScanName() const { return m_scanName; }
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }
    template<typename ScanNameT = Aws::String>
    void SetScanName(ScanNameT&& value) { m_scanNameHasBeenSet = true; m_scanName = std::forward<ScanNameT>(value); }
    template<typename ScanNameT = Aws::String>
    CreateScanRequest& WithScanName(ScanNameT&& value) { SetScanName(std::forward<ScanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of scan, either <code>Standard</code> or <code>Express</code>.
     * Defaults to <code>Standard</code> type if missing.</p> <p> <code>Express</code>
     * scans run on limited resources and use a limited set of detectors to analyze
     * your code in near-real time. <code>Standard</code> scans have standard resource
     * limits and use the full set of detectors to analyze your code.</p>
     */
    inline ScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(ScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline CreateScanRequest& WithScanType(ScanType value) { SetScanType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analysis you want CodeGuru Security to perform in the scan,
     * either <code>Security</code> or <code>All</code>. The <code>Security</code> type
     * only generates findings related to security. The <code>All</code> type generates
     * both security findings and quality findings. Defaults to <code>Security</code>
     * type if missing.</p>
     */
    inline AnalysisType GetAnalysisType() const { return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(AnalysisType value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline CreateScanRequest& WithAnalysisType(AnalysisType value) { SetAnalysisType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs used to tag a scan. A tag is a custom attribute
     * label with two parts:</p> <ul> <li> <p>A tag key. For example,
     * <code>CostCenter</code>, <code>Environment</code>, or <code>Secret</code>. Tag
     * keys are case sensitive.</p> </li> <li> <p>An optional tag value field. For
     * example, <code>111122223333</code>, <code>Production</code>, or a team name.
     * Omitting the tag value is the same as using an empty string. Tag values are case
     * sensitive.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateScanRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateScanRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    ResourceId m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    ScanType m_scanType{ScanType::NOT_SET};
    bool m_scanTypeHasBeenSet = false;

    AnalysisType m_analysisType{AnalysisType::NOT_SET};
    bool m_analysisTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
