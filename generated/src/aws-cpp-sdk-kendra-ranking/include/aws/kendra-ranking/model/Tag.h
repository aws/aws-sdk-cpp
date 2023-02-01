/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
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
namespace KendraRanking
{
namespace Model
{

  /**
   * <p>A key-value pair that identifies or categorizes a rescore execution plan. A
   * rescore execution plan is an Amazon Kendra Intelligent Ranking resource used for
   * provisioning the <code>Rescore</code> API. You can also use a tag to help
   * control access to a rescore execution plan. A tag key and value can consist of
   * Unicode letters, digits, white space, and any of the following symbols: _ . : /
   * = + - @.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/Tag">AWS
   * API Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_KENDRARANKING_API Tag();
    AWS_KENDRARANKING_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the tag. Keys are not case sensitive and must be unique.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for the tag. Keys are not case sensitive and must be unique.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for the tag. Keys are not case sensitive and must be unique.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for the tag. Keys are not case sensitive and must be unique.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for the tag. Keys are not case sensitive and must be unique.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for the tag. Keys are not case sensitive and must be unique.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for the tag. Keys are not case sensitive and must be unique.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for the tag. Keys are not case sensitive and must be unique.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value associated with the tag. The value can be an empty string but it
     * can't be null.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value associated with the tag. The value can be an empty string but it
     * can't be null.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value associated with the tag. The value can be an empty string but it
     * can't be null.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value associated with the tag. The value can be an empty string but it
     * can't be null.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value associated with the tag. The value can be an empty string but it
     * can't be null.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value associated with the tag. The value can be an empty string but it
     * can't be null.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value associated with the tag. The value can be an empty string but it
     * can't be null.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value associated with the tag. The value can be an empty string but it
     * can't be null.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
