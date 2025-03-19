/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/EnableFastSnapshotRestoreStateErrorItem.h>
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
   * <p>Contains information about the errors that occurred when enabling fast
   * snapshot restores.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableFastSnapshotRestoreErrorItem">AWS
   * API Reference</a></p>
   */
  class EnableFastSnapshotRestoreErrorItem
  {
  public:
    AWS_EC2_API EnableFastSnapshotRestoreErrorItem() = default;
    AWS_EC2_API EnableFastSnapshotRestoreErrorItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EnableFastSnapshotRestoreErrorItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    EnableFastSnapshotRestoreErrorItem& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The errors.</p>
     */
    inline const Aws::Vector<EnableFastSnapshotRestoreStateErrorItem>& GetFastSnapshotRestoreStateErrors() const { return m_fastSnapshotRestoreStateErrors; }
    inline bool FastSnapshotRestoreStateErrorsHasBeenSet() const { return m_fastSnapshotRestoreStateErrorsHasBeenSet; }
    template<typename FastSnapshotRestoreStateErrorsT = Aws::Vector<EnableFastSnapshotRestoreStateErrorItem>>
    void SetFastSnapshotRestoreStateErrors(FastSnapshotRestoreStateErrorsT&& value) { m_fastSnapshotRestoreStateErrorsHasBeenSet = true; m_fastSnapshotRestoreStateErrors = std::forward<FastSnapshotRestoreStateErrorsT>(value); }
    template<typename FastSnapshotRestoreStateErrorsT = Aws::Vector<EnableFastSnapshotRestoreStateErrorItem>>
    EnableFastSnapshotRestoreErrorItem& WithFastSnapshotRestoreStateErrors(FastSnapshotRestoreStateErrorsT&& value) { SetFastSnapshotRestoreStateErrors(std::forward<FastSnapshotRestoreStateErrorsT>(value)); return *this;}
    template<typename FastSnapshotRestoreStateErrorsT = EnableFastSnapshotRestoreStateErrorItem>
    EnableFastSnapshotRestoreErrorItem& AddFastSnapshotRestoreStateErrors(FastSnapshotRestoreStateErrorsT&& value) { m_fastSnapshotRestoreStateErrorsHasBeenSet = true; m_fastSnapshotRestoreStateErrors.emplace_back(std::forward<FastSnapshotRestoreStateErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::Vector<EnableFastSnapshotRestoreStateErrorItem> m_fastSnapshotRestoreStateErrors;
    bool m_fastSnapshotRestoreStateErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
