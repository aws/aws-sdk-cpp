/**
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
   * <p>A response that contains the results of a finding aggregation by image
   * layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/PackageAggregationResponse">AWS
   * API Reference</a></p>
   */
  class PackageAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API PackageAggregationResponse();
    AWS_INSPECTOR2_API PackageAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API PackageAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline PackageAggregationResponse& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline PackageAggregationResponse& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline PackageAggregationResponse& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operating system package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline PackageAggregationResponse& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline PackageAggregationResponse& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline PackageAggregationResponse& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the count of matched findings per severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }
    inline PackageAggregationResponse& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}
    inline PackageAggregationResponse& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
