﻿/*
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
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/HlsIngest.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaPackage
{
namespace Model
{
  class AWS_MEDIAPACKAGE_API RotateChannelCredentialsResult
  {
  public:
    RotateChannelCredentialsResult();
    RotateChannelCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RotateChannelCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline RotateChannelCredentialsResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline RotateChannelCredentialsResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline RotateChannelCredentialsResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * A short text description of the Channel.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A short text description of the Channel.
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * A short text description of the Channel.
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * A short text description of the Channel.
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * A short text description of the Channel.
     */
    inline RotateChannelCredentialsResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A short text description of the Channel.
     */
    inline RotateChannelCredentialsResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A short text description of the Channel.
     */
    inline RotateChannelCredentialsResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const HlsIngest& GetHlsIngest() const{ return m_hlsIngest; }

    
    inline void SetHlsIngest(const HlsIngest& value) { m_hlsIngest = value; }

    
    inline void SetHlsIngest(HlsIngest&& value) { m_hlsIngest = std::move(value); }

    
    inline RotateChannelCredentialsResult& WithHlsIngest(const HlsIngest& value) { SetHlsIngest(value); return *this;}

    
    inline RotateChannelCredentialsResult& WithHlsIngest(HlsIngest&& value) { SetHlsIngest(std::move(value)); return *this;}


    /**
     * The ID of the Channel.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the Channel.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the Channel.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the Channel.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the Channel.
     */
    inline RotateChannelCredentialsResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the Channel.
     */
    inline RotateChannelCredentialsResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the Channel.
     */
    inline RotateChannelCredentialsResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_description;

    HlsIngest m_hlsIngest;

    Aws::String m_id;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
