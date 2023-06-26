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
   * <p>A remote location where a multi-location fleet can deploy game servers for
   * game hosting. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LocationConfiguration">AWS
   * API Reference</a></p>
   */
  class LocationConfiguration
  {
  public:
    AWS_GAMELIFT_API LocationConfiguration();
    AWS_GAMELIFT_API LocationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API LocationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>An Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>An Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>An Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>An Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>An Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline LocationConfiguration& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>An Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline LocationConfiguration& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>An Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline LocationConfiguration& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
