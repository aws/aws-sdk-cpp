/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p> Configuration details of the component. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ComponentConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API ComponentConfiguration
  {
  public:
    ComponentConfiguration();
    ComponentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ComponentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the component. </p>
     */
    inline const Aws::String& GetComponentArn() const{ return m_componentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component. </p>
     */
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component. </p>
     */
    inline void SetComponentArn(const Aws::String& value) { m_componentArnHasBeenSet = true; m_componentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component. </p>
     */
    inline void SetComponentArn(Aws::String&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component. </p>
     */
    inline void SetComponentArn(const char* value) { m_componentArnHasBeenSet = true; m_componentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component. </p>
     */
    inline ComponentConfiguration& WithComponentArn(const Aws::String& value) { SetComponentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component. </p>
     */
    inline ComponentConfiguration& WithComponentArn(Aws::String&& value) { SetComponentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component. </p>
     */
    inline ComponentConfiguration& WithComponentArn(const char* value) { SetComponentArn(value); return *this;}

  private:

    Aws::String m_componentArn;
    bool m_componentArnHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
