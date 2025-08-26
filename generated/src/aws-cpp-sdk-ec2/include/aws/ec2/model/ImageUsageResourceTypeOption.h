/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The options that affect the scope of the report.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImageUsageResourceTypeOption">AWS
   * API Reference</a></p>
   */
  class ImageUsageResourceTypeOption
  {
  public:
    AWS_EC2_API ImageUsageResourceTypeOption() = default;
    AWS_EC2_API ImageUsageResourceTypeOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImageUsageResourceTypeOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the option.</p>
     */
    inline const Aws::String& GetOptionName() const { return m_optionName; }
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }
    template<typename OptionNameT = Aws::String>
    void SetOptionName(OptionNameT&& value) { m_optionNameHasBeenSet = true; m_optionName = std::forward<OptionNameT>(value); }
    template<typename OptionNameT = Aws::String>
    ImageUsageResourceTypeOption& WithOptionName(OptionNameT&& value) { SetOptionName(std::forward<OptionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of launch template versions to check.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptionValues() const { return m_optionValues; }
    inline bool OptionValuesHasBeenSet() const { return m_optionValuesHasBeenSet; }
    template<typename OptionValuesT = Aws::Vector<Aws::String>>
    void SetOptionValues(OptionValuesT&& value) { m_optionValuesHasBeenSet = true; m_optionValues = std::forward<OptionValuesT>(value); }
    template<typename OptionValuesT = Aws::Vector<Aws::String>>
    ImageUsageResourceTypeOption& WithOptionValues(OptionValuesT&& value) { SetOptionValues(std::forward<OptionValuesT>(value)); return *this;}
    template<typename OptionValuesT = Aws::String>
    ImageUsageResourceTypeOption& AddOptionValues(OptionValuesT&& value) { m_optionValuesHasBeenSet = true; m_optionValues.emplace_back(std::forward<OptionValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_optionValues;
    bool m_optionValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
