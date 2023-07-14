﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFORMATION_API ListExportsRequest : public CloudFormationRequest
  {
  public:
    ListExportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExports"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline ListExportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline ListExportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string (provided by the <a>ListExports</a> response output) that identifies
     * the next page of exported output values that you asked to retrieve.</p>
     */
    inline ListExportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
