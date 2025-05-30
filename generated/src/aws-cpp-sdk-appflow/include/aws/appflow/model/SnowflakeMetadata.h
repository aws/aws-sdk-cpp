﻿/**
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
    AWS_APPFLOW_API SnowflakeMetadata() = default;
    AWS_APPFLOW_API SnowflakeMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SnowflakeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the supported Amazon Web Services Regions when using Snowflake.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedRegions() const { return m_supportedRegions; }
    inline bool SupportedRegionsHasBeenSet() const { return m_supportedRegionsHasBeenSet; }
    template<typename SupportedRegionsT = Aws::Vector<Aws::String>>
    void SetSupportedRegions(SupportedRegionsT&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions = std::forward<SupportedRegionsT>(value); }
    template<typename SupportedRegionsT = Aws::Vector<Aws::String>>
    SnowflakeMetadata& WithSupportedRegions(SupportedRegionsT&& value) { SetSupportedRegions(std::forward<SupportedRegionsT>(value)); return *this;}
    template<typename SupportedRegionsT = Aws::String>
    SnowflakeMetadata& AddSupportedRegions(SupportedRegionsT&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions.emplace_back(std::forward<SupportedRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_supportedRegions;
    bool m_supportedRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
