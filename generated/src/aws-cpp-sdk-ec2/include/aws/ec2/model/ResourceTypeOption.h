/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ImageReferenceOptionName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The options that affect the scope of the response.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResourceTypeOption">AWS
   * API Reference</a></p>
   */
  class ResourceTypeOption
  {
  public:
    AWS_EC2_API ResourceTypeOption() = default;
    AWS_EC2_API ResourceTypeOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ResourceTypeOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the option.</p> <ul> <li> <p>For <code>ec2:Instance</code>:</p>
     * <p>Specify <code>state-name</code> - The current state of the EC2 instance.</p>
     * </li> <li> <p>For <code>ec2:LaunchTemplate</code>:</p> <p>Specify
     * <code>version-depth</code> - The number of launch template versions to check,
     * starting from the most recent version.</p> </li> </ul>
     */
    inline ImageReferenceOptionName GetOptionName() const { return m_optionName; }
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }
    inline void SetOptionName(ImageReferenceOptionName value) { m_optionNameHasBeenSet = true; m_optionName = value; }
    inline ResourceTypeOption& WithOptionName(ImageReferenceOptionName value) { SetOptionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value for the specified option.</p> <ul> <li> <p>For
     * <code>state-name</code>:</p> <ul> <li> <p>Valid values: <code>pending</code> |
     * <code>running</code> | <code>shutting-down</code> | <code>terminated</code> |
     * <code>stopping</code> | <code>stopped</code> </p> </li> <li> <p>Default: All
     * states</p> </li> </ul> </li> <li> <p>For <code>version-depth</code>:</p> <ul>
     * <li> <p>Valid values: Integers between <code>1</code> and <code>10000</code>
     * </p> </li> <li> <p>Default: <code>10</code> </p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetOptionValues() const { return m_optionValues; }
    inline bool OptionValuesHasBeenSet() const { return m_optionValuesHasBeenSet; }
    template<typename OptionValuesT = Aws::Vector<Aws::String>>
    void SetOptionValues(OptionValuesT&& value) { m_optionValuesHasBeenSet = true; m_optionValues = std::forward<OptionValuesT>(value); }
    template<typename OptionValuesT = Aws::Vector<Aws::String>>
    ResourceTypeOption& WithOptionValues(OptionValuesT&& value) { SetOptionValues(std::forward<OptionValuesT>(value)); return *this;}
    template<typename OptionValuesT = Aws::String>
    ResourceTypeOption& AddOptionValues(OptionValuesT&& value) { m_optionValuesHasBeenSet = true; m_optionValues.emplace_back(std::forward<OptionValuesT>(value)); return *this; }
    ///@}
  private:

    ImageReferenceOptionName m_optionName{ImageReferenceOptionName::NOT_SET};
    bool m_optionNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_optionValues;
    bool m_optionValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
