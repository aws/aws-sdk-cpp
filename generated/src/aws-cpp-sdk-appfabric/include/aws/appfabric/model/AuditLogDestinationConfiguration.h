/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/Destination.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains information about an audit log destination
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/AuditLogDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class AuditLogDestinationConfiguration
  {
  public:
    AWS_APPFABRIC_API AuditLogDestinationConfiguration();
    AWS_APPFABRIC_API AuditLogDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API AuditLogDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about an audit log destination.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>Contains information about an audit log destination.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>Contains information about an audit log destination.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>Contains information about an audit log destination.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>Contains information about an audit log destination.</p>
     */
    inline AuditLogDestinationConfiguration& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>Contains information about an audit log destination.</p>
     */
    inline AuditLogDestinationConfiguration& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}

  private:

    Destination m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
