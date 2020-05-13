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
   * <p>Provides information about sensitive data that was detected by managed data
   * identifiers and produced a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/DefaultDetection">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API DefaultDetection
  {
  public:
    DefaultDetection();
    DefaultDetection(Aws::Utils::Json::JsonView jsonValue);
    DefaultDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of occurrences of the type of data that was detected.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The total number of occurrences of the type of data that was detected.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The total number of occurrences of the type of data that was detected.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The total number of occurrences of the type of data that was detected.</p>
     */
    inline DefaultDetection& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>The type of data that was detected. For example, AWS_CREDENTIALS,
     * PHONE_NUMBER, or ADDRESS.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of data that was detected. For example, AWS_CREDENTIALS,
     * PHONE_NUMBER, or ADDRESS.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of data that was detected. For example, AWS_CREDENTIALS,
     * PHONE_NUMBER, or ADDRESS.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of data that was detected. For example, AWS_CREDENTIALS,
     * PHONE_NUMBER, or ADDRESS.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of data that was detected. For example, AWS_CREDENTIALS,
     * PHONE_NUMBER, or ADDRESS.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of data that was detected. For example, AWS_CREDENTIALS,
     * PHONE_NUMBER, or ADDRESS.</p>
     */
    inline DefaultDetection& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of data that was detected. For example, AWS_CREDENTIALS,
     * PHONE_NUMBER, or ADDRESS.</p>
     */
    inline DefaultDetection& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of data that was detected. For example, AWS_CREDENTIALS,
     * PHONE_NUMBER, or ADDRESS.</p>
     */
    inline DefaultDetection& WithType(const char* value) { SetType(value); return *this;}

  private:

    long long m_count;
    bool m_countHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
