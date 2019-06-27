/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/Mode.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the AWS Lambda function to use as a code hook for a
   * campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignHook">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API CampaignHook
  {
  public:
    CampaignHook();
    CampaignHook(Aws::Utils::Json::JsonView jsonValue);
    CampaignHook& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to send messages for a campaign.</p>
     */
    inline const Aws::String& GetLambdaFunctionName() const{ return m_lambdaFunctionName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to send messages for a campaign.</p>
     */
    inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to send messages for a campaign.</p>
     */
    inline void SetLambdaFunctionName(const Aws::String& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to send messages for a campaign.</p>
     */
    inline void SetLambdaFunctionName(Aws::String&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to send messages for a campaign.</p>
     */
    inline void SetLambdaFunctionName(const char* value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to send messages for a campaign.</p>
     */
    inline CampaignHook& WithLambdaFunctionName(const Aws::String& value) { SetLambdaFunctionName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to send messages for a campaign.</p>
     */
    inline CampaignHook& WithLambdaFunctionName(Aws::String&& value) { SetLambdaFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to send messages for a campaign.</p>
     */
    inline CampaignHook& WithLambdaFunctionName(const char* value) { SetLambdaFunctionName(value); return *this;}


    /**
     * <p>Specifies which Lambda mode to use when invoking the AWS Lambda function.</p>
     */
    inline const Mode& GetMode() const{ return m_mode; }

    /**
     * <p>Specifies which Lambda mode to use when invoking the AWS Lambda function.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Specifies which Lambda mode to use when invoking the AWS Lambda function.</p>
     */
    inline void SetMode(const Mode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Specifies which Lambda mode to use when invoking the AWS Lambda function.</p>
     */
    inline void SetMode(Mode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Specifies which Lambda mode to use when invoking the AWS Lambda function.</p>
     */
    inline CampaignHook& WithMode(const Mode& value) { SetMode(value); return *this;}

    /**
     * <p>Specifies which Lambda mode to use when invoking the AWS Lambda function.</p>
     */
    inline CampaignHook& WithMode(Mode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The web URL that Amazon Pinpoint calls to invoke the AWS Lambda function over
     * HTTPS.</p>
     */
    inline const Aws::String& GetWebUrl() const{ return m_webUrl; }

    /**
     * <p>The web URL that Amazon Pinpoint calls to invoke the AWS Lambda function over
     * HTTPS.</p>
     */
    inline bool WebUrlHasBeenSet() const { return m_webUrlHasBeenSet; }

    /**
     * <p>The web URL that Amazon Pinpoint calls to invoke the AWS Lambda function over
     * HTTPS.</p>
     */
    inline void SetWebUrl(const Aws::String& value) { m_webUrlHasBeenSet = true; m_webUrl = value; }

    /**
     * <p>The web URL that Amazon Pinpoint calls to invoke the AWS Lambda function over
     * HTTPS.</p>
     */
    inline void SetWebUrl(Aws::String&& value) { m_webUrlHasBeenSet = true; m_webUrl = std::move(value); }

    /**
     * <p>The web URL that Amazon Pinpoint calls to invoke the AWS Lambda function over
     * HTTPS.</p>
     */
    inline void SetWebUrl(const char* value) { m_webUrlHasBeenSet = true; m_webUrl.assign(value); }

    /**
     * <p>The web URL that Amazon Pinpoint calls to invoke the AWS Lambda function over
     * HTTPS.</p>
     */
    inline CampaignHook& WithWebUrl(const Aws::String& value) { SetWebUrl(value); return *this;}

    /**
     * <p>The web URL that Amazon Pinpoint calls to invoke the AWS Lambda function over
     * HTTPS.</p>
     */
    inline CampaignHook& WithWebUrl(Aws::String&& value) { SetWebUrl(std::move(value)); return *this;}

    /**
     * <p>The web URL that Amazon Pinpoint calls to invoke the AWS Lambda function over
     * HTTPS.</p>
     */
    inline CampaignHook& WithWebUrl(const char* value) { SetWebUrl(value); return *this;}

  private:

    Aws::String m_lambdaFunctionName;
    bool m_lambdaFunctionNameHasBeenSet;

    Mode m_mode;
    bool m_modeHasBeenSet;

    Aws::String m_webUrl;
    bool m_webUrlHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
