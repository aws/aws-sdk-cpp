/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Information about a CloudTrail trail, including the trail's name, home
   * Region, and Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/TrailInfo">AWS
   * API Reference</a></p>
   */
  class TrailInfo
  {
  public:
    AWS_CLOUDTRAIL_API TrailInfo() = default;
    AWS_CLOUDTRAIL_API TrailInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API TrailInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a trail.</p>
     */
    inline const Aws::String& GetTrailARN() const { return m_trailARN; }
    inline bool TrailARNHasBeenSet() const { return m_trailARNHasBeenSet; }
    template<typename TrailARNT = Aws::String>
    void SetTrailARN(TrailARNT&& value) { m_trailARNHasBeenSet = true; m_trailARN = std::forward<TrailARNT>(value); }
    template<typename TrailARNT = Aws::String>
    TrailInfo& WithTrailARN(TrailARNT&& value) { SetTrailARN(std::forward<TrailARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a trail.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TrailInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which a trail was created.</p>
     */
    inline const Aws::String& GetHomeRegion() const { return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    template<typename HomeRegionT = Aws::String>
    void SetHomeRegion(HomeRegionT&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::forward<HomeRegionT>(value); }
    template<typename HomeRegionT = Aws::String>
    TrailInfo& WithHomeRegion(HomeRegionT&& value) { SetHomeRegion(std::forward<HomeRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trailARN;
    bool m_trailARNHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
