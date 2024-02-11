/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class GetPackageRequest : public IoTRequest
  {
  public:
    AWS_IOT_API GetPackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPackage"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the target software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The name of the target software package.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>The name of the target software package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>The name of the target software package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>The name of the target software package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>The name of the target software package.</p>
     */
    inline GetPackageRequest& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The name of the target software package.</p>
     */
    inline GetPackageRequest& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the target software package.</p>
     */
    inline GetPackageRequest& WithPackageName(const char* value) { SetPackageName(value); return *this;}

  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
