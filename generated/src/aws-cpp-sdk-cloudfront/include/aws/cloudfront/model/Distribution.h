/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/ActiveTrustedSigners.h>
#include <aws/cloudfront/model/ActiveTrustedKeyGroups.h>
#include <aws/cloudfront/model/DistributionConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/AliasICPRecordal.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A distribution tells CloudFront where you want content to be delivered from,
   * and the details about how to track and manage content delivery.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/Distribution">AWS
   * API Reference</a></p>
   */
  class Distribution
  {
  public:
    AWS_CLOUDFRONT_API Distribution() = default;
    AWS_CLOUDFRONT_API Distribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Distribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The distribution's identifier. For example: <code>E1U5RQF7T870K0</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Distribution& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    Distribution& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution's status. When the status is <code>Deployed</code>, the
     * distribution's information is fully propagated to all CloudFront edge
     * locations.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Distribution& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the distribution was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    Distribution& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of invalidation batches currently in progress.</p>
     */
    inline int GetInProgressInvalidationBatches() const { return m_inProgressInvalidationBatches; }
    inline bool InProgressInvalidationBatchesHasBeenSet() const { return m_inProgressInvalidationBatchesHasBeenSet; }
    inline void SetInProgressInvalidationBatches(int value) { m_inProgressInvalidationBatchesHasBeenSet = true; m_inProgressInvalidationBatches = value; }
    inline Distribution& WithInProgressInvalidationBatches(int value) { SetInProgressInvalidationBatches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution's CloudFront domain name. For example:
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    Distribution& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>This field contains a list of
     * Amazon Web Services account IDs and the active CloudFront key pairs in each
     * account that CloudFront can use to verify the signatures of signed URLs or
     * signed cookies.</p></p>
     */
    inline const ActiveTrustedSigners& GetActiveTrustedSigners() const { return m_activeTrustedSigners; }
    inline bool ActiveTrustedSignersHasBeenSet() const { return m_activeTrustedSignersHasBeenSet; }
    template<typename ActiveTrustedSignersT = ActiveTrustedSigners>
    void SetActiveTrustedSigners(ActiveTrustedSignersT&& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = std::forward<ActiveTrustedSignersT>(value); }
    template<typename ActiveTrustedSignersT = ActiveTrustedSigners>
    Distribution& WithActiveTrustedSigners(ActiveTrustedSignersT&& value) { SetActiveTrustedSigners(std::forward<ActiveTrustedSignersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field contains a list of key groups and the public keys in each key
     * group that CloudFront can use to verify the signatures of signed URLs or signed
     * cookies.</p>
     */
    inline const ActiveTrustedKeyGroups& GetActiveTrustedKeyGroups() const { return m_activeTrustedKeyGroups; }
    inline bool ActiveTrustedKeyGroupsHasBeenSet() const { return m_activeTrustedKeyGroupsHasBeenSet; }
    template<typename ActiveTrustedKeyGroupsT = ActiveTrustedKeyGroups>
    void SetActiveTrustedKeyGroups(ActiveTrustedKeyGroupsT&& value) { m_activeTrustedKeyGroupsHasBeenSet = true; m_activeTrustedKeyGroups = std::forward<ActiveTrustedKeyGroupsT>(value); }
    template<typename ActiveTrustedKeyGroupsT = ActiveTrustedKeyGroups>
    Distribution& WithActiveTrustedKeyGroups(ActiveTrustedKeyGroupsT&& value) { SetActiveTrustedKeyGroups(std::forward<ActiveTrustedKeyGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution's configuration.</p>
     */
    inline const DistributionConfig& GetDistributionConfig() const { return m_distributionConfig; }
    inline bool DistributionConfigHasBeenSet() const { return m_distributionConfigHasBeenSet; }
    template<typename DistributionConfigT = DistributionConfig>
    void SetDistributionConfig(DistributionConfigT&& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = std::forward<DistributionConfigT>(value); }
    template<typename DistributionConfigT = DistributionConfig>
    Distribution& WithDistributionConfig(DistributionConfigT&& value) { SetDistributionConfig(std::forward<DistributionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services services in China customers must file for an Internet
     * Content Provider (ICP) recordal if they want to serve content publicly on an
     * alternate domain name, also known as a CNAME, that they've added to CloudFront.
     * AliasICPRecordal provides the ICP recordal status for CNAMEs associated with
     * distributions.</p> <p>For more information about ICP recordals, see <a
     * href="https://docs.amazonaws.cn/en_us/aws/latest/userguide/accounts-and-credentials.html">
     * Signup, Accounts, and Credentials</a> in <i>Getting Started with Amazon Web
     * Services services in China</i>.</p>
     */
    inline const Aws::Vector<AliasICPRecordal>& GetAliasICPRecordals() const { return m_aliasICPRecordals; }
    inline bool AliasICPRecordalsHasBeenSet() const { return m_aliasICPRecordalsHasBeenSet; }
    template<typename AliasICPRecordalsT = Aws::Vector<AliasICPRecordal>>
    void SetAliasICPRecordals(AliasICPRecordalsT&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals = std::forward<AliasICPRecordalsT>(value); }
    template<typename AliasICPRecordalsT = Aws::Vector<AliasICPRecordal>>
    Distribution& WithAliasICPRecordals(AliasICPRecordalsT&& value) { SetAliasICPRecordals(std::forward<AliasICPRecordalsT>(value)); return *this;}
    template<typename AliasICPRecordalsT = AliasICPRecordal>
    Distribution& AddAliasICPRecordals(AliasICPRecordalsT&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals.emplace_back(std::forward<AliasICPRecordalsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    int m_inProgressInvalidationBatches{0};
    bool m_inProgressInvalidationBatchesHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ActiveTrustedSigners m_activeTrustedSigners;
    bool m_activeTrustedSignersHasBeenSet = false;

    ActiveTrustedKeyGroups m_activeTrustedKeyGroups;
    bool m_activeTrustedKeyGroupsHasBeenSet = false;

    DistributionConfig m_distributionConfig;
    bool m_distributionConfigHasBeenSet = false;

    Aws::Vector<AliasICPRecordal> m_aliasICPRecordals;
    bool m_aliasICPRecordalsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
