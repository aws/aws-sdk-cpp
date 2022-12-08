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
   * <p>Contains information about the service where CloudTrail delivers
   * events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_CLOUDTRAIL_API Destination();
    AWS_CLOUDTRAIL_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of destination for events arriving from a channel. For
     * service-linked channels, the value is <code>AWS_SERVICE</code>.</p>
     */
    inline const DestinationType& GetType() const{ return m_type; }

    /**
     * <p>The type of destination for events arriving from a channel. For
     * service-linked channels, the value is <code>AWS_SERVICE</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of destination for events arriving from a channel. For
     * service-linked channels, the value is <code>AWS_SERVICE</code>.</p>
     */
    inline void SetType(const DestinationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of destination for events arriving from a channel. For
     * service-linked channels, the value is <code>AWS_SERVICE</code>.</p>
     */
    inline void SetType(DestinationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of destination for events arriving from a channel. For
     * service-linked channels, the value is <code>AWS_SERVICE</code>.</p>
     */
    inline Destination& WithType(const DestinationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of destination for events arriving from a channel. For
     * service-linked channels, the value is <code>AWS_SERVICE</code>.</p>
     */
    inline Destination& WithType(DestinationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>For service-linked channels, the value is the name of the Amazon Web Services
     * service.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>For service-linked channels, the value is the name of the Amazon Web Services
     * service.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>For service-linked channels, the value is the name of the Amazon Web Services
     * service.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>For service-linked channels, the value is the name of the Amazon Web Services
     * service.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>For service-linked channels, the value is the name of the Amazon Web Services
     * service.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>For service-linked channels, the value is the name of the Amazon Web Services
     * service.</p>
     */
    inline Destination& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>For service-linked channels, the value is the name of the Amazon Web Services
     * service.</p>
     */
    inline Destination& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>For service-linked channels, the value is the name of the Amazon Web Services
     * service.</p>
     */
    inline Destination& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    DestinationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
