/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Specifies 1-10 occurrences of a specific type of sensitive data reported by a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DetectedDataDetails">AWS
   * API Reference</a></p>
   */
  class DetectedDataDetails
  {
  public:
    AWS_MACIE2_API DetectedDataDetails();
    AWS_MACIE2_API DetectedDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API DetectedDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An occurrence of the specified type of sensitive data. Each occurrence can
     * contain 1-128 characters.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>An occurrence of the specified type of sensitive data. Each occurrence can
     * contain 1-128 characters.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>An occurrence of the specified type of sensitive data. Each occurrence can
     * contain 1-128 characters.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>An occurrence of the specified type of sensitive data. Each occurrence can
     * contain 1-128 characters.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>An occurrence of the specified type of sensitive data. Each occurrence can
     * contain 1-128 characters.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>An occurrence of the specified type of sensitive data. Each occurrence can
     * contain 1-128 characters.</p>
     */
    inline DetectedDataDetails& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>An occurrence of the specified type of sensitive data. Each occurrence can
     * contain 1-128 characters.</p>
     */
    inline DetectedDataDetails& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>An occurrence of the specified type of sensitive data. Each occurrence can
     * contain 1-128 characters.</p>
     */
    inline DetectedDataDetails& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
