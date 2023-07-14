﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API GetHITRequest : public MTurkRequest
  {
  public:
    GetHITRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHIT"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the HIT to be retrieved.</p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p>The ID of the HIT to be retrieved.</p>
     */
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }

    /**
     * <p>The ID of the HIT to be retrieved.</p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p>The ID of the HIT to be retrieved.</p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = std::move(value); }

    /**
     * <p>The ID of the HIT to be retrieved.</p>
     */
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }

    /**
     * <p>The ID of the HIT to be retrieved.</p>
     */
    inline GetHITRequest& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}

    /**
     * <p>The ID of the HIT to be retrieved.</p>
     */
    inline GetHITRequest& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}

    /**
     * <p>The ID of the HIT to be retrieved.</p>
     */
    inline GetHITRequest& WithHITId(const char* value) { SetHITId(value); return *this;}

  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
