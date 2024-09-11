/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about each resource type associated with the
   * <code>groupedByResource</code> statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ResourceStatistics">AWS
   * API Reference</a></p>
   */
  class ResourceStatistics
  {
  public:
    AWS_GUARDDUTY_API ResourceStatistics();
    AWS_GUARDDUTY_API ResourceStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ResourceStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ResourceStatistics& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ResourceStatistics& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ResourceStatistics& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the statistics for this resource was last
     * generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastGeneratedAt() const{ return m_lastGeneratedAt; }
    inline bool LastGeneratedAtHasBeenSet() const { return m_lastGeneratedAtHasBeenSet; }
    inline void SetLastGeneratedAt(const Aws::Utils::DateTime& value) { m_lastGeneratedAtHasBeenSet = true; m_lastGeneratedAt = value; }
    inline void SetLastGeneratedAt(Aws::Utils::DateTime&& value) { m_lastGeneratedAtHasBeenSet = true; m_lastGeneratedAt = std::move(value); }
    inline ResourceStatistics& WithLastGeneratedAt(const Aws::Utils::DateTime& value) { SetLastGeneratedAt(value); return *this;}
    inline ResourceStatistics& WithLastGeneratedAt(Aws::Utils::DateTime&& value) { SetLastGeneratedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID associated with each resource. The following list provides the mapping of
     * the resource type and resource ID.</p> <p class="title"> <b>Mapping of resource
     * and resource ID</b> </p> <ul> <li> <p>AccessKey -
     * <code>resource.accessKeyDetails.accessKeyId</code> </p> </li> <li> <p>Container
     * - <code>resource.containerDetails.id</code> </p> </li> <li> <p>ECSCluster -
     * <code>resource.ecsClusterDetails.name</code> </p> </li> <li> <p>EKSCluster -
     * <code>resource.eksClusterDetails.name</code> </p> </li> <li> <p>Instance -
     * <code>resource.instanceDetails.instanceId</code> </p> </li> <li>
     * <p>KubernetesCluster -
     * <code>resource.kubernetesDetails.kubernetesWorkloadDetails.name</code> </p>
     * </li> <li> <p>Lambda - <code>resource.lambdaDetails.functionName</code> </p>
     * </li> <li> <p>RDSDBInstance -
     * <code>resource.rdsDbInstanceDetails.dbInstanceIdentifier</code> </p> </li> <li>
     * <p>S3Bucket - <code>resource.s3BucketDetails.name</code> </p> </li> <li>
     * <p>S3Object - <code>resource.s3BucketDetails.name</code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ResourceStatistics& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ResourceStatistics& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ResourceStatistics& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ResourceStatistics& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ResourceStatistics& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ResourceStatistics& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of findings associated with this resource.</p>
     */
    inline int GetTotalFindings() const{ return m_totalFindings; }
    inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
    inline void SetTotalFindings(int value) { m_totalFindingsHasBeenSet = true; m_totalFindings = value; }
    inline ResourceStatistics& WithTotalFindings(int value) { SetTotalFindings(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastGeneratedAt;
    bool m_lastGeneratedAtHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    int m_totalFindings;
    bool m_totalFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
