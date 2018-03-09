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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API CreateImageBuilderStreamingURLRequest : public AppStreamRequest
  {
  public:
    CreateImageBuilderStreamingURLRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImageBuilderStreamingURL"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the image builder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image builder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the image builder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the image builder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the image builder.</p>
     */
    inline CreateImageBuilderStreamingURLRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image builder.</p>
     */
    inline CreateImageBuilderStreamingURLRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image builder.</p>
     */
    inline CreateImageBuilderStreamingURLRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time that the streaming URL will be valid, in seconds. Specify a value
     * between 1 and 604800 seconds. The default is 3600 seconds.</p>
     */
    inline long long GetValidity() const{ return m_validity; }

    /**
     * <p>The time that the streaming URL will be valid, in seconds. Specify a value
     * between 1 and 604800 seconds. The default is 3600 seconds.</p>
     */
    inline void SetValidity(long long value) { m_validityHasBeenSet = true; m_validity = value; }

    /**
     * <p>The time that the streaming URL will be valid, in seconds. Specify a value
     * between 1 and 604800 seconds. The default is 3600 seconds.</p>
     */
    inline CreateImageBuilderStreamingURLRequest& WithValidity(long long value) { SetValidity(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    long long m_validity;
    bool m_validityHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
