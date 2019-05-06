/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class AWS_SFN_API DeleteActivityRequest : public SFNRequest
  {
  public:
    DeleteActivityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteActivity"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the activity to delete.</p>
     */
    inline const Aws::String& GetActivityArn() const{ return m_activityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to delete.</p>
     */
    inline bool ActivityArnHasBeenSet() const { return m_activityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to delete.</p>
     */
    inline void SetActivityArn(const Aws::String& value) { m_activityArnHasBeenSet = true; m_activityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to delete.</p>
     */
    inline void SetActivityArn(Aws::String&& value) { m_activityArnHasBeenSet = true; m_activityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to delete.</p>
     */
    inline void SetActivityArn(const char* value) { m_activityArnHasBeenSet = true; m_activityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to delete.</p>
     */
    inline DeleteActivityRequest& WithActivityArn(const Aws::String& value) { SetActivityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to delete.</p>
     */
    inline DeleteActivityRequest& WithActivityArn(Aws::String&& value) { SetActivityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the activity to delete.</p>
     */
    inline DeleteActivityRequest& WithActivityArn(const char* value) { SetActivityArn(value); return *this;}

  private:

    Aws::String m_activityArn;
    bool m_activityArnHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
