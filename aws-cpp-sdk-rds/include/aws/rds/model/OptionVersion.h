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
   * <p>The version for an option. Option group option versions are returned by the
   * <code>DescribeOptionGroupOptions</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionVersion">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API OptionVersion
  {
  public:
    OptionVersion();
    OptionVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    OptionVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The version of the option.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the option.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the option.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the option.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the option.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the option.</p>
     */
    inline OptionVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the option.</p>
     */
    inline OptionVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the option.</p>
     */
    inline OptionVersion& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>True if the version is the default version of the option, and otherwise
     * false.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>True if the version is the default version of the option, and otherwise
     * false.</p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>True if the version is the default version of the option, and otherwise
     * false.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>True if the version is the default version of the option, and otherwise
     * false.</p>
     */
    inline OptionVersion& WithIsDefault(bool value) { SetIsDefault(value); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
