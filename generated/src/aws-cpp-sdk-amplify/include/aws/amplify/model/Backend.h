/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p>Describes the backend properties associated with an Amplify
   * <code>Branch</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Backend">AWS API
   * Reference</a></p>
   */
  class Backend
  {
  public:
    AWS_AMPLIFY_API Backend();
    AWS_AMPLIFY_API Backend(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Backend& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the CloudFormation stack.</p>
     */
    inline const Aws::String& GetStackArn() const{ return m_stackArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudFormation stack.</p>
     */
    inline bool StackArnHasBeenSet() const { return m_stackArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudFormation stack.</p>
     */
    inline void SetStackArn(const Aws::String& value) { m_stackArnHasBeenSet = true; m_stackArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudFormation stack.</p>
     */
    inline void SetStackArn(Aws::String&& value) { m_stackArnHasBeenSet = true; m_stackArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudFormation stack.</p>
     */
    inline void SetStackArn(const char* value) { m_stackArnHasBeenSet = true; m_stackArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudFormation stack.</p>
     */
    inline Backend& WithStackArn(const Aws::String& value) { SetStackArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudFormation stack.</p>
     */
    inline Backend& WithStackArn(Aws::String&& value) { SetStackArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudFormation stack.</p>
     */
    inline Backend& WithStackArn(const char* value) { SetStackArn(value); return *this;}

  private:

    Aws::String m_stackArn;
    bool m_stackArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
