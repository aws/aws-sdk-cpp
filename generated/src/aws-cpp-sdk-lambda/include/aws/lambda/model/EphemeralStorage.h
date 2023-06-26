/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>

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
namespace Lambda
{
namespace Model
{

  /**
   * <p>The size of the function's <code>/tmp</code> directory in MB. The default
   * value is 512, but it can be any whole number between 512 and 10,240
   * MB.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EphemeralStorage">AWS
   * API Reference</a></p>
   */
  class EphemeralStorage
  {
  public:
    AWS_LAMBDA_API EphemeralStorage();
    AWS_LAMBDA_API EphemeralStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API EphemeralStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the function's <code>/tmp</code> directory.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size of the function's <code>/tmp</code> directory.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the function's <code>/tmp</code> directory.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the function's <code>/tmp</code> directory.</p>
     */
    inline EphemeralStorage& WithSize(int value) { SetSize(value); return *this;}

  private:

    int m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
