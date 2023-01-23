/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector metadata specific to Snowflake. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SnowflakeMetadata">AWS
   * API Reference</a></p>
   */
  class SnowflakeMetadata
  {
  public:
    AWS_APPFLOW_API SnowflakeMetadata();
    AWS_APPFLOW_API SnowflakeMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SnowflakeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the supported Amazon Web Services Regions when using Snowflake.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedRegions() const{ return m_supportedRegions; }

    /**
     * <p> Specifies the supported Amazon Web Services Regions when using Snowflake.
     * </p>
     */
    inline bool SupportedRegionsHasBeenSet() const { return m_supportedRegionsHasBeenSet; }

    /**
     * <p> Specifies the supported Amazon Web Services Regions when using Snowflake.
     * </p>
     */
    inline void SetSupportedRegions(const Aws::Vector<Aws::String>& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions = value; }

    /**
     * <p> Specifies the supported Amazon Web Services Regions when using Snowflake.
     * </p>
     */
    inline void SetSupportedRegions(Aws::Vector<Aws::String>&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions = std::move(value); }

    /**
     * <p> Specifies the supported Amazon Web Services Regions when using Snowflake.
     * </p>
     */
    inline SnowflakeMetadata& WithSupportedRegions(const Aws::Vector<Aws::String>& value) { SetSupportedRegions(value); return *this;}

    /**
     * <p> Specifies the supported Amazon Web Services Regions when using Snowflake.
     * </p>
     */
    inline SnowflakeMetadata& WithSupportedRegions(Aws::Vector<Aws::String>&& value) { SetSupportedRegions(std::move(value)); return *this;}

    /**
     * <p> Specifies the supported Amazon Web Services Regions when using Snowflake.
     * </p>
     */
    inline SnowflakeMetadata& AddSupportedRegions(const Aws::String& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions.push_back(value); return *this; }

    /**
     * <p> Specifies the supported Amazon Web Services Regions when using Snowflake.
     * </p>
     */
    inline SnowflakeMetadata& AddSupportedRegions(Aws::String&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions.push_back(std::move(value)); return *this; }

    /**
     * <p> Specifies the supported Amazon Web Services Regions when using Snowflake.
     * </p>
     */
    inline SnowflakeMetadata& AddSupportedRegions(const char* value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_supportedRegions;
    bool m_supportedRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
