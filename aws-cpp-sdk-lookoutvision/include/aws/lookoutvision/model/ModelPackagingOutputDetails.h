/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/GreengrassOutputDetails.h>
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
   * <p> Information about the output from a model packaging job. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ModelPackagingOutputDetails">AWS
   * API Reference</a></p>
   */
  class AWS_LOOKOUTFORVISION_API ModelPackagingOutputDetails
  {
  public:
    ModelPackagingOutputDetails();
    ModelPackagingOutputDetails(Aws::Utils::Json::JsonView jsonValue);
    ModelPackagingOutputDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about the AWS IoT Greengrass component in a model packaging job.
     * </p>
     */
    inline const GreengrassOutputDetails& GetGreengrass() const{ return m_greengrass; }

    /**
     * <p> Information about the AWS IoT Greengrass component in a model packaging job.
     * </p>
     */
    inline bool GreengrassHasBeenSet() const { return m_greengrassHasBeenSet; }

    /**
     * <p> Information about the AWS IoT Greengrass component in a model packaging job.
     * </p>
     */
    inline void SetGreengrass(const GreengrassOutputDetails& value) { m_greengrassHasBeenSet = true; m_greengrass = value; }

    /**
     * <p> Information about the AWS IoT Greengrass component in a model packaging job.
     * </p>
     */
    inline void SetGreengrass(GreengrassOutputDetails&& value) { m_greengrassHasBeenSet = true; m_greengrass = std::move(value); }

    /**
     * <p> Information about the AWS IoT Greengrass component in a model packaging job.
     * </p>
     */
    inline ModelPackagingOutputDetails& WithGreengrass(const GreengrassOutputDetails& value) { SetGreengrass(value); return *this;}

    /**
     * <p> Information about the AWS IoT Greengrass component in a model packaging job.
     * </p>
     */
    inline ModelPackagingOutputDetails& WithGreengrass(GreengrassOutputDetails&& value) { SetGreengrass(std::move(value)); return *this;}

  private:

    GreengrassOutputDetails m_greengrass;
    bool m_greengrassHasBeenSet;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
