/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/SocketAddress.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/EndpointStatus.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about a dataflow endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DataflowEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API DataflowEndpoint
  {
  public:
    DataflowEndpoint();
    DataflowEndpoint(Aws::Utils::Json::JsonView jsonValue);
    DataflowEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Socket address of a dataflow endpoint.</p>
     */
    inline const SocketAddress& GetAddress() const{ return m_address; }

    /**
     * <p>Socket address of a dataflow endpoint.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>Socket address of a dataflow endpoint.</p>
     */
    inline void SetAddress(const SocketAddress& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>Socket address of a dataflow endpoint.</p>
     */
    inline void SetAddress(SocketAddress&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>Socket address of a dataflow endpoint.</p>
     */
    inline DataflowEndpoint& WithAddress(const SocketAddress& value) { SetAddress(value); return *this;}

    /**
     * <p>Socket address of a dataflow endpoint.</p>
     */
    inline DataflowEndpoint& WithAddress(SocketAddress&& value) { SetAddress(std::move(value)); return *this;}


    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline DataflowEndpoint& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline DataflowEndpoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline DataflowEndpoint& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Status of a dataflow endpoint.</p>
     */
    inline const EndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of a dataflow endpoint.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of a dataflow endpoint.</p>
     */
    inline void SetStatus(const EndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of a dataflow endpoint.</p>
     */
    inline void SetStatus(EndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of a dataflow endpoint.</p>
     */
    inline DataflowEndpoint& WithStatus(const EndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of a dataflow endpoint.</p>
     */
    inline DataflowEndpoint& WithStatus(EndpointStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    SocketAddress m_address;
    bool m_addressHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    EndpointStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
