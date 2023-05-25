/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Specifies the key-value pair that are assigned to a file during the execution
   * of a Tagging step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/S3Tag">AWS API
   * Reference</a></p>
   */
  class S3Tag
  {
  public:
    AWS_TRANSFER_API S3Tag();
    AWS_TRANSFER_API S3Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API S3Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name assigned to the tag that you create.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name assigned to the tag that you create.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name assigned to the tag that you create.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name assigned to the tag that you create.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name assigned to the tag that you create.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name assigned to the tag that you create.</p>
     */
    inline S3Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name assigned to the tag that you create.</p>
     */
    inline S3Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name assigned to the tag that you create.</p>
     */
    inline S3Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value that corresponds to the key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value that corresponds to the key.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value that corresponds to the key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value that corresponds to the key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value that corresponds to the key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value that corresponds to the key.</p>
     */
    inline S3Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value that corresponds to the key.</p>
     */
    inline S3Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value that corresponds to the key.</p>
     */
    inline S3Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
