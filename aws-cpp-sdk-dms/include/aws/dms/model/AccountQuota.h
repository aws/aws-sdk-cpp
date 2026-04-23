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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes a quota for an AWS account, for example, the number of replication
   * instances allowed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/AccountQuota">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API AccountQuota
  {
  public:
    AccountQuota();
    AccountQuota(Aws::Utils::Json::JsonView jsonValue);
    AccountQuota& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS DMS quota for this AWS account.</p>
     */
    inline const Aws::String& GetAccountQuotaName() const{ return m_accountQuotaName; }

    /**
     * <p>The name of the AWS DMS quota for this AWS account.</p>
     */
    inline bool AccountQuotaNameHasBeenSet() const { return m_accountQuotaNameHasBeenSet; }

    /**
     * <p>The name of the AWS DMS quota for this AWS account.</p>
     */
    inline void SetAccountQuotaName(const Aws::String& value) { m_accountQuotaNameHasBeenSet = true; m_accountQuotaName = value; }

    /**
     * <p>The name of the AWS DMS quota for this AWS account.</p>
     */
    inline void SetAccountQuotaName(Aws::String&& value) { m_accountQuotaNameHasBeenSet = true; m_accountQuotaName = std::move(value); }

    /**
     * <p>The name of the AWS DMS quota for this AWS account.</p>
     */
    inline void SetAccountQuotaName(const char* value) { m_accountQuotaNameHasBeenSet = true; m_accountQuotaName.assign(value); }

    /**
     * <p>The name of the AWS DMS quota for this AWS account.</p>
     */
    inline AccountQuota& WithAccountQuotaName(const Aws::String& value) { SetAccountQuotaName(value); return *this;}

    /**
     * <p>The name of the AWS DMS quota for this AWS account.</p>
     */
    inline AccountQuota& WithAccountQuotaName(Aws::String&& value) { SetAccountQuotaName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS DMS quota for this AWS account.</p>
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
} // namespace DatabaseMigrationService
} // namespace Aws
