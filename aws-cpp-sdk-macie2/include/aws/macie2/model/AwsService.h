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
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AwsService">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API AwsService
  {
  public:
    AwsService();
    AwsService(Aws::Utils::Json::JsonView jsonValue);
    AwsService& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetInvokedBy() const{ return m_invokedBy; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool InvokedByHasBeenSet() const { return m_invokedByHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetInvokedBy(const Aws::String& value) { m_invokedByHasBeenSet = true; m_invokedBy = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetInvokedBy(Aws::String&& value) { m_invokedByHasBeenSet = true; m_invokedBy = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetInvokedBy(const char* value) { m_invokedByHasBeenSet = true; m_invokedBy.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline AwsService& WithInvokedBy(const Aws::String& value) { SetInvokedBy(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline AwsService& WithInvokedBy(Aws::String&& value) { SetInvokedBy(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline AwsService& WithInvokedBy(const char* value) { SetInvokedBy(value); return *this;}

  private:

    Aws::String m_invokedBy;
    bool m_invokedByHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
