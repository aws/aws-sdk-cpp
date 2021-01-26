/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains the cause of an installation media failure. Installation media is
   * used for a DB engine that requires an on-premises customer provided license,
   * such as Microsoft SQL Server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/InstallationMediaFailureCause">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API InstallationMediaFailureCause
  {
  public:
    InstallationMediaFailureCause();
    InstallationMediaFailureCause(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstallationMediaFailureCause& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The reason that an installation media import failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The reason that an installation media import failed.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The reason that an installation media import failed.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The reason that an installation media import failed.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The reason that an installation media import failed.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The reason that an installation media import failed.</p>
     */
    inline InstallationMediaFailureCause& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The reason that an installation media import failed.</p>
     */
    inline InstallationMediaFailureCause& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The reason that an installation media import failed.</p>
     */
    inline InstallationMediaFailureCause& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
