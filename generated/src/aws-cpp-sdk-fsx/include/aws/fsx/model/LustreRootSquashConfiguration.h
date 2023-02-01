/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The configuration for Lustre root squash used to restrict root-level access
   * from clients that try to access your FSx for Lustre file system as root. Use the
   * <code>RootSquash</code> parameter to enable root squash. To learn more about
   * Lustre root squash, see <a
   * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/root-squash.html">Lustre
   * root squash</a>.</p> <p>You can also use the <code>NoSquashNids</code> parameter
   * to provide an array of clients who are not affected by the root squash setting.
   * These clients will access the file system as root, with unrestricted
   * privileges.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LustreRootSquashConfiguration">AWS
   * API Reference</a></p>
   */
  class LustreRootSquashConfiguration
  {
  public:
    AWS_FSX_API LustreRootSquashConfiguration();
    AWS_FSX_API LustreRootSquashConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API LustreRootSquashConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>You enable root squash by setting a user ID (UID) and group ID (GID) for the
     * file system in the format <code>UID:GID</code> (for example,
     * <code>365534:65534</code>). The UID and GID values can range from <code>0</code>
     * to <code>4294967294</code>:</p> <ul> <li> <p>A non-zero value for UID and GID
     * enables root squash. The UID and GID values can be different, but each must be a
     * non-zero value.</p> </li> <li> <p>A value of <code>0</code> (zero) for UID and
     * GID indicates root, and therefore disables root squash.</p> </li> </ul> <p>When
     * root squash is enabled, the user ID and group ID of a root user accessing the
     * file system are re-mapped to the UID and GID you provide.</p>
     */
    inline const Aws::String& GetRootSquash() const{ return m_rootSquash; }

    /**
     * <p>You enable root squash by setting a user ID (UID) and group ID (GID) for the
     * file system in the format <code>UID:GID</code> (for example,
     * <code>365534:65534</code>). The UID and GID values can range from <code>0</code>
     * to <code>4294967294</code>:</p> <ul> <li> <p>A non-zero value for UID and GID
     * enables root squash. The UID and GID values can be different, but each must be a
     * non-zero value.</p> </li> <li> <p>A value of <code>0</code> (zero) for UID and
     * GID indicates root, and therefore disables root squash.</p> </li> </ul> <p>When
     * root squash is enabled, the user ID and group ID of a root user accessing the
     * file system are re-mapped to the UID and GID you provide.</p>
     */
    inline bool RootSquashHasBeenSet() const { return m_rootSquashHasBeenSet; }

    /**
     * <p>You enable root squash by setting a user ID (UID) and group ID (GID) for the
     * file system in the format <code>UID:GID</code> (for example,
     * <code>365534:65534</code>). The UID and GID values can range from <code>0</code>
     * to <code>4294967294</code>:</p> <ul> <li> <p>A non-zero value for UID and GID
     * enables root squash. The UID and GID values can be different, but each must be a
     * non-zero value.</p> </li> <li> <p>A value of <code>0</code> (zero) for UID and
     * GID indicates root, and therefore disables root squash.</p> </li> </ul> <p>When
     * root squash is enabled, the user ID and group ID of a root user accessing the
     * file system are re-mapped to the UID and GID you provide.</p>
     */
    inline void SetRootSquash(const Aws::String& value) { m_rootSquashHasBeenSet = true; m_rootSquash = value; }

    /**
     * <p>You enable root squash by setting a user ID (UID) and group ID (GID) for the
     * file system in the format <code>UID:GID</code> (for example,
     * <code>365534:65534</code>). The UID and GID values can range from <code>0</code>
     * to <code>4294967294</code>:</p> <ul> <li> <p>A non-zero value for UID and GID
     * enables root squash. The UID and GID values can be different, but each must be a
     * non-zero value.</p> </li> <li> <p>A value of <code>0</code> (zero) for UID and
     * GID indicates root, and therefore disables root squash.</p> </li> </ul> <p>When
     * root squash is enabled, the user ID and group ID of a root user accessing the
     * file system are re-mapped to the UID and GID you provide.</p>
     */
    inline void SetRootSquash(Aws::String&& value) { m_rootSquashHasBeenSet = true; m_rootSquash = std::move(value); }

    /**
     * <p>You enable root squash by setting a user ID (UID) and group ID (GID) for the
     * file system in the format <code>UID:GID</code> (for example,
     * <code>365534:65534</code>). The UID and GID values can range from <code>0</code>
     * to <code>4294967294</code>:</p> <ul> <li> <p>A non-zero value for UID and GID
     * enables root squash. The UID and GID values can be different, but each must be a
     * non-zero value.</p> </li> <li> <p>A value of <code>0</code> (zero) for UID and
     * GID indicates root, and therefore disables root squash.</p> </li> </ul> <p>When
     * root squash is enabled, the user ID and group ID of a root user accessing the
     * file system are re-mapped to the UID and GID you provide.</p>
     */
    inline void SetRootSquash(const char* value) { m_rootSquashHasBeenSet = true; m_rootSquash.assign(value); }

    /**
     * <p>You enable root squash by setting a user ID (UID) and group ID (GID) for the
     * file system in the format <code>UID:GID</code> (for example,
     * <code>365534:65534</code>). The UID and GID values can range from <code>0</code>
     * to <code>4294967294</code>:</p> <ul> <li> <p>A non-zero value for UID and GID
     * enables root squash. The UID and GID values can be different, but each must be a
     * non-zero value.</p> </li> <li> <p>A value of <code>0</code> (zero) for UID and
     * GID indicates root, and therefore disables root squash.</p> </li> </ul> <p>When
     * root squash is enabled, the user ID and group ID of a root user accessing the
     * file system are re-mapped to the UID and GID you provide.</p>
     */
    inline LustreRootSquashConfiguration& WithRootSquash(const Aws::String& value) { SetRootSquash(value); return *this;}

    /**
     * <p>You enable root squash by setting a user ID (UID) and group ID (GID) for the
     * file system in the format <code>UID:GID</code> (for example,
     * <code>365534:65534</code>). The UID and GID values can range from <code>0</code>
     * to <code>4294967294</code>:</p> <ul> <li> <p>A non-zero value for UID and GID
     * enables root squash. The UID and GID values can be different, but each must be a
     * non-zero value.</p> </li> <li> <p>A value of <code>0</code> (zero) for UID and
     * GID indicates root, and therefore disables root squash.</p> </li> </ul> <p>When
     * root squash is enabled, the user ID and group ID of a root user accessing the
     * file system are re-mapped to the UID and GID you provide.</p>
     */
    inline LustreRootSquashConfiguration& WithRootSquash(Aws::String&& value) { SetRootSquash(std::move(value)); return *this;}

    /**
     * <p>You enable root squash by setting a user ID (UID) and group ID (GID) for the
     * file system in the format <code>UID:GID</code> (for example,
     * <code>365534:65534</code>). The UID and GID values can range from <code>0</code>
     * to <code>4294967294</code>:</p> <ul> <li> <p>A non-zero value for UID and GID
     * enables root squash. The UID and GID values can be different, but each must be a
     * non-zero value.</p> </li> <li> <p>A value of <code>0</code> (zero) for UID and
     * GID indicates root, and therefore disables root squash.</p> </li> </ul> <p>When
     * root squash is enabled, the user ID and group ID of a root user accessing the
     * file system are re-mapped to the UID and GID you provide.</p>
     */
    inline LustreRootSquashConfiguration& WithRootSquash(const char* value) { SetRootSquash(value); return *this;}


    /**
     * <p>When root squash is enabled, you can optionally specify an array of NIDs of
     * clients for which root squash does not apply. A client NID is a Lustre Network
     * Identifier used to uniquely identify a client. You can specify the NID as either
     * a single address or a range of addresses:</p> <ul> <li> <p>A single address is
     * described in standard Lustre NID format by specifying the client’s IP address
     * followed by the Lustre network ID (for example, <code>10.0.1.6@tcp</code>).</p>
     * </li> <li> <p>An address range is described using a dash to separate the range
     * (for example, <code>10.0.[2-10].[1-255]@tcp</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetNoSquashNids() const{ return m_noSquashNids; }

    /**
     * <p>When root squash is enabled, you can optionally specify an array of NIDs of
     * clients for which root squash does not apply. A client NID is a Lustre Network
     * Identifier used to uniquely identify a client. You can specify the NID as either
     * a single address or a range of addresses:</p> <ul> <li> <p>A single address is
     * described in standard Lustre NID format by specifying the client’s IP address
     * followed by the Lustre network ID (for example, <code>10.0.1.6@tcp</code>).</p>
     * </li> <li> <p>An address range is described using a dash to separate the range
     * (for example, <code>10.0.[2-10].[1-255]@tcp</code>).</p> </li> </ul>
     */
    inline bool NoSquashNidsHasBeenSet() const { return m_noSquashNidsHasBeenSet; }

    /**
     * <p>When root squash is enabled, you can optionally specify an array of NIDs of
     * clients for which root squash does not apply. A client NID is a Lustre Network
     * Identifier used to uniquely identify a client. You can specify the NID as either
     * a single address or a range of addresses:</p> <ul> <li> <p>A single address is
     * described in standard Lustre NID format by specifying the client’s IP address
     * followed by the Lustre network ID (for example, <code>10.0.1.6@tcp</code>).</p>
     * </li> <li> <p>An address range is described using a dash to separate the range
     * (for example, <code>10.0.[2-10].[1-255]@tcp</code>).</p> </li> </ul>
     */
    inline void SetNoSquashNids(const Aws::Vector<Aws::String>& value) { m_noSquashNidsHasBeenSet = true; m_noSquashNids = value; }

    /**
     * <p>When root squash is enabled, you can optionally specify an array of NIDs of
     * clients for which root squash does not apply. A client NID is a Lustre Network
     * Identifier used to uniquely identify a client. You can specify the NID as either
     * a single address or a range of addresses:</p> <ul> <li> <p>A single address is
     * described in standard Lustre NID format by specifying the client’s IP address
     * followed by the Lustre network ID (for example, <code>10.0.1.6@tcp</code>).</p>
     * </li> <li> <p>An address range is described using a dash to separate the range
     * (for example, <code>10.0.[2-10].[1-255]@tcp</code>).</p> </li> </ul>
     */
    inline void SetNoSquashNids(Aws::Vector<Aws::String>&& value) { m_noSquashNidsHasBeenSet = true; m_noSquashNids = std::move(value); }

    /**
     * <p>When root squash is enabled, you can optionally specify an array of NIDs of
     * clients for which root squash does not apply. A client NID is a Lustre Network
     * Identifier used to uniquely identify a client. You can specify the NID as either
     * a single address or a range of addresses:</p> <ul> <li> <p>A single address is
     * described in standard Lustre NID format by specifying the client’s IP address
     * followed by the Lustre network ID (for example, <code>10.0.1.6@tcp</code>).</p>
     * </li> <li> <p>An address range is described using a dash to separate the range
     * (for example, <code>10.0.[2-10].[1-255]@tcp</code>).</p> </li> </ul>
     */
    inline LustreRootSquashConfiguration& WithNoSquashNids(const Aws::Vector<Aws::String>& value) { SetNoSquashNids(value); return *this;}

    /**
     * <p>When root squash is enabled, you can optionally specify an array of NIDs of
     * clients for which root squash does not apply. A client NID is a Lustre Network
     * Identifier used to uniquely identify a client. You can specify the NID as either
     * a single address or a range of addresses:</p> <ul> <li> <p>A single address is
     * described in standard Lustre NID format by specifying the client’s IP address
     * followed by the Lustre network ID (for example, <code>10.0.1.6@tcp</code>).</p>
     * </li> <li> <p>An address range is described using a dash to separate the range
     * (for example, <code>10.0.[2-10].[1-255]@tcp</code>).</p> </li> </ul>
     */
    inline LustreRootSquashConfiguration& WithNoSquashNids(Aws::Vector<Aws::String>&& value) { SetNoSquashNids(std::move(value)); return *this;}

    /**
     * <p>When root squash is enabled, you can optionally specify an array of NIDs of
     * clients for which root squash does not apply. A client NID is a Lustre Network
     * Identifier used to uniquely identify a client. You can specify the NID as either
     * a single address or a range of addresses:</p> <ul> <li> <p>A single address is
     * described in standard Lustre NID format by specifying the client’s IP address
     * followed by the Lustre network ID (for example, <code>10.0.1.6@tcp</code>).</p>
     * </li> <li> <p>An address range is described using a dash to separate the range
     * (for example, <code>10.0.[2-10].[1-255]@tcp</code>).</p> </li> </ul>
     */
    inline LustreRootSquashConfiguration& AddNoSquashNids(const Aws::String& value) { m_noSquashNidsHasBeenSet = true; m_noSquashNids.push_back(value); return *this; }

    /**
     * <p>When root squash is enabled, you can optionally specify an array of NIDs of
     * clients for which root squash does not apply. A client NID is a Lustre Network
     * Identifier used to uniquely identify a client. You can specify the NID as either
     * a single address or a range of addresses:</p> <ul> <li> <p>A single address is
     * described in standard Lustre NID format by specifying the client’s IP address
     * followed by the Lustre network ID (for example, <code>10.0.1.6@tcp</code>).</p>
     * </li> <li> <p>An address range is described using a dash to separate the range
     * (for example, <code>10.0.[2-10].[1-255]@tcp</code>).</p> </li> </ul>
     */
    inline LustreRootSquashConfiguration& AddNoSquashNids(Aws::String&& value) { m_noSquashNidsHasBeenSet = true; m_noSquashNids.push_back(std::move(value)); return *this; }

    /**
     * <p>When root squash is enabled, you can optionally specify an array of NIDs of
     * clients for which root squash does not apply. A client NID is a Lustre Network
     * Identifier used to uniquely identify a client. You can specify the NID as either
     * a single address or a range of addresses:</p> <ul> <li> <p>A single address is
     * described in standard Lustre NID format by specifying the client’s IP address
     * followed by the Lustre network ID (for example, <code>10.0.1.6@tcp</code>).</p>
     * </li> <li> <p>An address range is described using a dash to separate the range
     * (for example, <code>10.0.[2-10].[1-255]@tcp</code>).</p> </li> </ul>
     */
    inline LustreRootSquashConfiguration& AddNoSquashNids(const char* value) { m_noSquashNidsHasBeenSet = true; m_noSquashNids.push_back(value); return *this; }

  private:

    Aws::String m_rootSquash;
    bool m_rootSquashHasBeenSet = false;

    Aws::Vector<Aws::String> m_noSquashNids;
    bool m_noSquashNidsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
