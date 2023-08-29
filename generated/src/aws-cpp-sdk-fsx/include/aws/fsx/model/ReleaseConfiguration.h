/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DurationSinceLastAccess.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration that specifies a minimum amount of time since last access
   * for an exported file to be eligible for release from an Amazon FSx for Lustre
   * file system. Only files that were last accessed before this point-in-time can be
   * released. For example, if you specify a last accessed time criteria of 9 days,
   * only files that were last accessed 9.00001 or more days ago can be released.</p>
   * <p>Only file data that has been exported to S3 can be released. Files that have
   * not yet been exported to S3, such as new or changed files that have not been
   * exported, are not eligible for release. When files are released, their metadata
   * stays on the file system, so they can still be accessed later. Users and
   * applications can access a released file by reading the file again, which
   * restores data from Amazon S3 to the FSx for Lustre file system.</p>  <p>If
   * a file meets the last accessed time criteria, its file or directory path must
   * also be specified with the <code>Paths</code> parameter of the operation in
   * order for the file to be released.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ReleaseConfiguration">AWS
   * API Reference</a></p>
   */
  class ReleaseConfiguration
  {
  public:
    AWS_FSX_API ReleaseConfiguration();
    AWS_FSX_API ReleaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API ReleaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the point-in-time since an exported file was last accessed, in order
     * for that file to be eligible for release. Only files that were last accessed
     * before this point-in-time are eligible to be released from the file system.</p>
     */
    inline const DurationSinceLastAccess& GetDurationSinceLastAccess() const{ return m_durationSinceLastAccess; }

    /**
     * <p>Defines the point-in-time since an exported file was last accessed, in order
     * for that file to be eligible for release. Only files that were last accessed
     * before this point-in-time are eligible to be released from the file system.</p>
     */
    inline bool DurationSinceLastAccessHasBeenSet() const { return m_durationSinceLastAccessHasBeenSet; }

    /**
     * <p>Defines the point-in-time since an exported file was last accessed, in order
     * for that file to be eligible for release. Only files that were last accessed
     * before this point-in-time are eligible to be released from the file system.</p>
     */
    inline void SetDurationSinceLastAccess(const DurationSinceLastAccess& value) { m_durationSinceLastAccessHasBeenSet = true; m_durationSinceLastAccess = value; }

    /**
     * <p>Defines the point-in-time since an exported file was last accessed, in order
     * for that file to be eligible for release. Only files that were last accessed
     * before this point-in-time are eligible to be released from the file system.</p>
     */
    inline void SetDurationSinceLastAccess(DurationSinceLastAccess&& value) { m_durationSinceLastAccessHasBeenSet = true; m_durationSinceLastAccess = std::move(value); }

    /**
     * <p>Defines the point-in-time since an exported file was last accessed, in order
     * for that file to be eligible for release. Only files that were last accessed
     * before this point-in-time are eligible to be released from the file system.</p>
     */
    inline ReleaseConfiguration& WithDurationSinceLastAccess(const DurationSinceLastAccess& value) { SetDurationSinceLastAccess(value); return *this;}

    /**
     * <p>Defines the point-in-time since an exported file was last accessed, in order
     * for that file to be eligible for release. Only files that were last accessed
     * before this point-in-time are eligible to be released from the file system.</p>
     */
    inline ReleaseConfiguration& WithDurationSinceLastAccess(DurationSinceLastAccess&& value) { SetDurationSinceLastAccess(std::move(value)); return *this;}

  private:

    DurationSinceLastAccess m_durationSinceLastAccess;
    bool m_durationSinceLastAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
