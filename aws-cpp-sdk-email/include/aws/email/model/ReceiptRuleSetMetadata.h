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
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about a receipt rule set.</p> <p>A receipt rule set is a
   * collection of rules that specify what Amazon SES should do with mail it receives
   * on behalf of your account's verified domains.</p> <p>For information about
   * setting up receipt rule sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReceiptRuleSetMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API ReceiptRuleSetMetadata
  {
  public:
    ReceiptRuleSetMetadata();
    ReceiptRuleSetMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReceiptRuleSetMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the receipt rule set. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li>
     * <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the receipt rule set. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li>
     * <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the receipt rule set. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li>
     * <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the receipt rule set. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li>
     * <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the receipt rule set. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li>
     * <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the receipt rule set. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li>
     * <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline ReceiptRuleSetMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the receipt rule set. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li>
     * <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline ReceiptRuleSetMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the receipt rule set. The name must:</p> <ul> <li> <p>This value
     * can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), or
     * dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p> </li>
     * <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline ReceiptRuleSetMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The date and time the receipt rule set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The date and time the receipt rule set was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The date and time the receipt rule set was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The date and time the receipt rule set was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The date and time the receipt rule set was created.</p>
     */
    inline ReceiptRuleSetMetadata& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The date and time the receipt rule set was created.</p>
     */
    inline ReceiptRuleSetMetadata& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
