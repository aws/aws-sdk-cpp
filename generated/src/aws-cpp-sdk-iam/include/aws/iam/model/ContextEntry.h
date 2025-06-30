/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/ContextKeyTypeEnum.h>
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
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about a condition context key. It includes the name of
   * the key and specifies the value (or values, if the context key supports multiple
   * values) to use in the simulation. This information is used when evaluating the
   * <code>Condition</code> elements of the input policies.</p> <p>This data type is
   * used as an input parameter to <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_SimulateCustomPolicy.html">SimulateCustomPolicy</a>
   * and <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_SimulatePrincipalPolicy.html">SimulatePrincipalPolicy</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ContextEntry">AWS
   * API Reference</a></p>
   */
  class ContextEntry
  {
  public:
    AWS_IAM_API ContextEntry() = default;
    AWS_IAM_API ContextEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API ContextEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The full name of a condition context key, including the service prefix. For
     * example, <code>aws:SourceIp</code> or <code>s3:VersionId</code>.</p>
     */
    inline const Aws::String& GetContextKeyName() const { return m_contextKeyName; }
    inline bool ContextKeyNameHasBeenSet() const { return m_contextKeyNameHasBeenSet; }
    template<typename ContextKeyNameT = Aws::String>
    void SetContextKeyName(ContextKeyNameT&& value) { m_contextKeyNameHasBeenSet = true; m_contextKeyName = std::forward<ContextKeyNameT>(value); }
    template<typename ContextKeyNameT = Aws::String>
    ContextEntry& WithContextKeyName(ContextKeyNameT&& value) { SetContextKeyName(std::forward<ContextKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value (or values, if the condition context key supports multiple values)
     * to provide to the simulation when the key is referenced by a
     * <code>Condition</code> element in an input policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContextKeyValues() const { return m_contextKeyValues; }
    inline bool ContextKeyValuesHasBeenSet() const { return m_contextKeyValuesHasBeenSet; }
    template<typename ContextKeyValuesT = Aws::Vector<Aws::String>>
    void SetContextKeyValues(ContextKeyValuesT&& value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues = std::forward<ContextKeyValuesT>(value); }
    template<typename ContextKeyValuesT = Aws::Vector<Aws::String>>
    ContextEntry& WithContextKeyValues(ContextKeyValuesT&& value) { SetContextKeyValues(std::forward<ContextKeyValuesT>(value)); return *this;}
    template<typename ContextKeyValuesT = Aws::String>
    ContextEntry& AddContextKeyValues(ContextKeyValuesT&& value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues.emplace_back(std::forward<ContextKeyValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data type of the value (or values) specified in the
     * <code>ContextKeyValues</code> parameter.</p>
     */
    inline ContextKeyTypeEnum GetContextKeyType() const { return m_contextKeyType; }
    inline bool ContextKeyTypeHasBeenSet() const { return m_contextKeyTypeHasBeenSet; }
    inline void SetContextKeyType(ContextKeyTypeEnum value) { m_contextKeyTypeHasBeenSet = true; m_contextKeyType = value; }
    inline ContextEntry& WithContextKeyType(ContextKeyTypeEnum value) { SetContextKeyType(value); return *this;}
    ///@}
  private:

    Aws::String m_contextKeyName;
    bool m_contextKeyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_contextKeyValues;
    bool m_contextKeyValuesHasBeenSet = false;

    ContextKeyTypeEnum m_contextKeyType{ContextKeyTypeEnum::NOT_SET};
    bool m_contextKeyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
