﻿/**
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
  class AWS_DRS_API DescribeSourceServersRequestFilters
  {
  public:
    DescribeSourceServersRequestFilters();
    DescribeSourceServersRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    DescribeSourceServersRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ID that describes the hardware of the Source Server. This is either an EC2
     * instance id, a VMware uuid or a mac address.</p>
     */
    inline const Aws::String& GetHardwareId() const{ return m_hardwareId; }

    /**
     * <p>An ID that describes the hardware of the Source Server. This is either an EC2
     * instance id, a VMware uuid or a mac address.</p>
     */
    inline bool HardwareIdHasBeenSet() const { return m_hardwareIdHasBeenSet; }

    /**
     * <p>An ID that describes the hardware of the Source Server. This is either an EC2
     * instance id, a VMware uuid or a mac address.</p>
     */
    inline void SetHardwareId(const Aws::String& value) { m_hardwareIdHasBeenSet = true; m_hardwareId = value; }

    /**
     * <p>An ID that describes the hardware of the Source Server. This is either an EC2
     * instance id, a VMware uuid or a mac address.</p>
     */
    inline void SetHardwareId(Aws::String&& value) { m_hardwareIdHasBeenSet = true; m_hardwareId = std::move(value); }

    /**
     * <p>An ID that describes the hardware of the Source Server. This is either an EC2
     * instance id, a VMware uuid or a mac address.</p>
     */
    inline void SetHardwareId(const char* value) { m_hardwareIdHasBeenSet = true; m_hardwareId.assign(value); }

    /**
     * <p>An ID that describes the hardware of the Source Server. This is either an EC2
     * instance id, a VMware uuid or a mac address.</p>
     */
    inline DescribeSourceServersRequestFilters& WithHardwareId(const Aws::String& value) { SetHardwareId(value); return *this;}

    /**
     * <p>An ID that describes the hardware of the Source Server. This is either an EC2
     * instance id, a VMware uuid or a mac address.</p>
     */
    inline DescribeSourceServersRequestFilters& WithHardwareId(Aws::String&& value) { SetHardwareId(std::move(value)); return *this;}

    /**
     * <p>An ID that describes the hardware of the Source Server. This is either an EC2
     * instance id, a VMware uuid or a mac address.</p>
     */
    inline DescribeSourceServersRequestFilters& WithHardwareId(const char* value) { SetHardwareId(value); return *this;}


    /**
     * <p>An array of Source Servers IDs that should be returned. An empty array means
     * all Source Servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const{ return m_sourceServerIDs; }

    /**
     * <p>An array of Source Servers IDs that should be returned. An empty array means
     * all Source Servers.</p>
     */
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }

    /**
     * <p>An array of Source Servers IDs that should be returned. An empty array means
     * all Source Servers.</p>
     */
    inline void SetSourceServerIDs(const Aws::Vector<Aws::String>& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = value; }

    /**
     * <p>An array of Source Servers IDs that should be returned. An empty array means
     * all Source Servers.</p>
     */
    inline void SetSourceServerIDs(Aws::Vector<Aws::String>&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::move(value); }

    /**
     * <p>An array of Source Servers IDs that should be returned. An empty array means
     * all Source Servers.</p>
     */
    inline DescribeSourceServersRequestFilters& WithSourceServerIDs(const Aws::Vector<Aws::String>& value) { SetSourceServerIDs(value); return *this;}

    /**
     * <p>An array of Source Servers IDs that should be returned. An empty array means
     * all Source Servers.</p>
     */
    inline DescribeSourceServersRequestFilters& WithSourceServerIDs(Aws::Vector<Aws::String>&& value) { SetSourceServerIDs(std::move(value)); return *this;}

    /**
     * <p>An array of Source Servers IDs that should be returned. An empty array means
     * all Source Servers.</p>
     */
    inline DescribeSourceServersRequestFilters& AddSourceServerIDs(const Aws::String& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

    /**
     * <p>An array of Source Servers IDs that should be returned. An empty array means
     * all Source Servers.</p>
     */
    inline DescribeSourceServersRequestFilters& AddSourceServerIDs(Aws::String&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Source Servers IDs that should be returned. An empty array means
     * all Source Servers.</p>
     */
    inline DescribeSourceServersRequestFilters& AddSourceServerIDs(const char* value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

  private:

    Aws::String m_hardwareId;
    bool m_hardwareIdHasBeenSet;

    Aws::Vector<Aws::String> m_sourceServerIDs;
    bool m_sourceServerIDsHasBeenSet;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
