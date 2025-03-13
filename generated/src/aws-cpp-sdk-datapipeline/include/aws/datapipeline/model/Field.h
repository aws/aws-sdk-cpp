/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>A key-value pair that describes a property of a pipeline object. The value is
   * specified as either a string value (<code>StringValue</code>) or a reference to
   * another object (<code>RefValue</code>) but not as both.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/Field">AWS
   * API Reference</a></p>
   */
  class Field
  {
  public:
    AWS_DATAPIPELINE_API Field() = default;
    AWS_DATAPIPELINE_API Field(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field identifier.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    Field& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field value, expressed as a String.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    Field& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field value, expressed as the identifier of another object.</p>
     */
    inline const Aws::String& GetRefValue() const { return m_refValue; }
    inline bool RefValueHasBeenSet() const { return m_refValueHasBeenSet; }
    template<typename RefValueT = Aws::String>
    void SetRefValue(RefValueT&& value) { m_refValueHasBeenSet = true; m_refValue = std::forward<RefValueT>(value); }
    template<typename RefValueT = Aws::String>
    Field& WithRefValue(RefValueT&& value) { SetRefValue(std::forward<RefValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::String m_refValue;
    bool m_refValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
