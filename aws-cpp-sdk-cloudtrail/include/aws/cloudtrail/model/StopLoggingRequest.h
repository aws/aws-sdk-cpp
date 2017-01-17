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
   * <p>Passes the request to CloudTrail to stop logging AWS API calls for the
   * specified account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StopLoggingRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API StopLoggingRequest : public CloudTrailRequest
  {
  public:
    StopLoggingRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail for which CloudTrail
     * will stop logging AWS API calls. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail for which CloudTrail
     * will stop logging AWS API calls. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail for which CloudTrail
     * will stop logging AWS API calls. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail for which CloudTrail
     * will stop logging AWS API calls. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail for which CloudTrail
     * will stop logging AWS API calls. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline StopLoggingRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail for which CloudTrail
     * will stop logging AWS API calls. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline StopLoggingRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail for which CloudTrail
     * will stop logging AWS API calls. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline StopLoggingRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
