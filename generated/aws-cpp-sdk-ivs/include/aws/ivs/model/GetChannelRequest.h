﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class AWS_IVS_API GetChannelRequest : public IVSRequest
  {
  public:
    GetChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChannel"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>ARN of the channel for which the configuration is to be retrieved.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>ARN of the channel for which the configuration is to be retrieved.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>ARN of the channel for which the configuration is to be retrieved.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>ARN of the channel for which the configuration is to be retrieved.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>ARN of the channel for which the configuration is to be retrieved.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>ARN of the channel for which the configuration is to be retrieved.</p>
     */
    inline GetChannelRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>ARN of the channel for which the configuration is to be retrieved.</p>
     */
    inline GetChannelRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the channel for which the configuration is to be retrieved.</p>
     */
    inline GetChannelRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
