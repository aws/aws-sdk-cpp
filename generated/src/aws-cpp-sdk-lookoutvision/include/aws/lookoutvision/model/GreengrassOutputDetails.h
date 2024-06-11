/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Information about the AWS IoT Greengrass component created by a model
   * packaging job. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/GreengrassOutputDetails">AWS
   * API Reference</a></p>
   */
  class GreengrassOutputDetails
  {
  public:
    AWS_LOOKOUTFORVISION_API GreengrassOutputDetails();
    AWS_LOOKOUTFORVISION_API GreengrassOutputDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API GreengrassOutputDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the component. </p>
     */
    inline const Aws::String& GetComponentVersionArn() const{ return m_componentVersionArn; }
    inline bool ComponentVersionArnHasBeenSet() const { return m_componentVersionArnHasBeenSet; }
    inline void SetComponentVersionArn(const Aws::String& value) { m_componentVersionArnHasBeenSet = true; m_componentVersionArn = value; }
    inline void SetComponentVersionArn(Aws::String&& value) { m_componentVersionArnHasBeenSet = true; m_componentVersionArn = std::move(value); }
    inline void SetComponentVersionArn(const char* value) { m_componentVersionArnHasBeenSet = true; m_componentVersionArn.assign(value); }
    inline GreengrassOutputDetails& WithComponentVersionArn(const Aws::String& value) { SetComponentVersionArn(value); return *this;}
    inline GreengrassOutputDetails& WithComponentVersionArn(Aws::String&& value) { SetComponentVersionArn(std::move(value)); return *this;}
    inline GreengrassOutputDetails& WithComponentVersionArn(const char* value) { SetComponentVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the component. </p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline GreengrassOutputDetails& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline GreengrassOutputDetails& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline GreengrassOutputDetails& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the component. </p>
     */
    inline const Aws::String& GetComponentVersion() const{ return m_componentVersion; }
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }
    inline void SetComponentVersion(const Aws::String& value) { m_componentVersionHasBeenSet = true; m_componentVersion = value; }
    inline void SetComponentVersion(Aws::String&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::move(value); }
    inline void SetComponentVersion(const char* value) { m_componentVersionHasBeenSet = true; m_componentVersion.assign(value); }
    inline GreengrassOutputDetails& WithComponentVersion(const Aws::String& value) { SetComponentVersion(value); return *this;}
    inline GreengrassOutputDetails& WithComponentVersion(Aws::String&& value) { SetComponentVersion(std::move(value)); return *this;}
    inline GreengrassOutputDetails& WithComponentVersion(const char* value) { SetComponentVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_componentVersionArn;
    bool m_componentVersionArnHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
