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
    AWS_INSPECTOR2_API Ec2InstanceAggregationResponse();
    AWS_INSPECTOR2_API Ec2InstanceAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Ec2InstanceAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account for the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account for the Amazon EC2 instance.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account for the Amazon EC2 instance.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account for the Amazon EC2 instance.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account for the Amazon EC2 instance.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account for the Amazon EC2 instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account for the Amazon EC2 instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account for the Amazon EC2 instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Machine Image (AMI) of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetAmi() const{ return m_ami; }

    /**
     * <p>The Amazon Machine Image (AMI) of the Amazon EC2 instance.</p>
     */
    inline bool AmiHasBeenSet() const { return m_amiHasBeenSet; }

    /**
     * <p>The Amazon Machine Image (AMI) of the Amazon EC2 instance.</p>
     */
    inline void SetAmi(const Aws::String& value) { m_amiHasBeenSet = true; m_ami = value; }

    /**
     * <p>The Amazon Machine Image (AMI) of the Amazon EC2 instance.</p>
     */
    inline void SetAmi(Aws::String&& value) { m_amiHasBeenSet = true; m_ami = std::move(value); }

    /**
     * <p>The Amazon Machine Image (AMI) of the Amazon EC2 instance.</p>
     */
    inline void SetAmi(const char* value) { m_amiHasBeenSet = true; m_ami.assign(value); }

    /**
     * <p>The Amazon Machine Image (AMI) of the Amazon EC2 instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithAmi(const Aws::String& value) { SetAmi(value); return *this;}

    /**
     * <p>The Amazon Machine Image (AMI) of the Amazon EC2 instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithAmi(Aws::String&& value) { SetAmi(std::move(value)); return *this;}

    /**
     * <p>The Amazon Machine Image (AMI) of the Amazon EC2 instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithAmi(const char* value) { SetAmi(value); return *this;}


    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline Ec2InstanceAggregationResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline Ec2InstanceAggregationResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline Ec2InstanceAggregationResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The tags attached to the instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInstanceTags() const{ return m_instanceTags; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline bool InstanceTagsHasBeenSet() const { return m_instanceTagsHasBeenSet; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline void SetInstanceTags(const Aws::Map<Aws::String, Aws::String>& value) { m_instanceTagsHasBeenSet = true; m_instanceTags = value; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline void SetInstanceTags(Aws::Map<Aws::String, Aws::String>&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags = std::move(value); }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithInstanceTags(const Aws::Map<Aws::String, Aws::String>& value) { SetInstanceTags(value); return *this;}

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithInstanceTags(Aws::Map<Aws::String, Aws::String>&& value) { SetInstanceTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2InstanceAggregationResponse& AddInstanceTags(const Aws::String& key, const Aws::String& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2InstanceAggregationResponse& AddInstanceTags(Aws::String&& key, const Aws::String& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2InstanceAggregationResponse& AddInstanceTags(const Aws::String& key, Aws::String&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2InstanceAggregationResponse& AddInstanceTags(Aws::String&& key, Aws::String&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2InstanceAggregationResponse& AddInstanceTags(const char* key, Aws::String&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2InstanceAggregationResponse& AddInstanceTags(Aws::String&& key, const char* value) { m_instanceTagsHasBeenSet = true; m_instanceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2InstanceAggregationResponse& AddInstanceTags(const char* key, const char* value) { m_instanceTagsHasBeenSet = true; m_instanceTags.emplace(key, value); return *this; }


    /**
     * <p>The number of network findings for the Amazon EC2 instance.</p>
     */
    inline long long GetNetworkFindings() const{ return m_networkFindings; }

    /**
     * <p>The number of network findings for the Amazon EC2 instance.</p>
     */
    inline bool NetworkFindingsHasBeenSet() const { return m_networkFindingsHasBeenSet; }

    /**
     * <p>The number of network findings for the Amazon EC2 instance.</p>
     */
    inline void SetNetworkFindings(long long value) { m_networkFindingsHasBeenSet = true; m_networkFindings = value; }

    /**
     * <p>The number of network findings for the Amazon EC2 instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithNetworkFindings(long long value) { SetNetworkFindings(value); return *this;}


    /**
     * <p>The operating system of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The operating system of the Amazon EC2 instance.</p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>The operating system of the Amazon EC2 instance.</p>
     */
    inline void SetOperatingSystem(const Aws::String& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>The operating system of the Amazon EC2 instance.</p>
     */
    inline void SetOperatingSystem(Aws::String&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>The operating system of the Amazon EC2 instance.</p>
     */
    inline void SetOperatingSystem(const char* value) { m_operatingSystemHasBeenSet = true; m_operatingSystem.assign(value); }

    /**
     * <p>The operating system of the Amazon EC2 instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithOperatingSystem(const Aws::String& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The operating system of the Amazon EC2 instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithOperatingSystem(Aws::String&& value) { SetOperatingSystem(std::move(value)); return *this;}

    /**
     * <p>The operating system of the Amazon EC2 instance.</p>
     */
    inline Ec2InstanceAggregationResponse& WithOperatingSystem(const char* value) { SetOperatingSystem(value); return *this;}


    /**
     * <p>An object that contains the count of matched findings per severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }

    /**
     * <p>An object that contains the count of matched findings per severity.</p>
     */
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }

    /**
     * <p>An object that contains the count of matched findings per severity.</p>
     */
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }

    /**
     * <p>An object that contains the count of matched findings per severity.</p>
     */
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }

    /**
     * <p>An object that contains the count of matched findings per severity.</p>
     */
    inline Ec2InstanceAggregationResponse& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}

    /**
     * <p>An object that contains the count of matched findings per severity.</p>
     */
    inline Ec2InstanceAggregationResponse& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_ami;
    bool m_amiHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_instanceTags;
    bool m_instanceTagsHasBeenSet = false;

    long long m_networkFindings;
    bool m_networkFindingsHasBeenSet = false;

    Aws::String m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
