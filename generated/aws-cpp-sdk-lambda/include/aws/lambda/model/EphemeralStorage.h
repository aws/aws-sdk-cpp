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
   * <p>The size of the function’s /tmp directory in MB. The default value is 512,
   * but can be any whole number between 512 and 10240 MB.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EphemeralStorage">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API EphemeralStorage
  {
  public:
    EphemeralStorage();
    EphemeralStorage(Aws::Utils::Json::JsonView jsonValue);
    EphemeralStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the function’s /tmp directory.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size of the function’s /tmp directory.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the function’s /tmp directory.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the function’s /tmp directory.</p>
     */
    inline EphemeralStorage& WithSize(int value) { SetSize(value); return *this;}

  private:

    int m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
