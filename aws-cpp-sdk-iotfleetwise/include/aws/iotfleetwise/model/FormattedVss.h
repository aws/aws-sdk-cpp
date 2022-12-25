/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Vehicle Signal Specification (VSS) is a precise language used to describe and
   * model signals in vehicle networks. The JSON file collects signal specificiations
   * in a VSS format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/FormattedVss">AWS
   * API Reference</a></p>
   */
  class FormattedVss
  {
  public:
    AWS_IOTFLEETWISE_API FormattedVss();
    AWS_IOTFLEETWISE_API FormattedVss(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API FormattedVss& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides the VSS in JSON format.</p>
     */
    inline const Aws::String& GetVssJson() const{ return m_vssJson; }

    /**
     * <p>Provides the VSS in JSON format.</p>
     */
    inline bool VssJsonHasBeenSet() const { return m_vssJsonHasBeenSet; }

    /**
     * <p>Provides the VSS in JSON format.</p>
     */
    inline void SetVssJson(const Aws::String& value) { m_vssJsonHasBeenSet = true; m_vssJson = value; }

    /**
     * <p>Provides the VSS in JSON format.</p>
     */
    inline void SetVssJson(Aws::String&& value) { m_vssJsonHasBeenSet = true; m_vssJson = std::move(value); }

    /**
     * <p>Provides the VSS in JSON format.</p>
     */
    inline void SetVssJson(const char* value) { m_vssJsonHasBeenSet = true; m_vssJson.assign(value); }

    /**
     * <p>Provides the VSS in JSON format.</p>
     */
    inline FormattedVss& WithVssJson(const Aws::String& value) { SetVssJson(value); return *this;}

    /**
     * <p>Provides the VSS in JSON format.</p>
     */
    inline FormattedVss& WithVssJson(Aws::String&& value) { SetVssJson(std::move(value)); return *this;}

    /**
     * <p>Provides the VSS in JSON format.</p>
     */
    inline FormattedVss& WithVssJson(const char* value) { SetVssJson(value); return *this;}

  private:

    Aws::String m_vssJson;
    bool m_vssJsonHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
