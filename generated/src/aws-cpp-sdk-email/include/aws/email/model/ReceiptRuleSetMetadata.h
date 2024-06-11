﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-concepts.html#receiving-email-concepts-rules">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReceiptRuleSetMetadata">AWS
   * API Reference</a></p>
   */
  class ReceiptRuleSetMetadata
  {
  public:
    AWS_SES_API ReceiptRuleSetMetadata();
    AWS_SES_API ReceiptRuleSetMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API ReceiptRuleSetMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the receipt rule set. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ReceiptRuleSetMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ReceiptRuleSetMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ReceiptRuleSetMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the receipt rule set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ReceiptRuleSetMetadata& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ReceiptRuleSetMetadata& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
