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
   * <p>The input for the <a>DescribeChangeSet</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeChangeSetInput">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API DescribeChangeSetRequest : public CloudFormationRequest
  {
  public:
    DescribeChangeSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeChangeSet"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * describe.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * describe.</p>
     */
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * describe.</p>
     */
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * describe.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * describe.</p>
     */
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * describe.</p>
     */
    inline DescribeChangeSetRequest& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * describe.</p>
     */
    inline DescribeChangeSetRequest& WithChangeSetName(Aws::String&& value) { SetChangeSetName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * describe.</p>
     */
    inline DescribeChangeSetRequest& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}


    /**
     * <p>If you specified the name of a change set, specify the stack name or ID (ARN)
     * of the change set you want to describe.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>If you specified the name of a change set, specify the stack name or ID (ARN)
     * of the change set you want to describe.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>If you specified the name of a change set, specify the stack name or ID (ARN)
     * of the change set you want to describe.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>If you specified the name of a change set, specify the stack name or ID (ARN)
     * of the change set you want to describe.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>If you specified the name of a change set, specify the stack name or ID (ARN)
     * of the change set you want to describe.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>If you specified the name of a change set, specify the stack name or ID (ARN)
     * of the change set you want to describe.</p>
     */
    inline DescribeChangeSetRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>If you specified the name of a change set, specify the stack name or ID (ARN)
     * of the change set you want to describe.</p>
     */
    inline DescribeChangeSetRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>If you specified the name of a change set, specify the stack name or ID (ARN)
     * of the change set you want to describe.</p>
     */
    inline DescribeChangeSetRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>A string (provided by the <a>DescribeChangeSet</a> response output) that
     * identifies the next page of information that you want to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string (provided by the <a>DescribeChangeSet</a> response output) that
     * identifies the next page of information that you want to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A string (provided by the <a>DescribeChangeSet</a> response output) that
     * identifies the next page of information that you want to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string (provided by the <a>DescribeChangeSet</a> response output) that
     * identifies the next page of information that you want to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A string (provided by the <a>DescribeChangeSet</a> response output) that
     * identifies the next page of information that you want to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string (provided by the <a>DescribeChangeSet</a> response output) that
     * identifies the next page of information that you want to retrieve.</p>
     */
    inline DescribeChangeSetRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string (provided by the <a>DescribeChangeSet</a> response output) that
     * identifies the next page of information that you want to retrieve.</p>
     */
    inline DescribeChangeSetRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string (provided by the <a>DescribeChangeSet</a> response output) that
     * identifies the next page of information that you want to retrieve.</p>
     */
    inline DescribeChangeSetRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
