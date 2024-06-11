﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The Lambda function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/LambdaFunction">AWS
   * API Reference</a></p>
   */
  class LambdaFunction
  {
  public:
    AWS_IOTTWINMAKER_API LambdaFunction();
    AWS_IOTTWINMAKER_API LambdaFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API LambdaFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline LambdaFunction& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline LambdaFunction& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline LambdaFunction& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
