/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/DisableFastSnapshotRestoreStateErrorItem.h>
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
   * <p>Contains information about the errors that occurred when disabling fast
   * snapshot restores.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableFastSnapshotRestoreErrorItem">AWS
   * API Reference</a></p>
   */
  class DisableFastSnapshotRestoreErrorItem
  {
  public:
    AWS_EC2_API DisableFastSnapshotRestoreErrorItem();
    AWS_EC2_API DisableFastSnapshotRestoreErrorItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DisableFastSnapshotRestoreErrorItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline DisableFastSnapshotRestoreErrorItem& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline DisableFastSnapshotRestoreErrorItem& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline DisableFastSnapshotRestoreErrorItem& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The errors.</p>
     */
    inline const Aws::Vector<DisableFastSnapshotRestoreStateErrorItem>& GetFastSnapshotRestoreStateErrors() const{ return m_fastSnapshotRestoreStateErrors; }

    /**
     * <p>The errors.</p>
     */
    inline bool FastSnapshotRestoreStateErrorsHasBeenSet() const { return m_fastSnapshotRestoreStateErrorsHasBeenSet; }

    /**
     * <p>The errors.</p>
     */
    inline void SetFastSnapshotRestoreStateErrors(const Aws::Vector<DisableFastSnapshotRestoreStateErrorItem>& value) { m_fastSnapshotRestoreStateErrorsHasBeenSet = true; m_fastSnapshotRestoreStateErrors = value; }

    /**
     * <p>The errors.</p>
     */
    inline void SetFastSnapshotRestoreStateErrors(Aws::Vector<DisableFastSnapshotRestoreStateErrorItem>&& value) { m_fastSnapshotRestoreStateErrorsHasBeenSet = true; m_fastSnapshotRestoreStateErrors = std::move(value); }

    /**
     * <p>The errors.</p>
     */
    inline DisableFastSnapshotRestoreErrorItem& WithFastSnapshotRestoreStateErrors(const Aws::Vector<DisableFastSnapshotRestoreStateErrorItem>& value) { SetFastSnapshotRestoreStateErrors(value); return *this;}

    /**
     * <p>The errors.</p>
     */
    inline DisableFastSnapshotRestoreErrorItem& WithFastSnapshotRestoreStateErrors(Aws::Vector<DisableFastSnapshotRestoreStateErrorItem>&& value) { SetFastSnapshotRestoreStateErrors(std::move(value)); return *this;}

    /**
     * <p>The errors.</p>
     */
    inline DisableFastSnapshotRestoreErrorItem& AddFastSnapshotRestoreStateErrors(const DisableFastSnapshotRestoreStateErrorItem& value) { m_fastSnapshotRestoreStateErrorsHasBeenSet = true; m_fastSnapshotRestoreStateErrors.push_back(value); return *this; }

    /**
     * <p>The errors.</p>
     */
    inline DisableFastSnapshotRestoreErrorItem& AddFastSnapshotRestoreStateErrors(DisableFastSnapshotRestoreStateErrorItem&& value) { m_fastSnapshotRestoreStateErrorsHasBeenSet = true; m_fastSnapshotRestoreStateErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::Vector<DisableFastSnapshotRestoreStateErrorItem> m_fastSnapshotRestoreStateErrors;
    bool m_fastSnapshotRestoreStateErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
