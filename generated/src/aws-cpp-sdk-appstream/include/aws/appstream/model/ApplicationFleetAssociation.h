/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the application fleet association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ApplicationFleetAssociation">AWS
   * API Reference</a></p>
   */
  class ApplicationFleetAssociation
  {
  public:
    AWS_APPSTREAM_API ApplicationFleetAssociation();
    AWS_APPSTREAM_API ApplicationFleetAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ApplicationFleetAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the fleet associated with the application.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>The name of the fleet associated with the application.</p>
     */
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }

    /**
     * <p>The name of the fleet associated with the application.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet associated with the application.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::move(value); }

    /**
     * <p>The name of the fleet associated with the application.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }

    /**
     * <p>The name of the fleet associated with the application.</p>
     */
    inline ApplicationFleetAssociation& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet associated with the application.</p>
     */
    inline ApplicationFleetAssociation& WithFleetName(Aws::String&& value) { SetFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet associated with the application.</p>
     */
    inline ApplicationFleetAssociation& WithFleetName(const char* value) { SetFleetName(value); return *this;}


    /**
     * <p>The ARN of the application associated with the fleet.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The ARN of the application associated with the fleet.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>The ARN of the application associated with the fleet.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The ARN of the application associated with the fleet.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>The ARN of the application associated with the fleet.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The ARN of the application associated with the fleet.</p>
     */
    inline ApplicationFleetAssociation& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The ARN of the application associated with the fleet.</p>
     */
    inline ApplicationFleetAssociation& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application associated with the fleet.</p>
     */
    inline ApplicationFleetAssociation& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}

  private:

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
