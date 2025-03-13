/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/BatchState.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a Spot Fleet request that was successfully canceled.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotFleetRequestsSuccessItem">AWS
   * API Reference</a></p>
   */
  class CancelSpotFleetRequestsSuccessItem
  {
  public:
    AWS_EC2_API CancelSpotFleetRequestsSuccessItem() = default;
    AWS_EC2_API CancelSpotFleetRequestsSuccessItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CancelSpotFleetRequestsSuccessItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The current state of the Spot Fleet request.</p>
     */
    inline BatchState GetCurrentSpotFleetRequestState() const { return m_currentSpotFleetRequestState; }
    inline bool CurrentSpotFleetRequestStateHasBeenSet() const { return m_currentSpotFleetRequestStateHasBeenSet; }
    inline void SetCurrentSpotFleetRequestState(BatchState value) { m_currentSpotFleetRequestStateHasBeenSet = true; m_currentSpotFleetRequestState = value; }
    inline CancelSpotFleetRequestsSuccessItem& WithCurrentSpotFleetRequestState(BatchState value) { SetCurrentSpotFleetRequestState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous state of the Spot Fleet request.</p>
     */
    inline BatchState GetPreviousSpotFleetRequestState() const { return m_previousSpotFleetRequestState; }
    inline bool PreviousSpotFleetRequestStateHasBeenSet() const { return m_previousSpotFleetRequestStateHasBeenSet; }
    inline void SetPreviousSpotFleetRequestState(BatchState value) { m_previousSpotFleetRequestStateHasBeenSet = true; m_previousSpotFleetRequestState = value; }
    inline CancelSpotFleetRequestsSuccessItem& WithPreviousSpotFleetRequestState(BatchState value) { SetPreviousSpotFleetRequestState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const { return m_spotFleetRequestId; }
    inline bool SpotFleetRequestIdHasBeenSet() const { return m_spotFleetRequestIdHasBeenSet; }
    template<typename SpotFleetRequestIdT = Aws::String>
    void SetSpotFleetRequestId(SpotFleetRequestIdT&& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = std::forward<SpotFleetRequestIdT>(value); }
    template<typename SpotFleetRequestIdT = Aws::String>
    CancelSpotFleetRequestsSuccessItem& WithSpotFleetRequestId(SpotFleetRequestIdT&& value) { SetSpotFleetRequestId(std::forward<SpotFleetRequestIdT>(value)); return *this;}
    ///@}
  private:

    BatchState m_currentSpotFleetRequestState{BatchState::NOT_SET};
    bool m_currentSpotFleetRequestStateHasBeenSet = false;

    BatchState m_previousSpotFleetRequestState{BatchState::NOT_SET};
    bool m_previousSpotFleetRequestStateHasBeenSet = false;

    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
