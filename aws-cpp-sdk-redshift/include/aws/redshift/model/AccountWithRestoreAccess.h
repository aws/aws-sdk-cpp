/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes an Amazon Web Services account authorized to restore a
   * snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AccountWithRestoreAccess">AWS
   * API Reference</a></p>
   */
  class AccountWithRestoreAccess
  {
  public:
    AWS_REDSHIFT_API AccountWithRestoreAccess();
    AWS_REDSHIFT_API AccountWithRestoreAccess(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API AccountWithRestoreAccess& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of an Amazon Web Services account authorized to restore a
     * snapshot.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The identifier of an Amazon Web Services account authorized to restore a
     * snapshot.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The identifier of an Amazon Web Services account authorized to restore a
     * snapshot.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The identifier of an Amazon Web Services account authorized to restore a
     * snapshot.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The identifier of an Amazon Web Services account authorized to restore a
     * snapshot.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The identifier of an Amazon Web Services account authorized to restore a
     * snapshot.</p>
     */
    inline AccountWithRestoreAccess& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The identifier of an Amazon Web Services account authorized to restore a
     * snapshot.</p>
     */
    inline AccountWithRestoreAccess& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an Amazon Web Services account authorized to restore a
     * snapshot.</p>
     */
    inline AccountWithRestoreAccess& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The identifier of an Amazon Web Services support account authorized to
     * restore a snapshot. For Amazon Web Services Support, the identifier is
     * <code>amazon-redshift-support</code>. </p>
     */
    inline const Aws::String& GetAccountAlias() const{ return m_accountAlias; }

    /**
     * <p>The identifier of an Amazon Web Services support account authorized to
     * restore a snapshot. For Amazon Web Services Support, the identifier is
     * <code>amazon-redshift-support</code>. </p>
     */
    inline bool AccountAliasHasBeenSet() const { return m_accountAliasHasBeenSet; }

    /**
     * <p>The identifier of an Amazon Web Services support account authorized to
     * restore a snapshot. For Amazon Web Services Support, the identifier is
     * <code>amazon-redshift-support</code>. </p>
     */
    inline void SetAccountAlias(const Aws::String& value) { m_accountAliasHasBeenSet = true; m_accountAlias = value; }

    /**
     * <p>The identifier of an Amazon Web Services support account authorized to
     * restore a snapshot. For Amazon Web Services Support, the identifier is
     * <code>amazon-redshift-support</code>. </p>
     */
    inline void SetAccountAlias(Aws::String&& value) { m_accountAliasHasBeenSet = true; m_accountAlias = std::move(value); }

    /**
     * <p>The identifier of an Amazon Web Services support account authorized to
     * restore a snapshot. For Amazon Web Services Support, the identifier is
     * <code>amazon-redshift-support</code>. </p>
     */
    inline void SetAccountAlias(const char* value) { m_accountAliasHasBeenSet = true; m_accountAlias.assign(value); }

    /**
     * <p>The identifier of an Amazon Web Services support account authorized to
     * restore a snapshot. For Amazon Web Services Support, the identifier is
     * <code>amazon-redshift-support</code>. </p>
     */
    inline AccountWithRestoreAccess& WithAccountAlias(const Aws::String& value) { SetAccountAlias(value); return *this;}

    /**
     * <p>The identifier of an Amazon Web Services support account authorized to
     * restore a snapshot. For Amazon Web Services Support, the identifier is
     * <code>amazon-redshift-support</code>. </p>
     */
    inline AccountWithRestoreAccess& WithAccountAlias(Aws::String&& value) { SetAccountAlias(std::move(value)); return *this;}

    /**
     * <p>The identifier of an Amazon Web Services support account authorized to
     * restore a snapshot. For Amazon Web Services Support, the identifier is
     * <code>amazon-redshift-support</code>. </p>
     */
    inline AccountWithRestoreAccess& WithAccountAlias(const char* value) { SetAccountAlias(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accountAlias;
    bool m_accountAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
