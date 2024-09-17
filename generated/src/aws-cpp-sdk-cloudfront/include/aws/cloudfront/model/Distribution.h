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
    AWS_CLOUDFRONT_API Distribution();
    AWS_CLOUDFRONT_API Distribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Distribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The distribution's identifier. For example: <code>E1U5RQF7T870K0</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Distribution& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Distribution& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Distribution& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline Distribution& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline Distribution& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline Distribution& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution's status. When the status is <code>Deployed</code>, the
     * distribution's information is fully propagated to all CloudFront edge
     * locations.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Distribution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Distribution& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Distribution& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the distribution was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline Distribution& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline Distribution& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of invalidation batches currently in progress.</p>
     */
    inline int GetInProgressInvalidationBatches() const{ return m_inProgressInvalidationBatches; }
    inline bool InProgressInvalidationBatchesHasBeenSet() const { return m_inProgressInvalidationBatchesHasBeenSet; }
    inline void SetInProgressInvalidationBatches(int value) { m_inProgressInvalidationBatchesHasBeenSet = true; m_inProgressInvalidationBatches = value; }
    inline Distribution& WithInProgressInvalidationBatches(int value) { SetInProgressInvalidationBatches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution's CloudFront domain name. For example:
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline Distribution& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline Distribution& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline Distribution& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>This field contains a list of
     * Amazon Web Services account IDs and the active CloudFront key pairs in each
     * account that CloudFront can use to verify the signatures of signed URLs or
     * signed cookies.</p>
     */
    inline const ActiveTrustedSigners& GetActiveTrustedSigners() const{ return m_activeTrustedSigners; }
    inline bool ActiveTrustedSignersHasBeenSet() const { return m_activeTrustedSignersHasBeenSet; }
    inline void SetActiveTrustedSigners(const ActiveTrustedSigners& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = value; }
    inline void SetActiveTrustedSigners(ActiveTrustedSigners&& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = std::move(value); }
    inline Distribution& WithActiveTrustedSigners(const ActiveTrustedSigners& value) { SetActiveTrustedSigners(value); return *this;}
    inline Distribution& WithActiveTrustedSigners(ActiveTrustedSigners&& value) { SetActiveTrustedSigners(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field contains a list of key groups and the public keys in each key
     * group that CloudFront can use to verify the signatures of signed URLs or signed
     * cookies.</p>
     */
    inline const ActiveTrustedKeyGroups& GetActiveTrustedKeyGroups() const{ return m_activeTrustedKeyGroups; }
    inline bool ActiveTrustedKeyGroupsHasBeenSet() const { return m_activeTrustedKeyGroupsHasBeenSet; }
    inline void SetActiveTrustedKeyGroups(const ActiveTrustedKeyGroups& value) { m_activeTrustedKeyGroupsHasBeenSet = true; m_activeTrustedKeyGroups = value; }
    inline void SetActiveTrustedKeyGroups(ActiveTrustedKeyGroups&& value) { m_activeTrustedKeyGroupsHasBeenSet = true; m_activeTrustedKeyGroups = std::move(value); }
    inline Distribution& WithActiveTrustedKeyGroups(const ActiveTrustedKeyGroups& value) { SetActiveTrustedKeyGroups(value); return *this;}
    inline Distribution& WithActiveTrustedKeyGroups(ActiveTrustedKeyGroups&& value) { SetActiveTrustedKeyGroups(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution's configuration.</p>
     */
    inline const DistributionConfig& GetDistributionConfig() const{ return m_distributionConfig; }
    inline bool DistributionConfigHasBeenSet() const { return m_distributionConfigHasBeenSet; }
    inline void SetDistributionConfig(const DistributionConfig& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = value; }
    inline void SetDistributionConfig(DistributionConfig&& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = std::move(value); }
    inline Distribution& WithDistributionConfig(const DistributionConfig& value) { SetDistributionConfig(value); return *this;}
    inline Distribution& WithDistributionConfig(DistributionConfig&& value) { SetDistributionConfig(std::move(value)); return *this;}
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
    inline const Aws::Vector<AliasICPRecordal>& GetAliasICPRecordals() const{ return m_aliasICPRecordals; }
    inline bool AliasICPRecordalsHasBeenSet() const { return m_aliasICPRecordalsHasBeenSet; }
    inline void SetAliasICPRecordals(const Aws::Vector<AliasICPRecordal>& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals = value; }
    inline void SetAliasICPRecordals(Aws::Vector<AliasICPRecordal>&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals = std::move(value); }
    inline Distribution& WithAliasICPRecordals(const Aws::Vector<AliasICPRecordal>& value) { SetAliasICPRecordals(value); return *this;}
    inline Distribution& WithAliasICPRecordals(Aws::Vector<AliasICPRecordal>&& value) { SetAliasICPRecordals(std::move(value)); return *this;}
    inline Distribution& AddAliasICPRecordals(const AliasICPRecordal& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals.push_back(value); return *this; }
    inline Distribution& AddAliasICPRecordals(AliasICPRecordal&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    int m_inProgressInvalidationBatches;
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
