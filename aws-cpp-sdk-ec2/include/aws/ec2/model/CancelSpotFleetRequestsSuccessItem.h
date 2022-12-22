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
    AWS_EC2_API CancelSpotFleetRequestsSuccessItem();
    AWS_EC2_API CancelSpotFleetRequestsSuccessItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CancelSpotFleetRequestsSuccessItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The current state of the Spot Fleet request.</p>
     */
    inline const BatchState& GetCurrentSpotFleetRequestState() const{ return m_currentSpotFleetRequestState; }

    /**
     * <p>The current state of the Spot Fleet request.</p>
     */
    inline bool CurrentSpotFleetRequestStateHasBeenSet() const { return m_currentSpotFleetRequestStateHasBeenSet; }

    /**
     * <p>The current state of the Spot Fleet request.</p>
     */
    inline void SetCurrentSpotFleetRequestState(const BatchState& value) { m_currentSpotFleetRequestStateHasBeenSet = true; m_currentSpotFleetRequestState = value; }

    /**
     * <p>The current state of the Spot Fleet request.</p>
     */
    inline void SetCurrentSpotFleetRequestState(BatchState&& value) { m_currentSpotFleetRequestStateHasBeenSet = true; m_currentSpotFleetRequestState = std::move(value); }

    /**
     * <p>The current state of the Spot Fleet request.</p>
     */
    inline CancelSpotFleetRequestsSuccessItem& WithCurrentSpotFleetRequestState(const BatchState& value) { SetCurrentSpotFleetRequestState(value); return *this;}

    /**
     * <p>The current state of the Spot Fleet request.</p>
     */
    inline CancelSpotFleetRequestsSuccessItem& WithCurrentSpotFleetRequestState(BatchState&& value) { SetCurrentSpotFleetRequestState(std::move(value)); return *this;}


    /**
     * <p>The previous state of the Spot Fleet request.</p>
     */
    inline const BatchState& GetPreviousSpotFleetRequestState() const{ return m_previousSpotFleetRequestState; }

    /**
     * <p>The previous state of the Spot Fleet request.</p>
     */
    inline bool PreviousSpotFleetRequestStateHasBeenSet() const { return m_previousSpotFleetRequestStateHasBeenSet; }

    /**
     * <p>The previous state of the Spot Fleet request.</p>
     */
    inline void SetPreviousSpotFleetRequestState(const BatchState& value) { m_previousSpotFleetRequestStateHasBeenSet = true; m_previousSpotFleetRequestState = value; }

    /**
     * <p>The previous state of the Spot Fleet request.</p>
     */
    inline void SetPreviousSpotFleetRequestState(BatchState&& value) { m_previousSpotFleetRequestStateHasBeenSet = true; m_previousSpotFleetRequestState = std::move(value); }

    /**
     * <p>The previous state of the Spot Fleet request.</p>
     */
    inline CancelSpotFleetRequestsSuccessItem& WithPreviousSpotFleetRequestState(const BatchState& value) { SetPreviousSpotFleetRequestState(value); return *this;}

    /**
     * <p>The previous state of the Spot Fleet request.</p>
     */
    inline CancelSpotFleetRequestsSuccessItem& WithPreviousSpotFleetRequestState(BatchState&& value) { SetPreviousSpotFleetRequestState(std::move(value)); return *this;}


    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const{ return m_spotFleetRequestId; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline bool SpotFleetRequestIdHasBeenSet() const { return m_spotFleetRequestIdHasBeenSet; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const Aws::String& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(Aws::String&& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = std::move(value); }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const char* value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId.assign(value); }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline CancelSpotFleetRequestsSuccessItem& WithSpotFleetRequestId(const Aws::String& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline CancelSpotFleetRequestsSuccessItem& WithSpotFleetRequestId(Aws::String&& value) { SetSpotFleetRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline CancelSpotFleetRequestsSuccessItem& WithSpotFleetRequestId(const char* value) { SetSpotFleetRequestId(value); return *this;}

  private:

    BatchState m_currentSpotFleetRequestState;
    bool m_currentSpotFleetRequestStateHasBeenSet = false;

    BatchState m_previousSpotFleetRequestState;
    bool m_previousSpotFleetRequestStateHasBeenSet = false;

    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
