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
   * Campaign hook information.<p><h3>See Also:</h3>   <a
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
     * Lambda function name or arn to be called for delivery
     */
    inline const Aws::String& GetLambdaFunctionName() const{ return m_lambdaFunctionName; }

    /**
     * Lambda function name or arn to be called for delivery
     */
    inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }

    /**
     * Lambda function name or arn to be called for delivery
     */
    inline void SetLambdaFunctionName(const Aws::String& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = value; }

    /**
     * Lambda function name or arn to be called for delivery
     */
    inline void SetLambdaFunctionName(Aws::String&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = std::move(value); }

    /**
     * Lambda function name or arn to be called for delivery
     */
    inline void SetLambdaFunctionName(const char* value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName.assign(value); }

    /**
     * Lambda function name or arn to be called for delivery
     */
    inline CampaignHook& WithLambdaFunctionName(const Aws::String& value) { SetLambdaFunctionName(value); return *this;}

    /**
     * Lambda function name or arn to be called for delivery
     */
    inline CampaignHook& WithLambdaFunctionName(Aws::String&& value) { SetLambdaFunctionName(std::move(value)); return *this;}

    /**
     * Lambda function name or arn to be called for delivery
     */
    inline CampaignHook& WithLambdaFunctionName(const char* value) { SetLambdaFunctionName(value); return *this;}


    /**
     * What mode Lambda should be invoked in.
     */
    inline const Mode& GetMode() const{ return m_mode; }

    /**
     * What mode Lambda should be invoked in.
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * What mode Lambda should be invoked in.
     */
    inline void SetMode(const Mode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * What mode Lambda should be invoked in.
     */
    inline void SetMode(Mode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * What mode Lambda should be invoked in.
     */
    inline CampaignHook& WithMode(const Mode& value) { SetMode(value); return *this;}

    /**
     * What mode Lambda should be invoked in.
     */
    inline CampaignHook& WithMode(Mode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * Web URL to call for hook. If the URL has authentication specified it will be
     * added as authentication to the request
     */
    inline const Aws::String& GetWebUrl() const{ return m_webUrl; }

    /**
     * Web URL to call for hook. If the URL has authentication specified it will be
     * added as authentication to the request
     */
    inline bool WebUrlHasBeenSet() const { return m_webUrlHasBeenSet; }

    /**
     * Web URL to call for hook. If the URL has authentication specified it will be
     * added as authentication to the request
     */
    inline void SetWebUrl(const Aws::String& value) { m_webUrlHasBeenSet = true; m_webUrl = value; }

    /**
     * Web URL to call for hook. If the URL has authentication specified it will be
     * added as authentication to the request
     */
    inline void SetWebUrl(Aws::String&& value) { m_webUrlHasBeenSet = true; m_webUrl = std::move(value); }

    /**
     * Web URL to call for hook. If the URL has authentication specified it will be
     * added as authentication to the request
     */
    inline void SetWebUrl(const char* value) { m_webUrlHasBeenSet = true; m_webUrl.assign(value); }

    /**
     * Web URL to call for hook. If the URL has authentication specified it will be
     * added as authentication to the request
     */
    inline CampaignHook& WithWebUrl(const Aws::String& value) { SetWebUrl(value); return *this;}

    /**
     * Web URL to call for hook. If the URL has authentication specified it will be
     * added as authentication to the request
     */
    inline CampaignHook& WithWebUrl(Aws::String&& value) { SetWebUrl(std::move(value)); return *this;}

    /**
     * Web URL to call for hook. If the URL has authentication specified it will be
     * added as authentication to the request
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
