/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/Region.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/AwsLogSourceType.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Automatically enable new organization accounts as member accounts from a
   * Security Lake administrator account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/AutoEnableNewRegionConfiguration">AWS
   * API Reference</a></p>
   */
  class AutoEnableNewRegionConfiguration
  {
  public:
    AWS_SECURITYLAKE_API AutoEnableNewRegionConfiguration();
    AWS_SECURITYLAKE_API AutoEnableNewRegionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API AutoEnableNewRegionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Regions where Security Lake is auto enabled</p>
     */
    inline const Region& GetRegion() const{ return m_region; }

    /**
     * <p>The Regions where Security Lake is auto enabled</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Regions where Security Lake is auto enabled</p>
     */
    inline void SetRegion(const Region& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Regions where Security Lake is auto enabled</p>
     */
    inline void SetRegion(Region&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Regions where Security Lake is auto enabled</p>
     */
    inline AutoEnableNewRegionConfiguration& WithRegion(const Region& value) { SetRegion(value); return *this;}

    /**
     * <p>The Regions where Security Lake is auto enabled</p>
     */
    inline AutoEnableNewRegionConfiguration& WithRegion(Region&& value) { SetRegion(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services sources which are auto enabled in Security Lake.</p>
     */
    inline const Aws::Vector<AwsLogSourceType>& GetSources() const{ return m_sources; }

    /**
     * <p>The Amazon Web Services sources which are auto enabled in Security Lake.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The Amazon Web Services sources which are auto enabled in Security Lake.</p>
     */
    inline void SetSources(const Aws::Vector<AwsLogSourceType>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The Amazon Web Services sources which are auto enabled in Security Lake.</p>
     */
    inline void SetSources(Aws::Vector<AwsLogSourceType>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The Amazon Web Services sources which are auto enabled in Security Lake.</p>
     */
    inline AutoEnableNewRegionConfiguration& WithSources(const Aws::Vector<AwsLogSourceType>& value) { SetSources(value); return *this;}

    /**
     * <p>The Amazon Web Services sources which are auto enabled in Security Lake.</p>
     */
    inline AutoEnableNewRegionConfiguration& WithSources(Aws::Vector<AwsLogSourceType>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services sources which are auto enabled in Security Lake.</p>
     */
    inline AutoEnableNewRegionConfiguration& AddSources(const AwsLogSourceType& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services sources which are auto enabled in Security Lake.</p>
     */
    inline AutoEnableNewRegionConfiguration& AddSources(AwsLogSourceType&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Region m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<AwsLogSourceType> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
