﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class AWS_CODESTARCONNECTIONS_API DeleteConnectionRequest : public CodeStarconnectionsRequest
  {
  public:
    DeleteConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the connection to be deleted.</p> 
     * <p>The ARN is never reused if the connection is deleted.</p> 
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection to be deleted.</p> 
     * <p>The ARN is never reused if the connection is deleted.</p> 
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection to be deleted.</p> 
     * <p>The ARN is never reused if the connection is deleted.</p> 
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection to be deleted.</p> 
     * <p>The ARN is never reused if the connection is deleted.</p> 
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection to be deleted.</p> 
     * <p>The ARN is never reused if the connection is deleted.</p> 
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection to be deleted.</p> 
     * <p>The ARN is never reused if the connection is deleted.</p> 
     */
    inline DeleteConnectionRequest& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connection to be deleted.</p> 
     * <p>The ARN is never reused if the connection is deleted.</p> 
     */
    inline DeleteConnectionRequest& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connection to be deleted.</p> 
     * <p>The ARN is never reused if the connection is deleted.</p> 
     */
    inline DeleteConnectionRequest& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}

  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
