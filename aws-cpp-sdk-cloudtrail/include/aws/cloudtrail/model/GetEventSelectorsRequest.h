/*
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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class AWS_CLOUDTRAIL_API GetEventSelectorsRequest : public CloudTrailRequest
  {
  public:
    GetEventSelectorsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the name of the trail or trail ARN. If you specify a trail name,
     * the string must meet the following requirements:</p> <ul> <li> <p>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-)</p> </li> <li> <p>Start with a letter or number, and end with a letter or
     * number</p> </li> <li> <p>Be between 3 and 128 characters</p> </li> <li> <p>Have
     * no adjacent periods, underscores or dashes. Names like
     * <code>my-_namespace</code> and <code>my--namespace</code> are invalid.</p> </li>
     * <li> <p>Not be in IP address format (for example, 192.168.5.4)</p> </li> </ul>
     * <p>If you specify a trail ARN, it must be in the format:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetTrailName() const{ return m_trailName; }

    /**
     * <p>Specifies the name of the trail or trail ARN. If you specify a trail name,
     * the string must meet the following requirements:</p> <ul> <li> <p>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-)</p> </li> <li> <p>Start with a letter or number, and end with a letter or
     * number</p> </li> <li> <p>Be between 3 and 128 characters</p> </li> <li> <p>Have
     * no adjacent periods, underscores or dashes. Names like
     * <code>my-_namespace</code> and <code>my--namespace</code> are invalid.</p> </li>
     * <li> <p>Not be in IP address format (for example, 192.168.5.4)</p> </li> </ul>
     * <p>If you specify a trail ARN, it must be in the format:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailName(const Aws::String& value) { m_trailNameHasBeenSet = true; m_trailName = value; }

    /**
     * <p>Specifies the name of the trail or trail ARN. If you specify a trail name,
     * the string must meet the following requirements:</p> <ul> <li> <p>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-)</p> </li> <li> <p>Start with a letter or number, and end with a letter or
     * number</p> </li> <li> <p>Be between 3 and 128 characters</p> </li> <li> <p>Have
     * no adjacent periods, underscores or dashes. Names like
     * <code>my-_namespace</code> and <code>my--namespace</code> are invalid.</p> </li>
     * <li> <p>Not be in IP address format (for example, 192.168.5.4)</p> </li> </ul>
     * <p>If you specify a trail ARN, it must be in the format:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailName(Aws::String&& value) { m_trailNameHasBeenSet = true; m_trailName = value; }

    /**
     * <p>Specifies the name of the trail or trail ARN. If you specify a trail name,
     * the string must meet the following requirements:</p> <ul> <li> <p>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-)</p> </li> <li> <p>Start with a letter or number, and end with a letter or
     * number</p> </li> <li> <p>Be between 3 and 128 characters</p> </li> <li> <p>Have
     * no adjacent periods, underscores or dashes. Names like
     * <code>my-_namespace</code> and <code>my--namespace</code> are invalid.</p> </li>
     * <li> <p>Not be in IP address format (for example, 192.168.5.4)</p> </li> </ul>
     * <p>If you specify a trail ARN, it must be in the format:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailName(const char* value) { m_trailNameHasBeenSet = true; m_trailName.assign(value); }

    /**
     * <p>Specifies the name of the trail or trail ARN. If you specify a trail name,
     * the string must meet the following requirements:</p> <ul> <li> <p>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-)</p> </li> <li> <p>Start with a letter or number, and end with a letter or
     * number</p> </li> <li> <p>Be between 3 and 128 characters</p> </li> <li> <p>Have
     * no adjacent periods, underscores or dashes. Names like
     * <code>my-_namespace</code> and <code>my--namespace</code> are invalid.</p> </li>
     * <li> <p>Not be in IP address format (for example, 192.168.5.4)</p> </li> </ul>
     * <p>If you specify a trail ARN, it must be in the format:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline GetEventSelectorsRequest& WithTrailName(const Aws::String& value) { SetTrailName(value); return *this;}

    /**
     * <p>Specifies the name of the trail or trail ARN. If you specify a trail name,
     * the string must meet the following requirements:</p> <ul> <li> <p>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-)</p> </li> <li> <p>Start with a letter or number, and end with a letter or
     * number</p> </li> <li> <p>Be between 3 and 128 characters</p> </li> <li> <p>Have
     * no adjacent periods, underscores or dashes. Names like
     * <code>my-_namespace</code> and <code>my--namespace</code> are invalid.</p> </li>
     * <li> <p>Not be in IP address format (for example, 192.168.5.4)</p> </li> </ul>
     * <p>If you specify a trail ARN, it must be in the format:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline GetEventSelectorsRequest& WithTrailName(Aws::String&& value) { SetTrailName(value); return *this;}

    /**
     * <p>Specifies the name of the trail or trail ARN. If you specify a trail name,
     * the string must meet the following requirements:</p> <ul> <li> <p>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-)</p> </li> <li> <p>Start with a letter or number, and end with a letter or
     * number</p> </li> <li> <p>Be between 3 and 128 characters</p> </li> <li> <p>Have
     * no adjacent periods, underscores or dashes. Names like
     * <code>my-_namespace</code> and <code>my--namespace</code> are invalid.</p> </li>
     * <li> <p>Not be in IP address format (for example, 192.168.5.4)</p> </li> </ul>
     * <p>If you specify a trail ARN, it must be in the format:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline GetEventSelectorsRequest& WithTrailName(const char* value) { SetTrailName(value); return *this;}

  private:
    Aws::String m_trailName;
    bool m_trailNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
