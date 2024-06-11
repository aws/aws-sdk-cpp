/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class CreateTestGridUrlRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API CreateTestGridUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTestGridUrl"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ARN (from <a>CreateTestGridProject</a> or <a>ListTestGridProjects</a>) to
     * associate with the short-term URL. </p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline CreateTestGridUrlRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline CreateTestGridUrlRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline CreateTestGridUrlRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifetime, in seconds, of the URL.</p>
     */
    inline int GetExpiresInSeconds() const{ return m_expiresInSeconds; }
    inline bool ExpiresInSecondsHasBeenSet() const { return m_expiresInSecondsHasBeenSet; }
    inline void SetExpiresInSeconds(int value) { m_expiresInSecondsHasBeenSet = true; m_expiresInSeconds = value; }
    inline CreateTestGridUrlRequest& WithExpiresInSeconds(int value) { SetExpiresInSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    int m_expiresInSeconds;
    bool m_expiresInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
