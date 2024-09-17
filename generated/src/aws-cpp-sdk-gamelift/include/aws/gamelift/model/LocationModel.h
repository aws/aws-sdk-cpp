/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Properties of a custom location for use in an Amazon GameLift Anywhere fleet.
   * This data type is returned in response to a call to
   * <a>CreateLocation</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LocationModel">AWS
   * API Reference</a></p>
   */
  class LocationModel
  {
  public:
    AWS_GAMELIFT_API LocationModel();
    AWS_GAMELIFT_API LocationModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API LocationModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location's name.</p>
     */
    inline const Aws::String& GetLocationName() const{ return m_locationName; }
    inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }
    inline void SetLocationName(const Aws::String& value) { m_locationNameHasBeenSet = true; m_locationName = value; }
    inline void SetLocationName(Aws::String&& value) { m_locationNameHasBeenSet = true; m_locationName = std::move(value); }
    inline void SetLocationName(const char* value) { m_locationNameHasBeenSet = true; m_locationName.assign(value); }
    inline LocationModel& WithLocationName(const Aws::String& value) { SetLocationName(value); return *this;}
    inline LocationModel& WithLocationName(Aws::String&& value) { SetLocationName(std::move(value)); return *this;}
    inline LocationModel& WithLocationName(const char* value) { SetLocationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift location resource and uniquely identifies
     * it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::location/location-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }
    inline LocationModel& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline LocationModel& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline LocationModel& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet = false;

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
