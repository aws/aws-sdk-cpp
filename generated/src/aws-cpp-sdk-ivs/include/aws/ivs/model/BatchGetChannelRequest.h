﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchGetChannelRequest : public IVSRequest
  {
  public:
    AWS_IVS_API BatchGetChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetChannel"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Array of ARNs, one per channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const{ return m_arns; }
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }
    inline void SetArns(const Aws::Vector<Aws::String>& value) { m_arnsHasBeenSet = true; m_arns = value; }
    inline void SetArns(Aws::Vector<Aws::String>&& value) { m_arnsHasBeenSet = true; m_arns = std::move(value); }
    inline BatchGetChannelRequest& WithArns(const Aws::Vector<Aws::String>& value) { SetArns(value); return *this;}
    inline BatchGetChannelRequest& WithArns(Aws::Vector<Aws::String>&& value) { SetArns(std::move(value)); return *this;}
    inline BatchGetChannelRequest& AddArns(const Aws::String& value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }
    inline BatchGetChannelRequest& AddArns(Aws::String&& value) { m_arnsHasBeenSet = true; m_arns.push_back(std::move(value)); return *this; }
    inline BatchGetChannelRequest& AddArns(const char* value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
