/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Indicates that the provided receipt rule set does not exist.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/RuleSetDoesNotExistException">AWS
   * API Reference</a></p>
   */
  class RuleSetDoesNotExistException
  {
  public:
    AWS_SES_API RuleSetDoesNotExistException();
    AWS_SES_API RuleSetDoesNotExistException(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API RuleSetDoesNotExistException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates that the named receipt rule set does not exist.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Indicates that the named receipt rule set does not exist.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Indicates that the named receipt rule set does not exist.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Indicates that the named receipt rule set does not exist.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Indicates that the named receipt rule set does not exist.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Indicates that the named receipt rule set does not exist.</p>
     */
    inline RuleSetDoesNotExistException& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Indicates that the named receipt rule set does not exist.</p>
     */
    inline RuleSetDoesNotExistException& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Indicates that the named receipt rule set does not exist.</p>
     */
    inline RuleSetDoesNotExistException& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
