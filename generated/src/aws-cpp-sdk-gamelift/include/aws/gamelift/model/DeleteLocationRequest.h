/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DeleteLocationRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DeleteLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLocation"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The location name of the custom location to be deleted.</p>
     */
    inline const Aws::String& GetLocationName() const{ return m_locationName; }
    inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }
    inline void SetLocationName(const Aws::String& value) { m_locationNameHasBeenSet = true; m_locationName = value; }
    inline void SetLocationName(Aws::String&& value) { m_locationNameHasBeenSet = true; m_locationName = std::move(value); }
    inline void SetLocationName(const char* value) { m_locationNameHasBeenSet = true; m_locationName.assign(value); }
    inline DeleteLocationRequest& WithLocationName(const Aws::String& value) { SetLocationName(value); return *this;}
    inline DeleteLocationRequest& WithLocationName(Aws::String&& value) { SetLocationName(std::move(value)); return *this;}
    inline DeleteLocationRequest& WithLocationName(const char* value) { SetLocationName(value); return *this;}
    ///@}
  private:

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
