/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/RouteMatrixErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>An error corresponding to the calculation of a route between the
   * <code>DeparturePosition</code> and <code>DestinationPosition</code>.</p> <p>The
   * error code can be one of the following:</p> <ul> <li> <p>
   * <code>RouteNotFound</code> - Unable to find a valid route with the given
   * parameters.</p> </li> </ul> <ul> <li> <p> <code>RouteTooLong</code> - Route
   * calculation went beyond the maximum size of a route and was terminated before
   * completion.</p> </li> </ul> <ul> <li> <p> <code>PositionsNotFound</code> - One
   * or more of the input positions were not found on the route network.</p> </li>
   * </ul> <ul> <li> <p> <code>DestinationPositionNotFound</code> - The destination
   * position was not found on the route network.</p> </li> </ul> <ul> <li> <p>
   * <code>DeparturePositionNotFound</code> - The departure position was not found on
   * the route network.</p> </li> </ul> <ul> <li> <p>
   * <code>OtherValidationError</code> - The given inputs were not valid or a route
   * was not found. More information is given in the error <code>Message</code> </p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/RouteMatrixEntryError">AWS
   * API Reference</a></p>
   */
  class RouteMatrixEntryError
  {
  public:
    AWS_LOCATIONSERVICE_API RouteMatrixEntryError() = default;
    AWS_LOCATIONSERVICE_API RouteMatrixEntryError(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API RouteMatrixEntryError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of error which occurred for the route calculation.</p>
     */
    inline RouteMatrixErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(RouteMatrixErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline RouteMatrixEntryError& WithCode(RouteMatrixErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the error that occurred for the route calculation.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    RouteMatrixEntryError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    RouteMatrixErrorCode m_code{RouteMatrixErrorCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
