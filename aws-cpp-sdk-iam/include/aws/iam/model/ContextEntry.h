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
   * used as an input parameter to <code> <a>SimulateCustomPolicy</a> </code> and
   * <code> <a>SimulateCustomPolicy</a> </code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ContextEntry">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API ContextEntry
  {
  public:
    ContextEntry();
    ContextEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    ContextEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The full name of a condition context key, including the service prefix. For
     * example, <code>aws:SourceIp</code> or <code>s3:VersionId</code>.</p>
     */
    inline const Aws::String& GetContextKeyName() const{ return m_contextKeyName; }

    /**
     * <p>The full name of a condition context key, including the service prefix. For
     * example, <code>aws:SourceIp</code> or <code>s3:VersionId</code>.</p>
     */
    inline bool ContextKeyNameHasBeenSet() const { return m_contextKeyNameHasBeenSet; }

    /**
     * <p>The full name of a condition context key, including the service prefix. For
     * example, <code>aws:SourceIp</code> or <code>s3:VersionId</code>.</p>
     */
    inline void SetContextKeyName(const Aws::String& value) { m_contextKeyNameHasBeenSet = true; m_contextKeyName = value; }

    /**
     * <p>The full name of a condition context key, including the service prefix. For
     * example, <code>aws:SourceIp</code> or <code>s3:VersionId</code>.</p>
     */
    inline void SetContextKeyName(Aws::String&& value) { m_contextKeyNameHasBeenSet = true; m_contextKeyName = std::move(value); }

    /**
     * <p>The full name of a condition context key, including the service prefix. For
     * example, <code>aws:SourceIp</code> or <code>s3:VersionId</code>.</p>
     */
    inline void SetContextKeyName(const char* value) { m_contextKeyNameHasBeenSet = true; m_contextKeyName.assign(value); }

    /**
     * <p>The full name of a condition context key, including the service prefix. For
     * example, <code>aws:SourceIp</code> or <code>s3:VersionId</code>.</p>
     */
    inline ContextEntry& WithContextKeyName(const Aws::String& value) { SetContextKeyName(value); return *this;}

    /**
     * <p>The full name of a condition context key, including the service prefix. For
     * example, <code>aws:SourceIp</code> or <code>s3:VersionId</code>.</p>
     */
    inline ContextEntry& WithContextKeyName(Aws::String&& value) { SetContextKeyName(std::move(value)); return *this;}

    /**
     * <p>The full name of a condition context key, including the service prefix. For
     * example, <code>aws:SourceIp</code> or <code>s3:VersionId</code>.</p>
     */
    inline ContextEntry& WithContextKeyName(const char* value) { SetContextKeyName(value); return *this;}


    /**
     * <p>The value (or values, if the condition context key supports multiple values)
     * to provide to the simulation when the key is referenced by a
     * <code>Condition</code> element in an input policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContextKeyValues() const{ return m_contextKeyValues; }

    /**
     * <p>The value (or values, if the condition context key supports multiple values)
     * to provide to the simulation when the key is referenced by a
     * <code>Condition</code> element in an input policy.</p>
     */
    inline bool ContextKeyValuesHasBeenSet() const { return m_contextKeyValuesHasBeenSet; }

    /**
     * <p>The value (or values, if the condition context key supports multiple values)
     * to provide to the simulation when the key is referenced by a
     * <code>Condition</code> element in an input policy.</p>
     */
    inline void SetContextKeyValues(const Aws::Vector<Aws::String>& value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues = value; }

    /**
     * <p>The value (or values, if the condition context key supports multiple values)
     * to provide to the simulation when the key is referenced by a
     * <code>Condition</code> element in an input policy.</p>
     */
    inline void SetContextKeyValues(Aws::Vector<Aws::String>&& value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues = std::move(value); }

    /**
     * <p>The value (or values, if the condition context key supports multiple values)
     * to provide to the simulation when the key is referenced by a
     * <code>Condition</code> element in an input policy.</p>
     */
    inline ContextEntry& WithContextKeyValues(const Aws::Vector<Aws::String>& value) { SetContextKeyValues(value); return *this;}

    /**
     * <p>The value (or values, if the condition context key supports multiple values)
     * to provide to the simulation when the key is referenced by a
     * <code>Condition</code> element in an input policy.</p>
     */
    inline ContextEntry& WithContextKeyValues(Aws::Vector<Aws::String>&& value) { SetContextKeyValues(std::move(value)); return *this;}

    /**
     * <p>The value (or values, if the condition context key supports multiple values)
     * to provide to the simulation when the key is referenced by a
     * <code>Condition</code> element in an input policy.</p>
     */
    inline ContextEntry& AddContextKeyValues(const Aws::String& value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues.push_back(value); return *this; }

    /**
     * <p>The value (or values, if the condition context key supports multiple values)
     * to provide to the simulation when the key is referenced by a
     * <code>Condition</code> element in an input policy.</p>
     */
    inline ContextEntry& AddContextKeyValues(Aws::String&& value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The value (or values, if the condition context key supports multiple values)
     * to provide to the simulation when the key is referenced by a
     * <code>Condition</code> element in an input policy.</p>
     */
    inline ContextEntry& AddContextKeyValues(const char* value) { m_contextKeyValuesHasBeenSet = true; m_contextKeyValues.push_back(value); return *this; }


    /**
     * <p>The data type of the value (or values) specified in the
     * <code>ContextKeyValues</code> parameter.</p>
     */
    inline const ContextKeyTypeEnum& GetContextKeyType() const{ return m_contextKeyType; }

    /**
     * <p>The data type of the value (or values) specified in the
     * <code>ContextKeyValues</code> parameter.</p>
     */
    inline bool ContextKeyTypeHasBeenSet() const { return m_contextKeyTypeHasBeenSet; }

    /**
     * <p>The data type of the value (or values) specified in the
     * <code>ContextKeyValues</code> parameter.</p>
     */
    inline void SetContextKeyType(const ContextKeyTypeEnum& value) { m_contextKeyTypeHasBeenSet = true; m_contextKeyType = value; }

    /**
     * <p>The data type of the value (or values) specified in the
     * <code>ContextKeyValues</code> parameter.</p>
     */
    inline void SetContextKeyType(ContextKeyTypeEnum&& value) { m_contextKeyTypeHasBeenSet = true; m_contextKeyType = std::move(value); }

    /**
     * <p>The data type of the value (or values) specified in the
     * <code>ContextKeyValues</code> parameter.</p>
     */
    inline ContextEntry& WithContextKeyType(const ContextKeyTypeEnum& value) { SetContextKeyType(value); return *this;}

    /**
     * <p>The data type of the value (or values) specified in the
     * <code>ContextKeyValues</code> parameter.</p>
     */
    inline ContextEntry& WithContextKeyType(ContextKeyTypeEnum&& value) { SetContextKeyType(std::move(value)); return *this;}

  private:

    Aws::String m_contextKeyName;
    bool m_contextKeyNameHasBeenSet;

    Aws::Vector<Aws::String> m_contextKeyValues;
    bool m_contextKeyValuesHasBeenSet;

    ContextKeyTypeEnum m_contextKeyType;
    bool m_contextKeyTypeHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
