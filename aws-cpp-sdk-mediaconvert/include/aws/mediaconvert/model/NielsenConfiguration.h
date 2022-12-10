/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for your Nielsen configuration. If you don't do Nielsen measurement and
   * analytics, ignore these settings. When you enable Nielsen configuration
   * (nielsenConfiguration), MediaConvert enables PCM to ID3 tagging for all outputs
   * in the job. To enable Nielsen configuration programmatically, include an
   * instance of nielsenConfiguration in your JSON job specification. Even if you
   * don't include any children of nielsenConfiguration, you still enable the
   * setting.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NielsenConfiguration">AWS
   * API Reference</a></p>
   */
  class NielsenConfiguration
  {
  public:
    AWS_MEDIACONVERT_API NielsenConfiguration();
    AWS_MEDIACONVERT_API NielsenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API NielsenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Nielsen has discontinued the use of breakout code functionality. If you must
     * include this property, set the value to zero.
     */
    inline int GetBreakoutCode() const{ return m_breakoutCode; }

    /**
     * Nielsen has discontinued the use of breakout code functionality. If you must
     * include this property, set the value to zero.
     */
    inline bool BreakoutCodeHasBeenSet() const { return m_breakoutCodeHasBeenSet; }

    /**
     * Nielsen has discontinued the use of breakout code functionality. If you must
     * include this property, set the value to zero.
     */
    inline void SetBreakoutCode(int value) { m_breakoutCodeHasBeenSet = true; m_breakoutCode = value; }

    /**
     * Nielsen has discontinued the use of breakout code functionality. If you must
     * include this property, set the value to zero.
     */
    inline NielsenConfiguration& WithBreakoutCode(int value) { SetBreakoutCode(value); return *this;}


    /**
     * Use Distributor ID (DistributorID) to specify the distributor ID that is
     * assigned to your organization by Neilsen.
     */
    inline const Aws::String& GetDistributorId() const{ return m_distributorId; }

    /**
     * Use Distributor ID (DistributorID) to specify the distributor ID that is
     * assigned to your organization by Neilsen.
     */
    inline bool DistributorIdHasBeenSet() const { return m_distributorIdHasBeenSet; }

    /**
     * Use Distributor ID (DistributorID) to specify the distributor ID that is
     * assigned to your organization by Neilsen.
     */
    inline void SetDistributorId(const Aws::String& value) { m_distributorIdHasBeenSet = true; m_distributorId = value; }

    /**
     * Use Distributor ID (DistributorID) to specify the distributor ID that is
     * assigned to your organization by Neilsen.
     */
    inline void SetDistributorId(Aws::String&& value) { m_distributorIdHasBeenSet = true; m_distributorId = std::move(value); }

    /**
     * Use Distributor ID (DistributorID) to specify the distributor ID that is
     * assigned to your organization by Neilsen.
     */
    inline void SetDistributorId(const char* value) { m_distributorIdHasBeenSet = true; m_distributorId.assign(value); }

    /**
     * Use Distributor ID (DistributorID) to specify the distributor ID that is
     * assigned to your organization by Neilsen.
     */
    inline NielsenConfiguration& WithDistributorId(const Aws::String& value) { SetDistributorId(value); return *this;}

    /**
     * Use Distributor ID (DistributorID) to specify the distributor ID that is
     * assigned to your organization by Neilsen.
     */
    inline NielsenConfiguration& WithDistributorId(Aws::String&& value) { SetDistributorId(std::move(value)); return *this;}

    /**
     * Use Distributor ID (DistributorID) to specify the distributor ID that is
     * assigned to your organization by Neilsen.
     */
    inline NielsenConfiguration& WithDistributorId(const char* value) { SetDistributorId(value); return *this;}

  private:

    int m_breakoutCode;
    bool m_breakoutCodeHasBeenSet = false;

    Aws::String m_distributorId;
    bool m_distributorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
