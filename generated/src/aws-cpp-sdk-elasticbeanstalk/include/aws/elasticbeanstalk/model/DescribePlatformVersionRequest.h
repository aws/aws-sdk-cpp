/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   */
  class DescribePlatformVersionRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribePlatformVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePlatformVersion"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the platform version.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }

    /**
     * <p>The ARN of the platform version.</p>
     */
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }

    /**
     * <p>The ARN of the platform version.</p>
     */
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }

    /**
     * <p>The ARN of the platform version.</p>
     */
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }

    /**
     * <p>The ARN of the platform version.</p>
     */
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }

    /**
     * <p>The ARN of the platform version.</p>
     */
    inline DescribePlatformVersionRequest& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}

    /**
     * <p>The ARN of the platform version.</p>
     */
    inline DescribePlatformVersionRequest& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the platform version.</p>
     */
    inline DescribePlatformVersionRequest& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}

  private:

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
