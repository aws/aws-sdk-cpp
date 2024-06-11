/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An alias (also called a CNAME) and the CloudFront distribution and Amazon Web
   * Services account ID that it's associated with. The distribution and account IDs
   * are partially hidden, which allows you to identify the distributions and
   * accounts that you own, but helps to protect the information of ones that you
   * don't own.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ConflictingAlias">AWS
   * API Reference</a></p>
   */
  class ConflictingAlias
  {
  public:
    AWS_CLOUDFRONT_API ConflictingAlias();
    AWS_CLOUDFRONT_API ConflictingAlias(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ConflictingAlias& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>An alias (also called a CNAME).</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline ConflictingAlias& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline ConflictingAlias& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline ConflictingAlias& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The (partially hidden) ID of the CloudFront distribution associated with the
     * alias.</p>
     */
    inline const Aws::String& GetDistributionId() const{ return m_distributionId; }
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }
    inline void SetDistributionId(const Aws::String& value) { m_distributionIdHasBeenSet = true; m_distributionId = value; }
    inline void SetDistributionId(Aws::String&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::move(value); }
    inline void SetDistributionId(const char* value) { m_distributionIdHasBeenSet = true; m_distributionId.assign(value); }
    inline ConflictingAlias& WithDistributionId(const Aws::String& value) { SetDistributionId(value); return *this;}
    inline ConflictingAlias& WithDistributionId(Aws::String&& value) { SetDistributionId(std::move(value)); return *this;}
    inline ConflictingAlias& WithDistributionId(const char* value) { SetDistributionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The (partially hidden) ID of the Amazon Web Services account that owns the
     * distribution that's associated with the alias.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ConflictingAlias& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ConflictingAlias& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ConflictingAlias& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
