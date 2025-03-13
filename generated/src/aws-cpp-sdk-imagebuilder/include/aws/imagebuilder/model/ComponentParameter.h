/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains a key/value pair that sets the named component
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ComponentParameter">AWS
   * API Reference</a></p>
   */
  class ComponentParameter
  {
  public:
    AWS_IMAGEBUILDER_API ComponentParameter() = default;
    AWS_IMAGEBUILDER_API ComponentParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ComponentParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component parameter to set.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ComponentParameter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the value for the named component parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Vector<Aws::String>>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Vector<Aws::String>>
    ComponentParameter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    template<typename ValueT = Aws::String>
    ComponentParameter& AddValue(ValueT&& value) { m_valueHasBeenSet = true; m_value.emplace_back(std::forward<ValueT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
