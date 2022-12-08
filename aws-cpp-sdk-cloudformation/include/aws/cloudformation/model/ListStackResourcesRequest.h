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
   * <p>The input for the <a>ListStackResource</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackResourcesInput">AWS
   * API Reference</a></p>
   */
  class ListStackResourcesRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListStackResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStackResources"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline ListStackResourcesRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline ListStackResourcesRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline ListStackResourcesRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>A string that identifies the next page of stack resources that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string that identifies the next page of stack resources that you want to
     * retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A string that identifies the next page of stack resources that you want to
     * retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string that identifies the next page of stack resources that you want to
     * retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A string that identifies the next page of stack resources that you want to
     * retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string that identifies the next page of stack resources that you want to
     * retrieve.</p>
     */
    inline ListStackResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string that identifies the next page of stack resources that you want to
     * retrieve.</p>
     */
    inline ListStackResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string that identifies the next page of stack resources that you want to
     * retrieve.</p>
     */
    inline ListStackResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
