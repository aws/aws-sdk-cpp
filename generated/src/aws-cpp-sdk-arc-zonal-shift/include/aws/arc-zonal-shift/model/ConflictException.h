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
    AWS_ARCZONALSHIFT_API ConflictException();
    AWS_ARCZONALSHIFT_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCZONALSHIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The reason for the conflict exception.</p>
     */
    inline const ConflictExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the conflict exception.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the conflict exception.</p>
     */
    inline void SetReason(const ConflictExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the conflict exception.</p>
     */
    inline void SetReason(ConflictExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the conflict exception.</p>
     */
    inline ConflictException& WithReason(const ConflictExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the conflict exception.</p>
     */
    inline ConflictException& WithReason(ConflictExceptionReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>The zonal shift ID associated with the conflict exception.</p>
     */
    inline const Aws::String& GetZonalShiftId() const{ return m_zonalShiftId; }

    /**
     * <p>The zonal shift ID associated with the conflict exception.</p>
     */
    inline bool ZonalShiftIdHasBeenSet() const { return m_zonalShiftIdHasBeenSet; }

    /**
     * <p>The zonal shift ID associated with the conflict exception.</p>
     */
    inline void SetZonalShiftId(const Aws::String& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = value; }

    /**
     * <p>The zonal shift ID associated with the conflict exception.</p>
     */
    inline void SetZonalShiftId(Aws::String&& value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId = std::move(value); }

    /**
     * <p>The zonal shift ID associated with the conflict exception.</p>
     */
    inline void SetZonalShiftId(const char* value) { m_zonalShiftIdHasBeenSet = true; m_zonalShiftId.assign(value); }

    /**
     * <p>The zonal shift ID associated with the conflict exception.</p>
     */
    inline ConflictException& WithZonalShiftId(const Aws::String& value) { SetZonalShiftId(value); return *this;}

    /**
     * <p>The zonal shift ID associated with the conflict exception.</p>
     */
    inline ConflictException& WithZonalShiftId(Aws::String&& value) { SetZonalShiftId(std::move(value)); return *this;}

    /**
     * <p>The zonal shift ID associated with the conflict exception.</p>
     */
    inline ConflictException& WithZonalShiftId(const char* value) { SetZonalShiftId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ConflictExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_zonalShiftId;
    bool m_zonalShiftIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
