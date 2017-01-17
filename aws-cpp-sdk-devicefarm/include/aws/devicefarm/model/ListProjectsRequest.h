﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the list projects operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListProjectsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ListProjectsRequest : public DeviceFarmRequest
  {
  public:
    ListProjectsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Optional. If no Amazon Resource Name (ARN) is specified, then AWS Device Farm
     * returns a list of all projects for the AWS account. You can also specify a
     * project ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Optional. If no Amazon Resource Name (ARN) is specified, then AWS Device Farm
     * returns a list of all projects for the AWS account. You can also specify a
     * project ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Optional. If no Amazon Resource Name (ARN) is specified, then AWS Device Farm
     * returns a list of all projects for the AWS account. You can also specify a
     * project ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Optional. If no Amazon Resource Name (ARN) is specified, then AWS Device Farm
     * returns a list of all projects for the AWS account. You can also specify a
     * project ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Optional. If no Amazon Resource Name (ARN) is specified, then AWS Device Farm
     * returns a list of all projects for the AWS account. You can also specify a
     * project ARN.</p>
     */
    inline ListProjectsRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Optional. If no Amazon Resource Name (ARN) is specified, then AWS Device Farm
     * returns a list of all projects for the AWS account. You can also specify a
     * project ARN.</p>
     */
    inline ListProjectsRequest& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>Optional. If no Amazon Resource Name (ARN) is specified, then AWS Device Farm
     * returns a list of all projects for the AWS account. You can also specify a
     * project ARN.</p>
     */
    inline ListProjectsRequest& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListProjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListProjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListProjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
