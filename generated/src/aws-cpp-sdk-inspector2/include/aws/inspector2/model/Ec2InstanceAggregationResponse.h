/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/inspector2/model/SeverityCounts.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A response that contains the results of a finding aggregation by Amazon EC2
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Ec2InstanceAggregationResponse">AWS
   * API Reference</a></p>
   */
  class Ec2InstanceAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API Ec2InstanceAggregationResponse() = default;
    AWS_INSPECTOR2_API Ec2InstanceAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Ec2InstanceAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    Ec2InstanceAggregationResponse& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Machine Image (AMI) of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetAmi() const { return m_ami; }
    inline bool AmiHasBeenSet() const { return m_amiHasBeenSet; }
    template<typename AmiT = Aws::String>
    void SetAmi(AmiT&& value) { m_amiHasBeenSet = true; m_ami = std::forward<AmiT>(value); }
    template<typename AmiT = Aws::String>
    Ec2InstanceAggregationResponse& WithAmi(AmiT&& value) { SetAmi(std::forward<AmiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    template<typename OperatingSystemT = Aws::String>
    void SetOperatingSystem(OperatingSystemT&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::forward<OperatingSystemT>(value); }
    template<typename OperatingSystemT = Aws::String>
    Ec2InstanceAggregationResponse& WithOperatingSystem(OperatingSystemT&& value) { SetOperatingSystem(std::forward<OperatingSystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags attached to the instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInstanceTags() const { return m_instanceTags; }
    inline bool InstanceTagsHasBeenSet() const { return m_instanceTagsHasBeenSet; }
    template<typename InstanceTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetInstanceTags(InstanceTagsT&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags = std::forward<InstanceTagsT>(value); }
    template<typename InstanceTagsT = Aws::Map<Aws::String, Aws::String>>
    Ec2InstanceAggregationResponse& WithInstanceTags(InstanceTagsT&& value) { SetInstanceTags(std::forward<InstanceTagsT>(value)); return *this;}
    template<typename InstanceTagsKeyT = Aws::String, typename InstanceTagsValueT = Aws::String>
    Ec2InstanceAggregationResponse& AddInstanceTags(InstanceTagsKeyT&& key, InstanceTagsValueT&& value) {
      m_instanceTagsHasBeenSet = true; m_instanceTags.emplace(std::forward<InstanceTagsKeyT>(key), std::forward<InstanceTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account for the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Ec2InstanceAggregationResponse& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the count of matched findings per severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
    template<typename SeverityCountsT = SeverityCounts>
    void SetSeverityCounts(SeverityCountsT&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::forward<SeverityCountsT>(value); }
    template<typename SeverityCountsT = SeverityCounts>
    Ec2InstanceAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) { SetSeverityCounts(std::forward<SeverityCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of network findings for the Amazon EC2 instance.</p>
     */
    inline long long GetNetworkFindings() const { return m_networkFindings; }
    inline bool NetworkFindingsHasBeenSet() const { return m_networkFindingsHasBeenSet; }
    inline void SetNetworkFindings(long long value) { m_networkFindingsHasBeenSet = true; m_networkFindings = value; }
    inline Ec2InstanceAggregationResponse& WithNetworkFindings(long long value) { SetNetworkFindings(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_ami;
    bool m_amiHasBeenSet = false;

    Aws::String m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_instanceTags;
    bool m_instanceTagsHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;

    long long m_networkFindings{0};
    bool m_networkFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
