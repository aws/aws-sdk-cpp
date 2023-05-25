/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/CanDbcDefinition.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Specifications for defining a vehicle network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/NetworkFileDefinition">AWS
   * API Reference</a></p>
   */
  class NetworkFileDefinition
  {
  public:
    AWS_IOTFLEETWISE_API NetworkFileDefinition();
    AWS_IOTFLEETWISE_API NetworkFileDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API NetworkFileDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information, including CAN DBC files, about the configurations used to create
     * a decoder manifest.</p>
     */
    inline const CanDbcDefinition& GetCanDbc() const{ return m_canDbc; }

    /**
     * <p>Information, including CAN DBC files, about the configurations used to create
     * a decoder manifest.</p>
     */
    inline bool CanDbcHasBeenSet() const { return m_canDbcHasBeenSet; }

    /**
     * <p>Information, including CAN DBC files, about the configurations used to create
     * a decoder manifest.</p>
     */
    inline void SetCanDbc(const CanDbcDefinition& value) { m_canDbcHasBeenSet = true; m_canDbc = value; }

    /**
     * <p>Information, including CAN DBC files, about the configurations used to create
     * a decoder manifest.</p>
     */
    inline void SetCanDbc(CanDbcDefinition&& value) { m_canDbcHasBeenSet = true; m_canDbc = std::move(value); }

    /**
     * <p>Information, including CAN DBC files, about the configurations used to create
     * a decoder manifest.</p>
     */
    inline NetworkFileDefinition& WithCanDbc(const CanDbcDefinition& value) { SetCanDbc(value); return *this;}

    /**
     * <p>Information, including CAN DBC files, about the configurations used to create
     * a decoder manifest.</p>
     */
    inline NetworkFileDefinition& WithCanDbc(CanDbcDefinition&& value) { SetCanDbc(std::move(value)); return *this;}

  private:

    CanDbcDefinition m_canDbc;
    bool m_canDbcHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
