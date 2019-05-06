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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the delete upload operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteUploadRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API DeleteUploadRequest : public DeviceFarmRequest
  {
  public:
    DeleteUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUpload"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm upload you wish
     * to delete.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm upload you wish
     * to delete.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm upload you wish
     * to delete.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm upload you wish
     * to delete.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm upload you wish
     * to delete.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm upload you wish
     * to delete.</p>
     */
    inline DeleteUploadRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm upload you wish
     * to delete.</p>
     */
    inline DeleteUploadRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm upload you wish
     * to delete.</p>
     */
    inline DeleteUploadRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
