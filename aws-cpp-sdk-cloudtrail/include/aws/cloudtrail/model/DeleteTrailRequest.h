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
   * <p>The request that specifies the name of a trail to delete.</p>
   */
  class AWS_CLOUDTRAIL_API DeleteTrailRequest : public CloudTrailRequest
  {
  public:
    DeleteTrailRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail to be deleted. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail to be deleted. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail to be deleted. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail to be deleted. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail to be deleted. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline DeleteTrailRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail to be deleted. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline DeleteTrailRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail to be deleted. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p>
     */
    inline DeleteTrailRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
