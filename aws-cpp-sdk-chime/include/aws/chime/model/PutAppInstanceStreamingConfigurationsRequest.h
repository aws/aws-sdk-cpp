/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/AppInstanceStreamingConfiguration.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class PutAppInstanceStreamingConfigurationsRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API PutAppInstanceStreamingConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppInstanceStreamingConfigurations"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsRequest& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsRequest& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsRequest& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>The streaming configurations set for an <code>AppInstance</code>.</p>
     */
    inline const Aws::Vector<AppInstanceStreamingConfiguration>& GetAppInstanceStreamingConfigurations() const{ return m_appInstanceStreamingConfigurations; }

    /**
     * <p>The streaming configurations set for an <code>AppInstance</code>.</p>
     */
    inline bool AppInstanceStreamingConfigurationsHasBeenSet() const { return m_appInstanceStreamingConfigurationsHasBeenSet; }

    /**
     * <p>The streaming configurations set for an <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceStreamingConfigurations(const Aws::Vector<AppInstanceStreamingConfiguration>& value) { m_appInstanceStreamingConfigurationsHasBeenSet = true; m_appInstanceStreamingConfigurations = value; }

    /**
     * <p>The streaming configurations set for an <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceStreamingConfigurations(Aws::Vector<AppInstanceStreamingConfiguration>&& value) { m_appInstanceStreamingConfigurationsHasBeenSet = true; m_appInstanceStreamingConfigurations = std::move(value); }

    /**
     * <p>The streaming configurations set for an <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsRequest& WithAppInstanceStreamingConfigurations(const Aws::Vector<AppInstanceStreamingConfiguration>& value) { SetAppInstanceStreamingConfigurations(value); return *this;}

    /**
     * <p>The streaming configurations set for an <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsRequest& WithAppInstanceStreamingConfigurations(Aws::Vector<AppInstanceStreamingConfiguration>&& value) { SetAppInstanceStreamingConfigurations(std::move(value)); return *this;}

    /**
     * <p>The streaming configurations set for an <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsRequest& AddAppInstanceStreamingConfigurations(const AppInstanceStreamingConfiguration& value) { m_appInstanceStreamingConfigurationsHasBeenSet = true; m_appInstanceStreamingConfigurations.push_back(value); return *this; }

    /**
     * <p>The streaming configurations set for an <code>AppInstance</code>.</p>
     */
    inline PutAppInstanceStreamingConfigurationsRequest& AddAppInstanceStreamingConfigurations(AppInstanceStreamingConfiguration&& value) { m_appInstanceStreamingConfigurationsHasBeenSet = true; m_appInstanceStreamingConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::Vector<AppInstanceStreamingConfiguration> m_appInstanceStreamingConfigurations;
    bool m_appInstanceStreamingConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
