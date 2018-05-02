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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  class AWS_CODEPIPELINE_API WebhookAuthConfiguration
  {
  public:
    WebhookAuthConfiguration();
    WebhookAuthConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    WebhookAuthConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAllowedIPRange() const{ return m_allowedIPRange; }

    
    inline void SetAllowedIPRange(const Aws::String& value) { m_allowedIPRangeHasBeenSet = true; m_allowedIPRange = value; }

    
    inline void SetAllowedIPRange(Aws::String&& value) { m_allowedIPRangeHasBeenSet = true; m_allowedIPRange = std::move(value); }

    
    inline void SetAllowedIPRange(const char* value) { m_allowedIPRangeHasBeenSet = true; m_allowedIPRange.assign(value); }

    
    inline WebhookAuthConfiguration& WithAllowedIPRange(const Aws::String& value) { SetAllowedIPRange(value); return *this;}

    
    inline WebhookAuthConfiguration& WithAllowedIPRange(Aws::String&& value) { SetAllowedIPRange(std::move(value)); return *this;}

    
    inline WebhookAuthConfiguration& WithAllowedIPRange(const char* value) { SetAllowedIPRange(value); return *this;}


    
    inline const Aws::String& GetSecretToken() const{ return m_secretToken; }

    
    inline void SetSecretToken(const Aws::String& value) { m_secretTokenHasBeenSet = true; m_secretToken = value; }

    
    inline void SetSecretToken(Aws::String&& value) { m_secretTokenHasBeenSet = true; m_secretToken = std::move(value); }

    
    inline void SetSecretToken(const char* value) { m_secretTokenHasBeenSet = true; m_secretToken.assign(value); }

    
    inline WebhookAuthConfiguration& WithSecretToken(const Aws::String& value) { SetSecretToken(value); return *this;}

    
    inline WebhookAuthConfiguration& WithSecretToken(Aws::String&& value) { SetSecretToken(std::move(value)); return *this;}

    
    inline WebhookAuthConfiguration& WithSecretToken(const char* value) { SetSecretToken(value); return *this;}

  private:

    Aws::String m_allowedIPRange;
    bool m_allowedIPRangeHasBeenSet;

    Aws::String m_secretToken;
    bool m_secretTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
