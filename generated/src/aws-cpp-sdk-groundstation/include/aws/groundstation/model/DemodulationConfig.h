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
   * <p>Information about the demodulation <code>Config</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DemodulationConfig">AWS
   * API Reference</a></p>
   */
  class DemodulationConfig
  {
  public:
    AWS_GROUNDSTATION_API DemodulationConfig();
    AWS_GROUNDSTATION_API DemodulationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API DemodulationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unvalidated JSON of a demodulation <code>Config</code>.</p>
     */
    inline const Aws::String& GetUnvalidatedJSON() const{ return m_unvalidatedJSON; }

    /**
     * <p>Unvalidated JSON of a demodulation <code>Config</code>.</p>
     */
    inline bool UnvalidatedJSONHasBeenSet() const { return m_unvalidatedJSONHasBeenSet; }

    /**
     * <p>Unvalidated JSON of a demodulation <code>Config</code>.</p>
     */
    inline void SetUnvalidatedJSON(const Aws::String& value) { m_unvalidatedJSONHasBeenSet = true; m_unvalidatedJSON = value; }

    /**
     * <p>Unvalidated JSON of a demodulation <code>Config</code>.</p>
     */
    inline void SetUnvalidatedJSON(Aws::String&& value) { m_unvalidatedJSONHasBeenSet = true; m_unvalidatedJSON = std::move(value); }

    /**
     * <p>Unvalidated JSON of a demodulation <code>Config</code>.</p>
     */
    inline void SetUnvalidatedJSON(const char* value) { m_unvalidatedJSONHasBeenSet = true; m_unvalidatedJSON.assign(value); }

    /**
     * <p>Unvalidated JSON of a demodulation <code>Config</code>.</p>
     */
    inline DemodulationConfig& WithUnvalidatedJSON(const Aws::String& value) { SetUnvalidatedJSON(value); return *this;}

    /**
     * <p>Unvalidated JSON of a demodulation <code>Config</code>.</p>
     */
    inline DemodulationConfig& WithUnvalidatedJSON(Aws::String&& value) { SetUnvalidatedJSON(std::move(value)); return *this;}

    /**
     * <p>Unvalidated JSON of a demodulation <code>Config</code>.</p>
     */
    inline DemodulationConfig& WithUnvalidatedJSON(const char* value) { SetUnvalidatedJSON(value); return *this;}

  private:

    Aws::String m_unvalidatedJSON;
    bool m_unvalidatedJSONHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
