/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Describes an AWS customer account authorized to restore a snapshot.</p>
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
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The identifier of an AWS customer account authorized to restore a
     * snapshot.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

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
    inline AccountWithRestoreAccess& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>The identifier of an AWS customer account authorized to restore a
     * snapshot.</p>
     */
    inline AccountWithRestoreAccess& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
