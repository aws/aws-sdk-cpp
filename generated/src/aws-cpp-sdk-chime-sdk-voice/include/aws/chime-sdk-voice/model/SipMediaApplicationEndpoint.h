/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class SipMediaApplicationEndpoint
  {
  public:
    AWS_CHIMESDKVOICE_API SipMediaApplicationEndpoint();
    AWS_CHIMESDKVOICE_API SipMediaApplicationEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SipMediaApplicationEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }

    
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }

    
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }

    
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }

    
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }

    
    inline SipMediaApplicationEndpoint& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}

    
    inline SipMediaApplicationEndpoint& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}

    
    inline SipMediaApplicationEndpoint& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}

  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
