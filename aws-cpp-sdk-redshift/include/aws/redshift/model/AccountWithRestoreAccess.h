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
   * <p>Describes an AWS customer account authorized to restore a
   * snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AccountWithRestoreAccess">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API AccountWithRestoreAccess
  {
  public:
    AccountWithRestoreAccess();
    AccountWithRestoreAccess(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccountWithRestoreAccess& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of an AWS customer account authorized to restore a
     * snapshot.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The identifier of an AWS customer account authorized to restore a
     * snapshot.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The identifier of an AWS customer account authorized to restore a
     * snapshot.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The identifier of an AWS customer account authorized to restore a
     * snapshot.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The identifier of an AWS customer account authorized to restore a
     * snapshot.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The identifier of an AWS customer account authorized to restore a
     * snapshot.</p>
     */
    inline AccountWithRestoreAccess& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The identifier of an AWS customer account authorized to restore a
     * snapshot.</p>
     */
    inline AccountWithRestoreAccess& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an AWS customer account authorized to restore a
     * snapshot.</p>
     */
    inline AccountWithRestoreAccess& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The identifier of an AWS support account authorized to restore a snapshot.
     * For AWS support, the identifier is <code>amazon-redshift-support</code>. </p>
     */
    inline const Aws::String& GetAccountAlias() const{ return m_accountAlias; }

    /**
     * <p>The identifier of an AWS support account authorized to restore a snapshot.
     * For AWS support, the identifier is <code>amazon-redshift-support</code>. </p>
     */
    inline bool AccountAliasHasBeenSet() const { return m_accountAliasHasBeenSet; }

    /**
     * <p>The identifier of an AWS support account authorized to restore a snapshot.
     * For AWS support, the identifier is <code>amazon-redshift-support</code>. </p>
     */
    inline void SetAccountAlias(const Aws::String& value) { m_accountAliasHasBeenSet = true; m_accountAlias = value; }

    /**
     * <p>The identifier of an AWS support account authorized to restore a snapshot.
     * For AWS support, the identifier is <code>amazon-redshift-support</code>. </p>
     */
    inline void SetAccountAlias(Aws::String&& value) { m_accountAliasHasBeenSet = true; m_accountAlias = std::move(value); }

    /**
     * <p>The identifier of an AWS support account authorized to restore a snapshot.
     * For AWS support, the identifier is <code>amazon-redshift-support</code>. </p>
     */
    inline void SetAccountAlias(const char* value) { m_accountAliasHasBeenSet = true; m_accountAlias.assign(value); }

    /**
     * <p>The identifier of an AWS support account authorized to restore a snapshot.
     * For AWS support, the identifier is <code>amazon-redshift-support</code>. </p>
     */
    inline AccountWithRestoreAccess& WithAccountAlias(const Aws::String& value) { SetAccountAlias(value); return *this;}

    /**
     * <p>The identifier of an AWS support account authorized to restore a snapshot.
     * For AWS support, the identifier is <code>amazon-redshift-support</code>. </p>
     */
    inline AccountWithRestoreAccess& WithAccountAlias(Aws::String&& value) { SetAccountAlias(std::move(value)); return *this;}

    /**
     * <p>The identifier of an AWS support account authorized to restore a snapshot.
     * For AWS support, the identifier is <code>amazon-redshift-support</code>. </p>
     */
    inline AccountWithRestoreAccess& WithAccountAlias(const char* value) { SetAccountAlias(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_accountAlias;
    bool m_accountAliasHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
