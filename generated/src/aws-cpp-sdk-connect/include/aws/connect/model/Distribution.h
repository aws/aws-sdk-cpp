/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about a traffic distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Distribution">AWS
   * API Reference</a></p>
   */
  class Distribution
  {
  public:
    AWS_CONNECT_API Distribution();
    AWS_CONNECT_API Distribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Distribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Region where the traffic is distributed.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region where the traffic is distributed.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where the traffic is distributed.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region where the traffic is distributed.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where the traffic is distributed.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region where the traffic is distributed.</p>
     */
    inline Distribution& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where the traffic is distributed.</p>
     */
    inline Distribution& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where the traffic is distributed.</p>
     */
    inline Distribution& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The percentage of the traffic that is distributed, in increments of 10.</p>
     */
    inline int GetPercentage() const{ return m_percentage; }

    /**
     * <p>The percentage of the traffic that is distributed, in increments of 10.</p>
     */
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }

    /**
     * <p>The percentage of the traffic that is distributed, in increments of 10.</p>
     */
    inline void SetPercentage(int value) { m_percentageHasBeenSet = true; m_percentage = value; }

    /**
     * <p>The percentage of the traffic that is distributed, in increments of 10.</p>
     */
    inline Distribution& WithPercentage(int value) { SetPercentage(value); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    int m_percentage;
    bool m_percentageHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
