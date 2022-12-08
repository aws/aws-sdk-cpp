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
   * region, and Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The ARN of a trail.</p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }

    /**
     * <p>The ARN of a trail.</p>
     */
    inline bool TrailARNHasBeenSet() const { return m_trailARNHasBeenSet; }

    /**
     * <p>The ARN of a trail.</p>
     */
    inline void SetTrailARN(const Aws::String& value) { m_trailARNHasBeenSet = true; m_trailARN = value; }

    /**
     * <p>The ARN of a trail.</p>
     */
    inline void SetTrailARN(Aws::String&& value) { m_trailARNHasBeenSet = true; m_trailARN = std::move(value); }

    /**
     * <p>The ARN of a trail.</p>
     */
    inline void SetTrailARN(const char* value) { m_trailARNHasBeenSet = true; m_trailARN.assign(value); }

    /**
     * <p>The ARN of a trail.</p>
     */
    inline TrailInfo& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}

    /**
     * <p>The ARN of a trail.</p>
     */
    inline TrailInfo& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of a trail.</p>
     */
    inline TrailInfo& WithTrailARN(const char* value) { SetTrailARN(value); return *this;}


    /**
     * <p>The name of a trail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a trail.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a trail.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a trail.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a trail.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a trail.</p>
     */
    inline TrailInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a trail.</p>
     */
    inline TrailInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a trail.</p>
     */
    inline TrailInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Web Services Region in which a trail was created.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>The Amazon Web Services Region in which a trail was created.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region in which a trail was created.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>The Amazon Web Services Region in which a trail was created.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which a trail was created.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which a trail was created.</p>
     */
    inline TrailInfo& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which a trail was created.</p>
     */
    inline TrailInfo& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which a trail was created.</p>
     */
    inline TrailInfo& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}

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
