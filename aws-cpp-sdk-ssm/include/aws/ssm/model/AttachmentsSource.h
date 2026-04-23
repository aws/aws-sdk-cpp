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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AttachmentsSourceKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A key and value pair that identifies the location of an attachment to a
   * document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AttachmentsSource">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AttachmentsSource
  {
  public:
    AttachmentsSource();
    AttachmentsSource(Aws::Utils::Json::JsonView jsonValue);
    AttachmentsSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of a key and value pair that identifies the location of an attachment
     * to a document.</p>
     */
    inline const AttachmentsSourceKey& GetKey() const{ return m_key; }

    /**
     * <p>The key of a key and value pair that identifies the location of an attachment
     * to a document.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of a key and value pair that identifies the location of an attachment
     * to a document.</p>
     */
    inline void SetKey(const AttachmentsSourceKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of a key and value pair that identifies the location of an attachment
     * to a document.</p>
     */
    inline void SetKey(AttachmentsSourceKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of a key and value pair that identifies the location of an attachment
     * to a document.</p>
     */
    inline AttachmentsSource& WithKey(const AttachmentsSourceKey& value) { SetKey(value); return *this;}

    /**
     * <p>The key of a key and value pair that identifies the location of an attachment
     * to a document.</p>
     */
    inline AttachmentsSource& WithKey(AttachmentsSourceKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The URL of the location of a document attachment, such as the URL of an
     * Amazon S3 bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The URL of the location of a document attachment, such as the URL of an
     * Amazon S3 bucket.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The URL of the location of a document attachment, such as the URL of an
     * Amazon S3 bucket.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The URL of the location of a document attachment, such as the URL of an
     * Amazon S3 bucket.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The URL of the location of a document attachment, such as the URL of an
     * Amazon S3 bucket.</p>
     */
    inline AttachmentsSource& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The URL of the location of a document attachment, such as the URL of an
     * Amazon S3 bucket.</p>
     */
    inline AttachmentsSource& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The URL of the location of a document attachment, such as the URL of an
     * Amazon S3 bucket.</p>
     */
    inline AttachmentsSource& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The URL of the location of a document attachment, such as the URL of an
     * Amazon S3 bucket.</p>
     */
    inline AttachmentsSource& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The URL of the location of a document attachment, such as the URL of an
     * Amazon S3 bucket.</p>
     */
    inline AttachmentsSource& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    AttachmentsSourceKey m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
