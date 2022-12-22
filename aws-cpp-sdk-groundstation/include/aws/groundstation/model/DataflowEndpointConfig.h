/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DataflowEndpointConfig
  {
  public:
    AWS_GROUNDSTATION_API DataflowEndpointConfig();
    AWS_GROUNDSTATION_API DataflowEndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API DataflowEndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    /**
     * <p>Region of a dataflow endpoint.</p>
     */
    inline const Aws::String& GetDataflowEndpointRegion() const{ return m_dataflowEndpointRegion; }

    /**
     * <p>Region of a dataflow endpoint.</p>
     */
    inline bool DataflowEndpointRegionHasBeenSet() const { return m_dataflowEndpointRegionHasBeenSet; }

    /**
     * <p>Region of a dataflow endpoint.</p>
     */
    inline void SetDataflowEndpointRegion(const Aws::String& value) { m_dataflowEndpointRegionHasBeenSet = true; m_dataflowEndpointRegion = value; }

    /**
     * <p>Region of a dataflow endpoint.</p>
     */
    inline void SetDataflowEndpointRegion(Aws::String&& value) { m_dataflowEndpointRegionHasBeenSet = true; m_dataflowEndpointRegion = std::move(value); }

    /**
     * <p>Region of a dataflow endpoint.</p>
     */
    inline void SetDataflowEndpointRegion(const char* value) { m_dataflowEndpointRegionHasBeenSet = true; m_dataflowEndpointRegion.assign(value); }

    /**
     * <p>Region of a dataflow endpoint.</p>
     */
    inline DataflowEndpointConfig& WithDataflowEndpointRegion(const Aws::String& value) { SetDataflowEndpointRegion(value); return *this;}

    /**
     * <p>Region of a dataflow endpoint.</p>
     */
    inline DataflowEndpointConfig& WithDataflowEndpointRegion(Aws::String&& value) { SetDataflowEndpointRegion(std::move(value)); return *this;}

    /**
     * <p>Region of a dataflow endpoint.</p>
     */
    inline DataflowEndpointConfig& WithDataflowEndpointRegion(const char* value) { SetDataflowEndpointRegion(value); return *this;}

  private:

    Aws::String m_dataflowEndpointName;
    bool m_dataflowEndpointNameHasBeenSet = false;

    Aws::String m_dataflowEndpointRegion;
    bool m_dataflowEndpointRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
