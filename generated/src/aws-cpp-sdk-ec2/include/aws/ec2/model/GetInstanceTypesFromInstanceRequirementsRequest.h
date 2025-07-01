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
    AWS_EC2_API GetInstanceTypesFromInstanceRequirementsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceTypesFromInstanceRequirements"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processor architecture type.</p>
     */
    inline const Aws::Vector<ArchitectureType>& GetArchitectureTypes() const { return m_architectureTypes; }
    inline bool ArchitectureTypesHasBeenSet() const { return m_architectureTypesHasBeenSet; }
    template<typename ArchitectureTypesT = Aws::Vector<ArchitectureType>>
    void SetArchitectureTypes(ArchitectureTypesT&& value) { m_architectureTypesHasBeenSet = true; m_architectureTypes = std::forward<ArchitectureTypesT>(value); }
    template<typename ArchitectureTypesT = Aws::Vector<ArchitectureType>>
    GetInstanceTypesFromInstanceRequirementsRequest& WithArchitectureTypes(ArchitectureTypesT&& value) { SetArchitectureTypes(std::forward<ArchitectureTypesT>(value)); return *this;}
    inline GetInstanceTypesFromInstanceRequirementsRequest& AddArchitectureTypes(ArchitectureType value) { m_architectureTypesHasBeenSet = true; m_architectureTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The virtualization type.</p>
     */
    inline const Aws::Vector<VirtualizationType>& GetVirtualizationTypes() const { return m_virtualizationTypes; }
    inline bool VirtualizationTypesHasBeenSet() const { return m_virtualizationTypesHasBeenSet; }
    template<typename VirtualizationTypesT = Aws::Vector<VirtualizationType>>
    void SetVirtualizationTypes(VirtualizationTypesT&& value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes = std::forward<VirtualizationTypesT>(value); }
    template<typename VirtualizationTypesT = Aws::Vector<VirtualizationType>>
    GetInstanceTypesFromInstanceRequirementsRequest& WithVirtualizationTypes(VirtualizationTypesT&& value) { SetVirtualizationTypes(std::forward<VirtualizationTypesT>(value)); return *this;}
    inline GetInstanceTypesFromInstanceRequirementsRequest& AddVirtualizationTypes(VirtualizationType value) { m_virtualizationTypesHasBeenSet = true; m_virtualizationTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes required for the instance types.</p>
     */
    inline const InstanceRequirementsRequest& GetInstanceRequirements() const { return m_instanceRequirements; }
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
    template<typename InstanceRequirementsT = InstanceRequirementsRequest>
    void SetInstanceRequirements(InstanceRequirementsT&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::forward<InstanceRequirementsT>(value); }
    template<typename InstanceRequirementsT = InstanceRequirementsRequest>
    GetInstanceTypesFromInstanceRequirementsRequest& WithInstanceRequirements(InstanceRequirementsT&& value) { SetInstanceRequirements(std::forward<InstanceRequirementsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetInstanceTypesFromInstanceRequirementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetInstanceTypesFromInstanceRequirementsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::String>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::String>
    GetInstanceTypesFromInstanceRequirementsRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<ArchitectureType> m_architectureTypes;
    bool m_architectureTypesHasBeenSet = false;

    Aws::Vector<VirtualizationType> m_virtualizationTypes;
    bool m_virtualizationTypesHasBeenSet = false;

    InstanceRequirementsRequest m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
