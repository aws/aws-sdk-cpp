/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceRequirementsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ArchitectureType.h>
#include <aws/ec2/model/VirtualizationType.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetInstanceTypesFromInstanceRequirementsRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetInstanceTypesFromInstanceRequirementsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceTypesFromInstanceRequirements"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The processor architecture type.</p>
     */
    inline const Aws::Vector<ArchitectureType>& GetArchitectureTypes() const{ return m_architectureTypes; }

    /**
     * <p>The processor architecture type.</p>
     */
    inline bool ArchitectureTypesHasBeenSet() const { return m_architectureTypesHasBeenSet; }

    /**
     * <p>The processor architecture type.</p>
     */
    inline void SetArchitectureTypes(const Aws::Vector<ArchitectureType>& value) { m_architectureTypesHasBeenSet = true; m_architectureTypes = value; }

    /**
     * <p>The processor architecture type.</p>
     */
    inline void SetArchitectureTypes(Aws::Vector<ArchitectureType>&& value) { m_architectureTypesHasBeenSet = true; m_architectureTypes = std::move(value); }

    /**
     * <p>The processor architecture type.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithArchitectureTypes(const Aws::Vector<ArchitectureType>& value) { SetArchitectureTypes(value); return *this;}

    /**
     * <p>The processor architecture type.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithArchitectureTypes(Aws::Vector<ArchitectureType>&& value) { SetArchitectureTypes(std::move(value)); return *this;}

    /**
     * <p>The processor architecture type.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& AddArchitectureTypes(const ArchitectureType& value) { m_architectureTypesHasBeenSet = true; m_architectureTypes.push_back(value); return *this; }

    /**
     * <p>The processor architecture type.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& AddArchitectureTypes(ArchitectureType&& value) { m_architectureTypesHasBeenSet = true; m_architectureTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The virtualization type.</p>
     */
    inline const Aws::Vector<VirtualizationType>& GetVirtualizationTypes() const{ return m_virtualizationTypes; }

    /**
     * <p>The virtualization type.</p>
     */
    inline bool VirtualizationTypesHasBeenSet() const { return m_virtualizationTypesHasBeenSet; }

    /**
     * <p>The virtualization type.</p>
     */
    inline void SetVirtualizationTypes(const Aws::Vector<VirtualizationType>& value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes = value; }

    /**
     * <p>The virtualization type.</p>
     */
    inline void SetVirtualizationTypes(Aws::Vector<VirtualizationType>&& value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes = std::move(value); }

    /**
     * <p>The virtualization type.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithVirtualizationTypes(const Aws::Vector<VirtualizationType>& value) { SetVirtualizationTypes(value); return *this;}

    /**
     * <p>The virtualization type.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithVirtualizationTypes(Aws::Vector<VirtualizationType>&& value) { SetVirtualizationTypes(std::move(value)); return *this;}

    /**
     * <p>The virtualization type.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& AddVirtualizationTypes(const VirtualizationType& value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes.push_back(value); return *this; }

    /**
     * <p>The virtualization type.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& AddVirtualizationTypes(VirtualizationType&& value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The attributes required for the instance types.</p>
     */
    inline const InstanceRequirementsRequest& GetInstanceRequirements() const{ return m_instanceRequirements; }

    /**
     * <p>The attributes required for the instance types.</p>
     */
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }

    /**
     * <p>The attributes required for the instance types.</p>
     */
    inline void SetInstanceRequirements(const InstanceRequirementsRequest& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = value; }

    /**
     * <p>The attributes required for the instance types.</p>
     */
    inline void SetInstanceRequirements(InstanceRequirementsRequest&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::move(value); }

    /**
     * <p>The attributes required for the instance types.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithInstanceRequirements(const InstanceRequirementsRequest& value) { SetInstanceRequirements(value); return *this;}

    /**
     * <p>The attributes required for the instance types.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithInstanceRequirements(InstanceRequirementsRequest&& value) { SetInstanceRequirements(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and&#x2028; 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with&#x2028; the returned <code>NextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and&#x2028; 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with&#x2028; the returned <code>NextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and&#x2028; 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with&#x2028; the returned <code>NextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and&#x2028; 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with&#x2028; the returned <code>NextToken</code>
     * value.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<ArchitectureType> m_architectureTypes;
    bool m_architectureTypesHasBeenSet = false;

    Aws::Vector<VirtualizationType> m_virtualizationTypes;
    bool m_virtualizationTypesHasBeenSet = false;

    InstanceRequirementsRequest m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
