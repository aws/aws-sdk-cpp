/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DisableFastSnapshotRestoreStateError.h>
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
   * <p>Contains information about an error that occurred when disabling fast
   * snapshot restores.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableFastSnapshotRestoreStateErrorItem">AWS
   * API Reference</a></p>
   */
  class DisableFastSnapshotRestoreStateErrorItem
  {
  public:
    AWS_EC2_API DisableFastSnapshotRestoreStateErrorItem();
    AWS_EC2_API DisableFastSnapshotRestoreStateErrorItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DisableFastSnapshotRestoreStateErrorItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline DisableFastSnapshotRestoreStateErrorItem& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline DisableFastSnapshotRestoreStateErrorItem& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline DisableFastSnapshotRestoreStateErrorItem& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error.</p>
     */
    inline const DisableFastSnapshotRestoreStateError& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const DisableFastSnapshotRestoreStateError& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(DisableFastSnapshotRestoreStateError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline DisableFastSnapshotRestoreStateErrorItem& WithError(const DisableFastSnapshotRestoreStateError& value) { SetError(value); return *this;}
    inline DisableFastSnapshotRestoreStateErrorItem& WithError(DisableFastSnapshotRestoreStateError&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    DisableFastSnapshotRestoreStateError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
