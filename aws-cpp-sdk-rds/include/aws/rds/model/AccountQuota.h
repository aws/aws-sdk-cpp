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
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Describes a quota for an AWS account.</p> <p>The following are account
   * quotas:</p> <ul> <li> <p> <code>AllocatedStorage</code> - The total allocated
   * storage per account, in GiB. The used value is the total allocated storage in
   * the account, in GiB.</p> </li> <li> <p>
   * <code>AuthorizationsPerDBSecurityGroup</code> - The number of ingress rules per
   * DB security group. The used value is the highest number of ingress rules in a DB
   * security group in the account. Other DB security groups in the account might
   * have a lower number of ingress rules.</p> </li> <li> <p>
   * <code>CustomEndpointsPerDBCluster</code> - The number of custom endpoints per DB
   * cluster. The used value is the highest number of custom endpoints in a DB
   * clusters in the account. Other DB clusters in the account might have a lower
   * number of custom endpoints.</p> </li> <li> <p>
   * <code>DBClusterParameterGroups</code> - The number of DB cluster parameter
   * groups per account, excluding default parameter groups. The used value is the
   * count of nondefault DB cluster parameter groups in the account.</p> </li> <li>
   * <p> <code>DBClusterRoles</code> - The number of associated AWS Identity and
   * Access Management (IAM) roles per DB cluster. The used value is the highest
   * number of associated IAM roles for a DB cluster in the account. Other DB
   * clusters in the account might have a lower number of associated IAM roles.</p>
   * </li> <li> <p> <code>DBClusters</code> - The number of DB clusters per account.
   * The used value is the count of DB clusters in the account.</p> </li> <li> <p>
   * <code>DBInstanceRoles</code> - The number of associated IAM roles per DB
   * instance. The used value is the highest number of associated IAM roles for a DB
   * instance in the account. Other DB instances in the account might have a lower
   * number of associated IAM roles.</p> </li> <li> <p> <code>DBInstances</code> -
   * The number of DB instances per account. The used value is the count of the DB
   * instances in the account.</p> </li> <li> <p> <code>DBParameterGroups</code> -
   * The number of DB parameter groups per account, excluding default parameter
   * groups. The used value is the count of nondefault DB parameter groups in the
   * account.</p> </li> <li> <p> <code>DBSecurityGroups</code> - The number of DB
   * security groups (not VPC security groups) per account, excluding the default
   * security group. The used value is the count of nondefault DB security groups in
   * the account.</p> </li> <li> <p> <code>DBSubnetGroups</code> - The number of DB
   * subnet groups per account. The used value is the count of the DB subnet groups
   * in the account.</p> </li> <li> <p> <code>EventSubscriptions</code> - The number
   * of event subscriptions per account. The used value is the count of the event
   * subscriptions in the account.</p> </li> <li> <p> <code>ManualSnapshots</code> -
   * The number of manual DB snapshots per account. The used value is the count of
   * the manual DB snapshots in the account.</p> </li> <li> <p>
   * <code>OptionGroups</code> - The number of DB option groups per account,
   * excluding default option groups. The used value is the count of nondefault DB
   * option groups in the account.</p> </li> <li> <p>
   * <code>ReadReplicasPerMaster</code> - The number of Read Replicas per DB
   * instance. The used value is the highest number of Read Replicas for a DB
   * instance in the account. Other DB instances in the account might have a lower
   * number of Read Replicas.</p> </li> <li> <p> <code>ReservedDBInstances</code> -
   * The number of reserved DB instances per account. The used value is the count of
   * the active reserved DB instances in the account.</p> </li> <li> <p>
   * <code>SubnetsPerDBSubnetGroup</code> - The number of subnets per DB subnet
   * group. The used value is highest number of subnets for a DB subnet group in the
   * account. Other DB subnet groups in the account might have a lower number of
   * subnets.</p> </li> </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Limits.html">Limits</a>
   * in the <i>Amazon RDS User Guide</i> and <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_Limits.html">Limits</a>
   * in the <i>Amazon Aurora User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AccountQuota">AWS
   * API Reference</a></p>
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
    inline bool AccountQuotaNameHasBeenSet() const { return m_accountQuotaNameHasBeenSet; }

    /**
     * <p>The name of the Amazon RDS quota for this AWS account.</p>
     */
    inline void SetAccountQuotaName(const Aws::String& value) { m_accountQuotaNameHasBeenSet = true; m_accountQuotaName = value; }

    /**
     * <p>The name of the Amazon RDS quota for this AWS account.</p>
     */
    inline void SetAccountQuotaName(Aws::String&& value) { m_accountQuotaNameHasBeenSet = true; m_accountQuotaName = std::move(value); }

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
    inline AccountQuota& WithAccountQuotaName(Aws::String&& value) { SetAccountQuotaName(std::move(value)); return *this;}

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
    inline bool UsedHasBeenSet() const { return m_usedHasBeenSet; }

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
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

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
