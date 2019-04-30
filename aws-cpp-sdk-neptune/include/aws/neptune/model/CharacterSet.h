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
#include <aws/neptune/Neptune_EXPORTS.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Specifies a character set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CharacterSet">AWS
   * API Reference</a></p>
   */
  class AWS_NEPTUNE_API CharacterSet
  {
  public:
    CharacterSet();
    CharacterSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    CharacterSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the character set.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p>The name of the character set.</p>
     */
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }

    /**
     * <p>The name of the character set.</p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>The name of the character set.</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }

    /**
     * <p>The name of the character set.</p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p>The name of the character set.</p>
     */
    inline CharacterSet& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>The name of the character set.</p>
     */
    inline CharacterSet& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the character set.</p>
     */
    inline CharacterSet& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}


    /**
     * <p>The description of the character set.</p>
     */
    inline const Aws::String& GetCharacterSetDescription() const{ return m_characterSetDescription; }

    /**
     * <p>The description of the character set.</p>
     */
    inline bool CharacterSetDescriptionHasBeenSet() const { return m_characterSetDescriptionHasBeenSet; }

    /**
     * <p>The description of the character set.</p>
     */
    inline void SetCharacterSetDescription(const Aws::String& value) { m_characterSetDescriptionHasBeenSet = true; m_characterSetDescription = value; }

    /**
     * <p>The description of the character set.</p>
     */
    inline void SetCharacterSetDescription(Aws::String&& value) { m_characterSetDescriptionHasBeenSet = true; m_characterSetDescription = std::move(value); }

    /**
     * <p>The description of the character set.</p>
     */
    inline void SetCharacterSetDescription(const char* value) { m_characterSetDescriptionHasBeenSet = true; m_characterSetDescription.assign(value); }

    /**
     * <p>The description of the character set.</p>
     */
    inline CharacterSet& WithCharacterSetDescription(const Aws::String& value) { SetCharacterSetDescription(value); return *this;}

    /**
     * <p>The description of the character set.</p>
     */
    inline CharacterSet& WithCharacterSetDescription(Aws::String&& value) { SetCharacterSetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the character set.</p>
     */
    inline CharacterSet& WithCharacterSetDescription(const char* value) { SetCharacterSetDescription(value); return *this;}

  private:

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet;

    Aws::String m_characterSetDescription;
    bool m_characterSetDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
