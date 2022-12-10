/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/SortValue.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>An object representing a sort criteria. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/Sort">AWS
   * API Reference</a></p>
   */
  class Sort
  {
  public:
    AWS_ALEXAFORBUSINESS_API Sort();
    AWS_ALEXAFORBUSINESS_API Sort(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Sort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sort key of a sort object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline Sort& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline Sort& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline Sort& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The sort value of a sort object.</p>
     */
    inline const SortValue& GetValue() const{ return m_value; }

    /**
     * <p>The sort value of a sort object.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The sort value of a sort object.</p>
     */
    inline void SetValue(const SortValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The sort value of a sort object.</p>
     */
    inline void SetValue(SortValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The sort value of a sort object.</p>
     */
    inline Sort& WithValue(const SortValue& value) { SetValue(value); return *this;}

    /**
     * <p>The sort value of a sort object.</p>
     */
    inline Sort& WithValue(SortValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    SortValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
