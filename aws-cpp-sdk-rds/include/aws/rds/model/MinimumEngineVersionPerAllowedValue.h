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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>The minimum DB engine version required for each corresponding allowed value
   * for an option setting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/MinimumEngineVersionPerAllowedValue">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API MinimumEngineVersionPerAllowedValue
  {
  public:
    MinimumEngineVersionPerAllowedValue();
    MinimumEngineVersionPerAllowedValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    MinimumEngineVersionPerAllowedValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The allowed value for an option setting.</p>
     */
    inline const Aws::String& GetAllowedValue() const{ return m_allowedValue; }

    /**
     * <p>The allowed value for an option setting.</p>
     */
    inline bool AllowedValueHasBeenSet() const { return m_allowedValueHasBeenSet; }

    /**
     * <p>The allowed value for an option setting.</p>
     */
    inline void SetAllowedValue(const Aws::String& value) { m_allowedValueHasBeenSet = true; m_allowedValue = value; }

    /**
     * <p>The allowed value for an option setting.</p>
     */
    inline void SetAllowedValue(Aws::String&& value) { m_allowedValueHasBeenSet = true; m_allowedValue = std::move(value); }

    /**
     * <p>The allowed value for an option setting.</p>
     */
    inline void SetAllowedValue(const char* value) { m_allowedValueHasBeenSet = true; m_allowedValue.assign(value); }

    /**
     * <p>The allowed value for an option setting.</p>
     */
    inline MinimumEngineVersionPerAllowedValue& WithAllowedValue(const Aws::String& value) { SetAllowedValue(value); return *this;}

    /**
     * <p>The allowed value for an option setting.</p>
     */
    inline MinimumEngineVersionPerAllowedValue& WithAllowedValue(Aws::String&& value) { SetAllowedValue(std::move(value)); return *this;}

    /**
     * <p>The allowed value for an option setting.</p>
     */
    inline MinimumEngineVersionPerAllowedValue& WithAllowedValue(const char* value) { SetAllowedValue(value); return *this;}


    /**
     * <p>The minimum DB engine version required for the allowed value.</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }

    /**
     * <p>The minimum DB engine version required for the allowed value.</p>
     */
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }

    /**
     * <p>The minimum DB engine version required for the allowed value.</p>
     */
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }

    /**
     * <p>The minimum DB engine version required for the allowed value.</p>
     */
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::move(value); }

    /**
     * <p>The minimum DB engine version required for the allowed value.</p>
     */
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion.assign(value); }

    /**
     * <p>The minimum DB engine version required for the allowed value.</p>
     */
    inline MinimumEngineVersionPerAllowedValue& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}

    /**
     * <p>The minimum DB engine version required for the allowed value.</p>
     */
    inline MinimumEngineVersionPerAllowedValue& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The minimum DB engine version required for the allowed value.</p>
     */
    inline MinimumEngineVersionPerAllowedValue& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}

  private:

    Aws::String m_allowedValue;
    bool m_allowedValueHasBeenSet;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
