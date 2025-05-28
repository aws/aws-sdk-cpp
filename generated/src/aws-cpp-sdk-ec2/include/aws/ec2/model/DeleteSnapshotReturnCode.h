/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SnapshotReturnCodes.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The snapshot ID and its deletion result code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSnapshotReturnCode">AWS
   * API Reference</a></p>
   */
  class DeleteSnapshotReturnCode
  {
  public:
    AWS_EC2_API DeleteSnapshotReturnCode() = default;
    AWS_EC2_API DeleteSnapshotReturnCode(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DeleteSnapshotReturnCode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    DeleteSnapshotReturnCode& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result code from the snapshot deletion attempt. Possible values:</p> <ul>
     * <li> <p> <code>success</code> - The snapshot was successfully deleted.</p> </li>
     * <li> <p> <code>skipped</code> - The snapshot was not deleted because it's
     * associated with other AMIs.</p> </li> <li> <p> <code>missing-permissions</code>
     * - The snapshot was not deleted because the role lacks
     * <code>DeleteSnapshot</code> permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/security_iam_service-with-iam.html">How
     * Amazon EBS works with IAM</a>.</p> </li> <li> <p> <code>internal-error</code> -
     * The snapshot was not deleted due to a server error.</p> </li> <li> <p>
     * <code>client-error</code> - The snapshot was not deleted due to a client
     * configuration error.</p> </li> </ul> <p>For details about an error, check the
     * <code>DeleteSnapshot</code> event in the CloudTrail event history. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/tutorial-event-history.html">View
     * event history</a> in the <i>Amazon Web Services CloudTrail User Guide</i>.</p>
     */
    inline SnapshotReturnCodes GetReturnCode() const { return m_returnCode; }
    inline bool ReturnCodeHasBeenSet() const { return m_returnCodeHasBeenSet; }
    inline void SetReturnCode(SnapshotReturnCodes value) { m_returnCodeHasBeenSet = true; m_returnCode = value; }
    inline DeleteSnapshotReturnCode& WithReturnCode(SnapshotReturnCodes value) { SetReturnCode(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    SnapshotReturnCodes m_returnCode{SnapshotReturnCodes::NOT_SET};
    bool m_returnCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
