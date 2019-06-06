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
#include <aws/email/SES_EXPORTS.h>
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
namespace SES
{
namespace Model
{

  /**
   * <p>The name of the configuration set.</p> <p>Configuration sets let you create
   * groups of rules that you can apply to the emails you send using Amazon SES. For
   * more information about using configuration sets, see <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/using-configuration-sets.html">Using
   * Amazon SES Configuration Sets</a> in the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon SES
   * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ConfigurationSet">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API ConfigurationSet
  {
  public:
    ConfigurationSet();
    ConfigurationSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    ConfigurationSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the configuration set. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only letters (a-z, A-Z), numbers (0-9),
     * underscores (_), or dashes (-).</p> </li> <li> <p>Contain 64 characters or
     * fewer.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration set. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only letters (a-z, A-Z), numbers (0-9),
     * underscores (_), or dashes (-).</p> </li> <li> <p>Contain 64 characters or
     * fewer.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configuration set. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only letters (a-z, A-Z), numbers (0-9),
     * underscores (_), or dashes (-).</p> </li> <li> <p>Contain 64 characters or
     * fewer.</p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configuration set. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only letters (a-z, A-Z), numbers (0-9),
     * underscores (_), or dashes (-).</p> </li> <li> <p>Contain 64 characters or
     * fewer.</p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configuration set. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only letters (a-z, A-Z), numbers (0-9),
     * underscores (_), or dashes (-).</p> </li> <li> <p>Contain 64 characters or
     * fewer.</p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configuration set. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only letters (a-z, A-Z), numbers (0-9),
     * underscores (_), or dashes (-).</p> </li> <li> <p>Contain 64 characters or
     * fewer.</p> </li> </ul>
     */
    inline ConfigurationSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration set. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only letters (a-z, A-Z), numbers (0-9),
     * underscores (_), or dashes (-).</p> </li> <li> <p>Contain 64 characters or
     * fewer.</p> </li> </ul>
     */
    inline ConfigurationSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only letters (a-z, A-Z), numbers (0-9),
     * underscores (_), or dashes (-).</p> </li> <li> <p>Contain 64 characters or
     * fewer.</p> </li> </ul>
     */
    inline ConfigurationSet& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
