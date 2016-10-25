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
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Describes a quota for an AWS account, for example, the number of DB instances
   * allowed.</p>
   */
  class AWS_RDS_API AccountQuota
  {
  public:
    AccountQuota();
    AccountQuota(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccountQuota& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of the Amazon RDS quota for this AWS account.</p>
     */
    inline const Aws::String& GetAccountQuotaName() const{ return m_accountQuotaName; }

    /**
     * <p>The name of the Amazon RDS quota for this AWS account.</p>
     */
    inline void SetAccountQuotaName(const Aws::String& value) { m_accountQuotaNameHasBeenSet = true; m_accountQuotaName = value; }

    /**
     * <p>The name of the Amazon RDS quota for this AWS account.</p>
     */
    inline void SetAccountQuotaName(Aws::String&& value) { m_accountQuotaNameHasBeenSet = true; m_accountQuotaName = value; }

    /**
     * <p>The name of the Amazon RDS quota for this AWS account.</p>
     */
    inline void SetAccountQuotaName(const char* value) { m_accountQuotaNameHasBeenSet = true; m_accountQuotaName.assign(value); }

    /**
     * <p>The name of the Amazon RDS quota for this AWS account.</p>
     */
    inline AccountQuota& WithAccountQuotaName(const Aws::String& value) { SetAccountQuotaName(value); return *this;}

    /**
     * <p>The name of the Amazon RDS quota for this AWS account.</p>
     */
    inline AccountQuota& WithAccountQuotaName(Aws::String&& value) { SetAccountQuotaName(value); return *this;}

    /**
     * <p>The name of the Amazon RDS quota for this AWS account.</p>
     */
    inline AccountQuota& WithAccountQuotaName(const char* value) { SetAccountQuotaName(value); return *this;}

    /**
     * <p>The amount currently used toward the quota maximum.</p>
     */
    inline long long GetUsed() const{ return m_used; }

    /**
     * <p>The amount currently used toward the quota maximum.</p>
     */
    inline void SetUsed(long long value) { m_usedHasBeenSet = true; m_used = value; }

    /**
     * <p>The amount currently used toward the quota maximum.</p>
     */
    inline AccountQuota& WithUsed(long long value) { SetUsed(value); return *this;}

    /**
     * <p>The maximum allowed value for the quota.</p>
     */
    inline long long GetMax() const{ return m_max; }

    /**
     * <p>The maximum allowed value for the quota.</p>
     */
    inline void SetMax(long long value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum allowed value for the quota.</p>
     */
    inline AccountQuota& WithMax(long long value) { SetMax(value); return *this;}

  private:
    Aws::String m_accountQuotaName;
    bool m_accountQuotaNameHasBeenSet;
    long long m_used;
    bool m_usedHasBeenSet;
    long long m_max;
    bool m_maxHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
