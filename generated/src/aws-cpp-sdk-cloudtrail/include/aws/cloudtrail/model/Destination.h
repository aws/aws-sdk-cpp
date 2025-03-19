/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/DestinationType.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Contains information about the destination receiving events.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_CLOUDTRAIL_API Destination() = default;
    AWS_CLOUDTRAIL_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of destination for events arriving from a channel. For channels used
     * for a CloudTrail Lake integration, the value is <code>EVENT_DATA_STORE</code>.
     * For service-linked channels, the value is <code>AWS_SERVICE</code>. </p>
     */
    inline DestinationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DestinationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Destination& WithType(DestinationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> For channels used for a CloudTrail Lake integration, the location is the ARN
     * of an event data store that receives events from a channel. For service-linked
     * channels, the location is the name of the Amazon Web Services service.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    Destination& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    DestinationType m_type{DestinationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
