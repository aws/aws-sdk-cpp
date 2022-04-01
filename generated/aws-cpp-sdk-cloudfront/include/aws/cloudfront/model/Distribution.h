﻿/**
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
  class AWS_CLOUDFRONT_API Distribution
  {
  public:
    Distribution();
    Distribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    Distribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>. </p>
     */
    inline Distribution& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>. </p>
     */
    inline Distribution& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the distribution. For example:
     * <code>EDFDVBD632BHDS5</code>. </p>
     */
    inline Distribution& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline Distribution& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline Distribution& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) for the distribution. For example:
     * <code>arn:aws:cloudfront::123456789012:distribution/EDFDVBD632BHDS5</code>,
     * where <code>123456789012</code> is your Amazon Web Services account ID.</p>
     */
    inline Distribution& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>This response element indicates the current status of the distribution. When
     * the status is <code>Deployed</code>, the distribution's information is fully
     * propagated to all CloudFront edge locations. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>This response element indicates the current status of the distribution. When
     * the status is <code>Deployed</code>, the distribution's information is fully
     * propagated to all CloudFront edge locations. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>This response element indicates the current status of the distribution. When
     * the status is <code>Deployed</code>, the distribution's information is fully
     * propagated to all CloudFront edge locations. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>This response element indicates the current status of the distribution. When
     * the status is <code>Deployed</code>, the distribution's information is fully
     * propagated to all CloudFront edge locations. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>This response element indicates the current status of the distribution. When
     * the status is <code>Deployed</code>, the distribution's information is fully
     * propagated to all CloudFront edge locations. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>This response element indicates the current status of the distribution. When
     * the status is <code>Deployed</code>, the distribution's information is fully
     * propagated to all CloudFront edge locations. </p>
     */
    inline Distribution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>This response element indicates the current status of the distribution. When
     * the status is <code>Deployed</code>, the distribution's information is fully
     * propagated to all CloudFront edge locations. </p>
     */
    inline Distribution& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>This response element indicates the current status of the distribution. When
     * the status is <code>Deployed</code>, the distribution's information is fully
     * propagated to all CloudFront edge locations. </p>
     */
    inline Distribution& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The date and time the distribution was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time the distribution was last modified. </p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time the distribution was last modified. </p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time the distribution was last modified. </p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time the distribution was last modified. </p>
     */
    inline Distribution& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the distribution was last modified. </p>
     */
    inline Distribution& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The number of invalidation batches currently in progress. </p>
     */
    inline int GetInProgressInvalidationBatches() const{ return m_inProgressInvalidationBatches; }

    /**
     * <p>The number of invalidation batches currently in progress. </p>
     */
    inline bool InProgressInvalidationBatchesHasBeenSet() const { return m_inProgressInvalidationBatchesHasBeenSet; }

    /**
     * <p>The number of invalidation batches currently in progress. </p>
     */
    inline void SetInProgressInvalidationBatches(int value) { m_inProgressInvalidationBatchesHasBeenSet = true; m_inProgressInvalidationBatches = value; }

    /**
     * <p>The number of invalidation batches currently in progress. </p>
     */
    inline Distribution& WithInProgressInvalidationBatches(int value) { SetInProgressInvalidationBatches(value); return *this;}


    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>. </p>
     */
    inline Distribution& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>. </p>
     */
    inline Distribution& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name corresponding to the distribution, for example,
     * <code>d111111abcdef8.cloudfront.net</code>. </p>
     */
    inline Distribution& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>CloudFront automatically adds
     * this field to the response if you’ve configured a cache behavior in this
     * distribution to serve private content using trusted signers. This field contains
     * a list of Amazon Web Services account IDs and the active CloudFront key pairs in
     * each account that CloudFront can use to verify the signatures of signed URLs or
     * signed cookies.</p>
     */
    inline const ActiveTrustedSigners& GetActiveTrustedSigners() const{ return m_activeTrustedSigners; }

    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>CloudFront automatically adds
     * this field to the response if you’ve configured a cache behavior in this
     * distribution to serve private content using trusted signers. This field contains
     * a list of Amazon Web Services account IDs and the active CloudFront key pairs in
     * each account that CloudFront can use to verify the signatures of signed URLs or
     * signed cookies.</p>
     */
    inline bool ActiveTrustedSignersHasBeenSet() const { return m_activeTrustedSignersHasBeenSet; }

    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>CloudFront automatically adds
     * this field to the response if you’ve configured a cache behavior in this
     * distribution to serve private content using trusted signers. This field contains
     * a list of Amazon Web Services account IDs and the active CloudFront key pairs in
     * each account that CloudFront can use to verify the signatures of signed URLs or
     * signed cookies.</p>
     */
    inline void SetActiveTrustedSigners(const ActiveTrustedSigners& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = value; }

    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>CloudFront automatically adds
     * this field to the response if you’ve configured a cache behavior in this
     * distribution to serve private content using trusted signers. This field contains
     * a list of Amazon Web Services account IDs and the active CloudFront key pairs in
     * each account that CloudFront can use to verify the signatures of signed URLs or
     * signed cookies.</p>
     */
    inline void SetActiveTrustedSigners(ActiveTrustedSigners&& value) { m_activeTrustedSignersHasBeenSet = true; m_activeTrustedSigners = std::move(value); }

    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>CloudFront automatically adds
     * this field to the response if you’ve configured a cache behavior in this
     * distribution to serve private content using trusted signers. This field contains
     * a list of Amazon Web Services account IDs and the active CloudFront key pairs in
     * each account that CloudFront can use to verify the signatures of signed URLs or
     * signed cookies.</p>
     */
    inline Distribution& WithActiveTrustedSigners(const ActiveTrustedSigners& value) { SetActiveTrustedSigners(value); return *this;}

    /**
     *  <p>We recommend using <code>TrustedKeyGroups</code> instead of
     * <code>TrustedSigners</code>.</p>  <p>CloudFront automatically adds
     * this field to the response if you’ve configured a cache behavior in this
     * distribution to serve private content using trusted signers. This field contains
     * a list of Amazon Web Services account IDs and the active CloudFront key pairs in
     * each account that CloudFront can use to verify the signatures of signed URLs or
     * signed cookies.</p>
     */
    inline Distribution& WithActiveTrustedSigners(ActiveTrustedSigners&& value) { SetActiveTrustedSigners(std::move(value)); return *this;}


    /**
     * <p>CloudFront automatically adds this field to the response if you’ve configured
     * a cache behavior in this distribution to serve private content using key groups.
     * This field contains a list of key groups and the public keys in each key group
     * that CloudFront can use to verify the signatures of signed URLs or signed
     * cookies.</p>
     */
    inline const ActiveTrustedKeyGroups& GetActiveTrustedKeyGroups() const{ return m_activeTrustedKeyGroups; }

    /**
     * <p>CloudFront automatically adds this field to the response if you’ve configured
     * a cache behavior in this distribution to serve private content using key groups.
     * This field contains a list of key groups and the public keys in each key group
     * that CloudFront can use to verify the signatures of signed URLs or signed
     * cookies.</p>
     */
    inline bool ActiveTrustedKeyGroupsHasBeenSet() const { return m_activeTrustedKeyGroupsHasBeenSet; }

    /**
     * <p>CloudFront automatically adds this field to the response if you’ve configured
     * a cache behavior in this distribution to serve private content using key groups.
     * This field contains a list of key groups and the public keys in each key group
     * that CloudFront can use to verify the signatures of signed URLs or signed
     * cookies.</p>
     */
    inline void SetActiveTrustedKeyGroups(const ActiveTrustedKeyGroups& value) { m_activeTrustedKeyGroupsHasBeenSet = true; m_activeTrustedKeyGroups = value; }

    /**
     * <p>CloudFront automatically adds this field to the response if you’ve configured
     * a cache behavior in this distribution to serve private content using key groups.
     * This field contains a list of key groups and the public keys in each key group
     * that CloudFront can use to verify the signatures of signed URLs or signed
     * cookies.</p>
     */
    inline void SetActiveTrustedKeyGroups(ActiveTrustedKeyGroups&& value) { m_activeTrustedKeyGroupsHasBeenSet = true; m_activeTrustedKeyGroups = std::move(value); }

    /**
     * <p>CloudFront automatically adds this field to the response if you’ve configured
     * a cache behavior in this distribution to serve private content using key groups.
     * This field contains a list of key groups and the public keys in each key group
     * that CloudFront can use to verify the signatures of signed URLs or signed
     * cookies.</p>
     */
    inline Distribution& WithActiveTrustedKeyGroups(const ActiveTrustedKeyGroups& value) { SetActiveTrustedKeyGroups(value); return *this;}

    /**
     * <p>CloudFront automatically adds this field to the response if you’ve configured
     * a cache behavior in this distribution to serve private content using key groups.
     * This field contains a list of key groups and the public keys in each key group
     * that CloudFront can use to verify the signatures of signed URLs or signed
     * cookies.</p>
     */
    inline Distribution& WithActiveTrustedKeyGroups(ActiveTrustedKeyGroups&& value) { SetActiveTrustedKeyGroups(std::move(value)); return *this;}


    /**
     * <p>The current configuration information for the distribution. Send a
     * <code>GET</code> request to the <code>/<i>CloudFront API
     * version</i>/distribution ID/config</code> resource.</p>
     */
    inline const DistributionConfig& GetDistributionConfig() const{ return m_distributionConfig; }

    /**
     * <p>The current configuration information for the distribution. Send a
     * <code>GET</code> request to the <code>/<i>CloudFront API
     * version</i>/distribution ID/config</code> resource.</p>
     */
    inline bool DistributionConfigHasBeenSet() const { return m_distributionConfigHasBeenSet; }

    /**
     * <p>The current configuration information for the distribution. Send a
     * <code>GET</code> request to the <code>/<i>CloudFront API
     * version</i>/distribution ID/config</code> resource.</p>
     */
    inline void SetDistributionConfig(const DistributionConfig& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = value; }

    /**
     * <p>The current configuration information for the distribution. Send a
     * <code>GET</code> request to the <code>/<i>CloudFront API
     * version</i>/distribution ID/config</code> resource.</p>
     */
    inline void SetDistributionConfig(DistributionConfig&& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = std::move(value); }

    /**
     * <p>The current configuration information for the distribution. Send a
     * <code>GET</code> request to the <code>/<i>CloudFront API
     * version</i>/distribution ID/config</code> resource.</p>
     */
    inline Distribution& WithDistributionConfig(const DistributionConfig& value) { SetDistributionConfig(value); return *this;}

    /**
     * <p>The current configuration information for the distribution. Send a
     * <code>GET</code> request to the <code>/<i>CloudFront API
     * version</i>/distribution ID/config</code> resource.</p>
     */
    inline Distribution& WithDistributionConfig(DistributionConfig&& value) { SetDistributionConfig(std::move(value)); return *this;}


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
    inline bool AliasICPRecordalsHasBeenSet() const { return m_aliasICPRecordalsHasBeenSet; }

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
    inline void SetAliasICPRecordals(const Aws::Vector<AliasICPRecordal>& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals = value; }

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
    inline void SetAliasICPRecordals(Aws::Vector<AliasICPRecordal>&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals = std::move(value); }

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
    inline Distribution& WithAliasICPRecordals(const Aws::Vector<AliasICPRecordal>& value) { SetAliasICPRecordals(value); return *this;}

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
    inline Distribution& WithAliasICPRecordals(Aws::Vector<AliasICPRecordal>&& value) { SetAliasICPRecordals(std::move(value)); return *this;}

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
    inline Distribution& AddAliasICPRecordals(const AliasICPRecordal& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals.push_back(value); return *this; }

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
    inline Distribution& AddAliasICPRecordals(AliasICPRecordal&& value) { m_aliasICPRecordalsHasBeenSet = true; m_aliasICPRecordals.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    int m_inProgressInvalidationBatches;
    bool m_inProgressInvalidationBatchesHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    ActiveTrustedSigners m_activeTrustedSigners;
    bool m_activeTrustedSignersHasBeenSet;

    ActiveTrustedKeyGroups m_activeTrustedKeyGroups;
    bool m_activeTrustedKeyGroupsHasBeenSet;

    DistributionConfig m_distributionConfig;
    bool m_distributionConfigHasBeenSet;

    Aws::Vector<AliasICPRecordal> m_aliasICPRecordals;
    bool m_aliasICPRecordalsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
