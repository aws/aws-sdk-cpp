/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>A set of filters by which to return Recovery Instances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeRecoveryInstancesRequestFilters">AWS
   * API Reference</a></p>
   */
  class DescribeRecoveryInstancesRequestFilters
  {
  public:
    AWS_DRS_API DescribeRecoveryInstancesRequestFilters() = default;
    AWS_DRS_API DescribeRecoveryInstancesRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DescribeRecoveryInstancesRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of Recovery Instance IDs that should be returned. An empty array
     * means all Recovery Instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecoveryInstanceIDs() const { return m_recoveryInstanceIDs; }
    inline bool RecoveryInstanceIDsHasBeenSet() const { return m_recoveryInstanceIDsHasBeenSet; }
    template<typename RecoveryInstanceIDsT = Aws::Vector<Aws::String>>
    void SetRecoveryInstanceIDs(RecoveryInstanceIDsT&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs = std::forward<RecoveryInstanceIDsT>(value); }
    template<typename RecoveryInstanceIDsT = Aws::Vector<Aws::String>>
    DescribeRecoveryInstancesRequestFilters& WithRecoveryInstanceIDs(RecoveryInstanceIDsT&& value) { SetRecoveryInstanceIDs(std::forward<RecoveryInstanceIDsT>(value)); return *this;}
    template<typename RecoveryInstanceIDsT = Aws::String>
    DescribeRecoveryInstancesRequestFilters& AddRecoveryInstanceIDs(RecoveryInstanceIDsT&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.emplace_back(std::forward<RecoveryInstanceIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of Source Server IDs for which associated Recovery Instances should
     * be returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const { return m_sourceServerIDs; }
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }
    template<typename SourceServerIDsT = Aws::Vector<Aws::String>>
    void SetSourceServerIDs(SourceServerIDsT&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::forward<SourceServerIDsT>(value); }
    template<typename SourceServerIDsT = Aws::Vector<Aws::String>>
    DescribeRecoveryInstancesRequestFilters& WithSourceServerIDs(SourceServerIDsT&& value) { SetSourceServerIDs(std::forward<SourceServerIDsT>(value)); return *this;}
    template<typename SourceServerIDsT = Aws::String>
    DescribeRecoveryInstancesRequestFilters& AddSourceServerIDs(SourceServerIDsT&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.emplace_back(std::forward<SourceServerIDsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_recoveryInstanceIDs;
    bool m_recoveryInstanceIDsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceServerIDs;
    bool m_sourceServerIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
