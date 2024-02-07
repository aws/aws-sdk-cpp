/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{

  /**
   * <p>The platform-related details about the DataSync agent, such as the version
   * number.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Platform">AWS
   * API Reference</a></p>
   */
  class Platform
  {
  public:
    AWS_DATASYNC_API Platform();
    AWS_DATASYNC_API Platform(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Platform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the DataSync agent.</p>  <p>On December 7, 2023, we
     * discontinued version 1 DataSync agents. Check the DataSync console to see if you
     * have affected agents. If you do, <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/replacing-agent.html">replace</a>
     * those agents or <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deleting-agent.html">delete</a>
     * them if they aren't in use. If you need more help, contact <a
     * href="https://aws.amazon.com/contact-us/">Amazon Web Services Support</a>.</p>
     * 
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the DataSync agent.</p>  <p>On December 7, 2023, we
     * discontinued version 1 DataSync agents. Check the DataSync console to see if you
     * have affected agents. If you do, <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/replacing-agent.html">replace</a>
     * those agents or <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deleting-agent.html">delete</a>
     * them if they aren't in use. If you need more help, contact <a
     * href="https://aws.amazon.com/contact-us/">Amazon Web Services Support</a>.</p>
     * 
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the DataSync agent.</p>  <p>On December 7, 2023, we
     * discontinued version 1 DataSync agents. Check the DataSync console to see if you
     * have affected agents. If you do, <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/replacing-agent.html">replace</a>
     * those agents or <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deleting-agent.html">delete</a>
     * them if they aren't in use. If you need more help, contact <a
     * href="https://aws.amazon.com/contact-us/">Amazon Web Services Support</a>.</p>
     * 
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the DataSync agent.</p>  <p>On December 7, 2023, we
     * discontinued version 1 DataSync agents. Check the DataSync console to see if you
     * have affected agents. If you do, <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/replacing-agent.html">replace</a>
     * those agents or <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deleting-agent.html">delete</a>
     * them if they aren't in use. If you need more help, contact <a
     * href="https://aws.amazon.com/contact-us/">Amazon Web Services Support</a>.</p>
     * 
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the DataSync agent.</p>  <p>On December 7, 2023, we
     * discontinued version 1 DataSync agents. Check the DataSync console to see if you
     * have affected agents. If you do, <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/replacing-agent.html">replace</a>
     * those agents or <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deleting-agent.html">delete</a>
     * them if they aren't in use. If you need more help, contact <a
     * href="https://aws.amazon.com/contact-us/">Amazon Web Services Support</a>.</p>
     * 
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the DataSync agent.</p>  <p>On December 7, 2023, we
     * discontinued version 1 DataSync agents. Check the DataSync console to see if you
     * have affected agents. If you do, <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/replacing-agent.html">replace</a>
     * those agents or <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deleting-agent.html">delete</a>
     * them if they aren't in use. If you need more help, contact <a
     * href="https://aws.amazon.com/contact-us/">Amazon Web Services Support</a>.</p>
     * 
     */
    inline Platform& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the DataSync agent.</p>  <p>On December 7, 2023, we
     * discontinued version 1 DataSync agents. Check the DataSync console to see if you
     * have affected agents. If you do, <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/replacing-agent.html">replace</a>
     * those agents or <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deleting-agent.html">delete</a>
     * them if they aren't in use. If you need more help, contact <a
     * href="https://aws.amazon.com/contact-us/">Amazon Web Services Support</a>.</p>
     * 
     */
    inline Platform& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the DataSync agent.</p>  <p>On December 7, 2023, we
     * discontinued version 1 DataSync agents. Check the DataSync console to see if you
     * have affected agents. If you do, <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/replacing-agent.html">replace</a>
     * those agents or <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deleting-agent.html">delete</a>
     * them if they aren't in use. If you need more help, contact <a
     * href="https://aws.amazon.com/contact-us/">Amazon Web Services Support</a>.</p>
     * 
     */
    inline Platform& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
