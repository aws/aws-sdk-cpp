﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A response that contains the results of a finding aggregation by
   * AMI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AmiAggregationResponse">AWS
   * API Reference</a></p>
   */
  class AmiAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API AmiAggregationResponse();
    AWS_INSPECTOR2_API AmiAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AmiAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the AMI.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AmiAggregationResponse& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AmiAggregationResponse& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AmiAggregationResponse& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of Amazon EC2 instances using this AMI.</p>
     */
    inline long long GetAffectedInstances() const{ return m_affectedInstances; }
    inline bool AffectedInstancesHasBeenSet() const { return m_affectedInstancesHasBeenSet; }
    inline void SetAffectedInstances(long long value) { m_affectedInstancesHasBeenSet = true; m_affectedInstances = value; }
    inline AmiAggregationResponse& WithAffectedInstances(long long value) { SetAffectedInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI that findings were aggregated for.</p>
     */
    inline const Aws::String& GetAmi() const{ return m_ami; }
    inline bool AmiHasBeenSet() const { return m_amiHasBeenSet; }
    inline void SetAmi(const Aws::String& value) { m_amiHasBeenSet = true; m_ami = value; }
    inline void SetAmi(Aws::String&& value) { m_amiHasBeenSet = true; m_ami = std::move(value); }
    inline void SetAmi(const char* value) { m_amiHasBeenSet = true; m_ami.assign(value); }
    inline AmiAggregationResponse& WithAmi(const Aws::String& value) { SetAmi(value); return *this;}
    inline AmiAggregationResponse& WithAmi(Aws::String&& value) { SetAmi(std::move(value)); return *this;}
    inline AmiAggregationResponse& WithAmi(const char* value) { SetAmi(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the count of matched findings per severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }
    inline AmiAggregationResponse& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}
    inline AmiAggregationResponse& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    long long m_affectedInstances;
    bool m_affectedInstancesHasBeenSet = false;

    Aws::String m_ami;
    bool m_amiHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
