﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZE_API DescribeFilterRequest : public PersonalizeRequest
  {
  public:
    DescribeFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFilter"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the filter to describe.</p>
     */
    inline const Aws::String& GetFilterArn() const{ return m_filterArn; }

    /**
     * <p>The ARN of the filter to describe.</p>
     */
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }

    /**
     * <p>The ARN of the filter to describe.</p>
     */
    inline void SetFilterArn(const Aws::String& value) { m_filterArnHasBeenSet = true; m_filterArn = value; }

    /**
     * <p>The ARN of the filter to describe.</p>
     */
    inline void SetFilterArn(Aws::String&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::move(value); }

    /**
     * <p>The ARN of the filter to describe.</p>
     */
    inline void SetFilterArn(const char* value) { m_filterArnHasBeenSet = true; m_filterArn.assign(value); }

    /**
     * <p>The ARN of the filter to describe.</p>
     */
    inline DescribeFilterRequest& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}

    /**
     * <p>The ARN of the filter to describe.</p>
     */
    inline DescribeFilterRequest& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the filter to describe.</p>
     */
    inline DescribeFilterRequest& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}

  private:

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
