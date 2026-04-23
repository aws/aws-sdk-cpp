/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * Settings for Nielsen Configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NielsenConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API NielsenConfiguration
  {
  public:
    NielsenConfiguration();
    NielsenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NielsenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use Nielsen Configuration (NielsenConfiguration) to set the Nielsen measurement
     * system breakout code. Supported values are 0, 3, 7, and 9.
     */
    inline int GetBreakoutCode() const{ return m_breakoutCode; }

    /**
     * Use Nielsen Configuration (NielsenConfiguration) to set the Nielsen measurement
     * system breakout code. Supported values are 0, 3, 7, and 9.
     */
    inline bool BreakoutCodeHasBeenSet() const { return m_breakoutCodeHasBeenSet; }

    /**
     * Use Nielsen Configuration (NielsenConfiguration) to set the Nielsen measurement
     * system breakout code. Supported values are 0, 3, 7, and 9.
     */
    inline void SetBreakoutCode(int value) { m_breakoutCodeHasBeenSet = true; m_breakoutCode = value; }

    /**
     * Use Nielsen Configuration (NielsenConfiguration) to set the Nielsen measurement
     * system breakout code. Supported values are 0, 3, 7, and 9.
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
    bool m_breakoutCodeHasBeenSet;

    Aws::String m_distributorId;
    bool m_distributorIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
