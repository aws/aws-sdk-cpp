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
    AWS_CLOUDTRAIL_API TrailInfo();
    AWS_CLOUDTRAIL_API TrailInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API TrailInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a trail.</p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }
    inline bool TrailARNHasBeenSet() const { return m_trailARNHasBeenSet; }
    inline void SetTrailARN(const Aws::String& value) { m_trailARNHasBeenSet = true; m_trailARN = value; }
    inline void SetTrailARN(Aws::String&& value) { m_trailARNHasBeenSet = true; m_trailARN = std::move(value); }
    inline void SetTrailARN(const char* value) { m_trailARNHasBeenSet = true; m_trailARN.assign(value); }
    inline TrailInfo& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}
    inline TrailInfo& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}
    inline TrailInfo& WithTrailARN(const char* value) { SetTrailARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a trail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TrailInfo& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TrailInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TrailInfo& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which a trail was created.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }
    inline TrailInfo& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}
    inline TrailInfo& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}
    inline TrailInfo& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}
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
