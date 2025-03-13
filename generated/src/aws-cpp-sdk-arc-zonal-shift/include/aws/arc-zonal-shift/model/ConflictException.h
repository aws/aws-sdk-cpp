/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/ConflictExceptionReason.h>
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
namespace ARCZonalShift
{
namespace Model
{

  /**
   * <p>The request could not be processed because of conflict in the current state
   * of the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_ARCZONALSHIFT_API ConflictException() = default;
    AWS_ARCZONALSHIFT_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ConflictException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the conflict exception.</p>
     */
    inline ConflictExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(ConflictExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline ConflictException& WithReason(ConflictExceptionReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zonal shift ID associated with the conflict exception.</p>
     */
    inline const Aws::String& GetZonalShiftId() const { return m_zonalShiftId; }
    inline bool ZonalShiftIdHasBeenSet() const { return m_zonalShiftIdHasBeenSet; }
    template<typename ZonalShiftIdT = Aws::String>
    void SetZonalShiftId(ZonalShiftIdT&& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = std::forward<ZonalShiftIdT>(value); }
    template<typename ZonalShiftIdT = Aws::String>
    ConflictException& WithZonalShiftId(ZonalShiftIdT&& value) { SetZonalShiftId(std::forward<ZonalShiftIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ConflictExceptionReason m_reason{ConflictExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::String m_zonalShiftId;
    bool m_zonalShiftIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
