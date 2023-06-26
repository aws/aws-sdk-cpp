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
    AWS_DRS_API DescribeRecoveryInstancesRequestFilters();
    AWS_DRS_API DescribeRecoveryInstancesRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DescribeRecoveryInstancesRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of Recovery Instance IDs that should be returned. An empty array
     * means all Recovery Instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecoveryInstanceIDs() const{ return m_recoveryInstanceIDs; }

    /**
     * <p>An array of Recovery Instance IDs that should be returned. An empty array
     * means all Recovery Instances.</p>
     */
    inline bool RecoveryInstanceIDsHasBeenSet() const { return m_recoveryInstanceIDsHasBeenSet; }

    /**
     * <p>An array of Recovery Instance IDs that should be returned. An empty array
     * means all Recovery Instances.</p>
     */
    inline void SetRecoveryInstanceIDs(const Aws::Vector<Aws::String>& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs = value; }

    /**
     * <p>An array of Recovery Instance IDs that should be returned. An empty array
     * means all Recovery Instances.</p>
     */
    inline void SetRecoveryInstanceIDs(Aws::Vector<Aws::String>&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs = std::move(value); }

    /**
     * <p>An array of Recovery Instance IDs that should be returned. An empty array
     * means all Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesRequestFilters& WithRecoveryInstanceIDs(const Aws::Vector<Aws::String>& value) { SetRecoveryInstanceIDs(value); return *this;}

    /**
     * <p>An array of Recovery Instance IDs that should be returned. An empty array
     * means all Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesRequestFilters& WithRecoveryInstanceIDs(Aws::Vector<Aws::String>&& value) { SetRecoveryInstanceIDs(std::move(value)); return *this;}

    /**
     * <p>An array of Recovery Instance IDs that should be returned. An empty array
     * means all Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesRequestFilters& AddRecoveryInstanceIDs(const Aws::String& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.push_back(value); return *this; }

    /**
     * <p>An array of Recovery Instance IDs that should be returned. An empty array
     * means all Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesRequestFilters& AddRecoveryInstanceIDs(Aws::String&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Recovery Instance IDs that should be returned. An empty array
     * means all Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesRequestFilters& AddRecoveryInstanceIDs(const char* value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.push_back(value); return *this; }


    /**
     * <p>An array of Source Server IDs for which associated Recovery Instances should
     * be returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const{ return m_sourceServerIDs; }

    /**
     * <p>An array of Source Server IDs for which associated Recovery Instances should
     * be returned.</p>
     */
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }

    /**
     * <p>An array of Source Server IDs for which associated Recovery Instances should
     * be returned.</p>
     */
    inline void SetSourceServerIDs(const Aws::Vector<Aws::String>& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = value; }

    /**
     * <p>An array of Source Server IDs for which associated Recovery Instances should
     * be returned.</p>
     */
    inline void SetSourceServerIDs(Aws::Vector<Aws::String>&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::move(value); }

    /**
     * <p>An array of Source Server IDs for which associated Recovery Instances should
     * be returned.</p>
     */
    inline DescribeRecoveryInstancesRequestFilters& WithSourceServerIDs(const Aws::Vector<Aws::String>& value) { SetSourceServerIDs(value); return *this;}

    /**
     * <p>An array of Source Server IDs for which associated Recovery Instances should
     * be returned.</p>
     */
    inline DescribeRecoveryInstancesRequestFilters& WithSourceServerIDs(Aws::Vector<Aws::String>&& value) { SetSourceServerIDs(std::move(value)); return *this;}

    /**
     * <p>An array of Source Server IDs for which associated Recovery Instances should
     * be returned.</p>
     */
    inline DescribeRecoveryInstancesRequestFilters& AddSourceServerIDs(const Aws::String& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

    /**
     * <p>An array of Source Server IDs for which associated Recovery Instances should
     * be returned.</p>
     */
    inline DescribeRecoveryInstancesRequestFilters& AddSourceServerIDs(Aws::String&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Source Server IDs for which associated Recovery Instances should
     * be returned.</p>
     */
    inline DescribeRecoveryInstancesRequestFilters& AddSourceServerIDs(const char* value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_recoveryInstanceIDs;
    bool m_recoveryInstanceIDsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceServerIDs;
    bool m_sourceServerIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
