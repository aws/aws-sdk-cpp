/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A set of filters by which to return Source Servers.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeSourceServersRequestFilters">AWS
   * API Reference</a></p>
   */
  class DescribeSourceServersRequestFilters
  {
  public:
    AWS_DRS_API DescribeSourceServersRequestFilters() = default;
    AWS_DRS_API DescribeSourceServersRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DescribeSourceServersRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An ID that describes the hardware of the Source Server. This is either an EC2
     * instance id, a VMware uuid or a mac address.</p>
     */
    inline const Aws::String& GetHardwareId() const { return m_hardwareId; }
    inline bool HardwareIdHasBeenSet() const { return m_hardwareIdHasBeenSet; }
    template<typename HardwareIdT = Aws::String>
    void SetHardwareId(HardwareIdT&& value) { m_hardwareIdHasBeenSet = true; m_hardwareId = std::forward<HardwareIdT>(value); }
    template<typename HardwareIdT = Aws::String>
    DescribeSourceServersRequestFilters& WithHardwareId(HardwareIdT&& value) { SetHardwareId(std::forward<HardwareIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Source Servers IDs that should be returned. An empty array means
     * all Source Servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const { return m_sourceServerIDs; }
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }
    template<typename SourceServerIDsT = Aws::Vector<Aws::String>>
    void SetSourceServerIDs(SourceServerIDsT&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::forward<SourceServerIDsT>(value); }
    template<typename SourceServerIDsT = Aws::Vector<Aws::String>>
    DescribeSourceServersRequestFilters& WithSourceServerIDs(SourceServerIDsT&& value) { SetSourceServerIDs(std::forward<SourceServerIDsT>(value)); return *this;}
    template<typename SourceServerIDsT = Aws::String>
    DescribeSourceServersRequestFilters& AddSourceServerIDs(SourceServerIDsT&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.emplace_back(std::forward<SourceServerIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of staging account IDs that extended source servers belong to. An
     * empty array means all source servers will be shown.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStagingAccountIDs() const { return m_stagingAccountIDs; }
    inline bool StagingAccountIDsHasBeenSet() const { return m_stagingAccountIDsHasBeenSet; }
    template<typename StagingAccountIDsT = Aws::Vector<Aws::String>>
    void SetStagingAccountIDs(StagingAccountIDsT&& value) { m_stagingAccountIDsHasBeenSet = true; m_stagingAccountIDs = std::forward<StagingAccountIDsT>(value); }
    template<typename StagingAccountIDsT = Aws::Vector<Aws::String>>
    DescribeSourceServersRequestFilters& WithStagingAccountIDs(StagingAccountIDsT&& value) { SetStagingAccountIDs(std::forward<StagingAccountIDsT>(value)); return *this;}
    template<typename StagingAccountIDsT = Aws::String>
    DescribeSourceServersRequestFilters& AddStagingAccountIDs(StagingAccountIDsT&& value) { m_stagingAccountIDsHasBeenSet = true; m_stagingAccountIDs.emplace_back(std::forward<StagingAccountIDsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_hardwareId;
    bool m_hardwareIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceServerIDs;
    bool m_sourceServerIDsHasBeenSet = false;

    Aws::Vector<Aws::String> m_stagingAccountIDs;
    bool m_stagingAccountIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
