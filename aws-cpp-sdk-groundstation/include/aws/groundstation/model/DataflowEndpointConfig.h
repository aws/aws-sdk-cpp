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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about the dataflow endpoint <code>Config</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DataflowEndpointConfig">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API DataflowEndpointConfig
  {
  public:
    DataflowEndpointConfig();
    DataflowEndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    DataflowEndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline const Aws::String& GetDataflowEndpointName() const{ return m_dataflowEndpointName; }

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline bool DataflowEndpointNameHasBeenSet() const { return m_dataflowEndpointNameHasBeenSet; }

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline void SetDataflowEndpointName(const Aws::String& value) { m_dataflowEndpointNameHasBeenSet = true; m_dataflowEndpointName = value; }

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline void SetDataflowEndpointName(Aws::String&& value) { m_dataflowEndpointNameHasBeenSet = true; m_dataflowEndpointName = std::move(value); }

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline void SetDataflowEndpointName(const char* value) { m_dataflowEndpointNameHasBeenSet = true; m_dataflowEndpointName.assign(value); }

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline DataflowEndpointConfig& WithDataflowEndpointName(const Aws::String& value) { SetDataflowEndpointName(value); return *this;}

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline DataflowEndpointConfig& WithDataflowEndpointName(Aws::String&& value) { SetDataflowEndpointName(std::move(value)); return *this;}

    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline DataflowEndpointConfig& WithDataflowEndpointName(const char* value) { SetDataflowEndpointName(value); return *this;}

  private:

    Aws::String m_dataflowEndpointName;
    bool m_dataflowEndpointNameHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
